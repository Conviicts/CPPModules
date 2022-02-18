#include "Array.hpp"

int main(void) {
	{
		std::cout << "------ INTEGER ------" << std::endl;
		Array<int>	arr(5);
		Array<int>	arr_cpy(arr);

		try {
			for (unsigned int i = 0; i < arr.size(); i++) {
				arr[i] = i + 1;
				std::cout << "[" << arr[i]	<< "] ";
			}
			std::cout << std::endl;
			std::cout << "arr[6]: " << arr[6] << std::endl;
		} catch (std::exception &ex) {
			std::cout << ex.what() << std::endl;
		}
	}
	{
		std::cout << "------ FLOAT ------" << std::endl;
		Array<float>	arr(5);
		float			f_arr[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

		try {
			for (unsigned int i = 0; i < arr.size(); i++) {
				arr[i] = f_arr[i];
				std::cout << "[" << arr[i]	<< "] ";
			}
			std::cout << std::endl;
			std::cout << "arr[6]: " << arr[6] << std::endl;
		} catch (std::exception &ex) {
			std::cout << ex.what() << std::endl;
		}
	}
	{
		std::cout << "------ STRINGS ------" << std::endl;
		Array<std::string>	arr(5);
		std::string			s_arr[5] = { "qqq", "www", "eee", "rrr", "ttt" };

		try {
			for (unsigned int i = 0; i < arr.size(); i++) {
				arr[i] = s_arr[i];
				std::cout << "[" << arr[i]	<< "] ";
			}
			std::cout << std::endl;
			std::cout << "arr[6]: " << arr[6] << std::endl;
		} catch (std::exception &ex) {
			std::cout << ex.what() << std::endl;
		}
	}
}