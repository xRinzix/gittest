// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double abs_value(double x)
{
	if (x < 0)
		return -x;
	else
		return x;
}
double abs_value_2(double x)
{
	return x < 0 ? -x : x;
}

void print_divisors(unsigned int n)
{
	for (unsigned int i = 1; i <= n; ++i)
	{
		if (n % i == 0)
			std::cout << i << std::endl;
	}
}

bool bissextile(short int y)
{
	if (y % 400 == 0)
		return true;
	if (y % 100 == 0)
		return false;
	if (y % 4 == 0)
		return true;
	else
		return false;
}

void print_matrix(int width, int height)
{
	int number = 0;

	for (int row = 0; row < height; ++row)
	{
		for (int col = 0; col < width; ++col)
		{
			std::cout << number++ << "\t";
		}
		std::cout << std::endl;
	}
}
int main()
{
	int width = 11;
	int height = 5;
	print_matrix(width, height);
	std::cout << "GITTEST" << std::endl;
	std::cout << "AGAIN TESTING BRANCH" << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
