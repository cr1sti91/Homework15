#include <iostream>


//Cream o functie sablon ce sa primesca argumente de tipuri diferite
template <typename T, typename U>
void swap(T* param1, U* param2) 
{
	T temp = *param1; 
	*param1 = *param2;
	*param2 = temp;
}

template <typename T, typename U>
void swap(T& param1, U& param2)
{
	T temp = param1; 
	param1 = param2; 
	param2 = temp;
}

int main()
{
	int a = 12;
	long double b = 29.1;

	std::cout << "Inainte de schimbare: " << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;

	swap(a, b); 
	
	std::cout << "Dupa schimbare: " << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
}



