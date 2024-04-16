#include <stdexcept>
template<typename T>
Array<T>::Array(): _array(NULL), _size(1){
	cout << "Default constructor" << endl;
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n){
	cout << "Autre contructor" << endl;
	_array = new T[n];
}

template<typename T>
Array<T>::~Array(){
	cout << "Default destructor" << endl;
	delete [] _array;
}

template<typename T>
Array<T>::Array(const Array &inst): _size(inst._size){
	_array = new T[_size];
	for(unsigned int i = 0; i < _size; i++){
		_array[i] = inst[i];
	}
}

template<typename T>
T& Array<T>::operator[](const unsigned int i) const{
	if (i < 0 || i >= _size)
		throw std::out_of_range("Index is out of the array's range");
	return (_array[i]);
}

template<typename T>
Array<T>& Array<T>::operator=(const Array &rhs){
	if (this != rhs){
		delete [] _array;
		_size = rhs.size();
		_array = new T[_size];
		for(unsigned int i = 0; i < rhs.size(); i++){
			_array[i] = rhs[i];
		}
	}

}

template<typename T>
const unsigned int &Array<T>::size() const{
	return _size;
}