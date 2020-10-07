#include <iostream> 
#include <string>

template <typename T>
void swapVars(T& var1, T& var2)
{
	T temp;

	temp = var1;
	var1 = var2;
	var2 = temp;
}

int main()
{
	char c1 = 'a', c2 = 'z';
	int  i = 45, j = 98;
	double x = 0.001, y = 999.9;

	std::cout << "PRE - First char: " << c1 << " Second char: " << c2 << std::endl;
	swapVars(c1, c2);
	std::cout << "POST- First char: " << c1 << " Second char: " << c2 << std::endl;

	std::cout << "\nPRE - First int: " << i << " Second int: " << j << std::endl;
	swapVars(i, j);
	std::cout << "POST- First int: " << i << " Second int: " << j << std::endl;

	std::cout << "\nPRE - First double: " << x << " Second double: " << y << std::endl;
	swapVars(x, y);
	std::cout << "POST- First double: " << x << " Second double: " << y << std::endl;

	system("pause");
}