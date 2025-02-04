#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<  std::endl;
	else{
		std::string str = argv[1];
		for (int i = 1; i < argc; i++)
		{
			if (i != 1)
				str += argv[i];
		}
		for (size_t i = 0; i < str.length(); i++)
			str[i] = std::toupper(str[i]);
		std::cout << str << std::endl;
	}
}
