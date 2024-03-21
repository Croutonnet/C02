#include <cstdint>
#include <iostream>

struct	Data{
	unsigned int secretNumber;
	std::string string;
};

uintptr_t serialize(Data* ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){
	return reinterpret_cast<Data *>(raw);
}

int	main(void){
	Data	input;
	Data	*res;

	input.secretNumber = 15;
	input.string = "Bon matin";
	uintptr_t ptr = serialize(&input);
	std::cout << ptr << std::endl << std::endl;
	res = deserialize(ptr);
	std::cout << res->secretNumber << std::endl;
	std::cout << res->string << std::endl;
}