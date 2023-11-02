#include <iostream>

int	main(int argc, char **argv)
{
	std::string coucou;

	if (argc == 1)
		coucou = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int j = 1; argv[j]; j++)
			coucou += argv[j];
		for (int i = 0; coucou[i] ;i++)
			coucou[i] = toupper(coucou[i]);
	}
	std::cout << coucou << std::endl;
}