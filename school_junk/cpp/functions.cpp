#include <iostream>
#include <cstdlib>
#include <string>
#include "functions.h"  //H_FUNCTIONS

std::string calculation; //@param calculation - ASCII data string (const char[2]) defined by console input
std::string y_or_n; //@param y_or_n - ASCII data string (const char[2]) defined by console input

void calc(float& a, float& b)
{
	std::cout << "enter a value (a): ";
	std::cin >> a;
	std::cout << "enter a value (b): ";
	std::cin >> b;
	std::cout << "select a calculation (+, -, *, /): ";
	std::cin >> calculation;
	
	if (calculation == "+")
		std::cout << a << " + " << b << " = " << a + b << std::endl;
	else if (calculation == "-")
		std::cout << a << " - " << b << " = " << a - b << std::endl;
	else if (calculation == "*")
		std::cout << a << " * " << b << " = " << a * b << std::endl;
	else if (calculation == "/" && b != 0)
		std::cout << a << " / " << b << " = " << a / b << std::endl;
	else if (calculation == "/" && b == 0)
		std::cout << "invalid operation - cannot divide by 0" << std::endl;
	else
	{
		std::cout << "invalid operation" << std::endl;
		calc(a, b);
	}
	
	std::cout << "would you like to quit? (y/n): ";
	std::cin >> y_or_n;
	
	if (y_or_n == "y" || y_or_n == "Y")
		exit(0);
	else
		calc(a, b);
}

void preswap(int& x, int& y)
{
	std::cout << "enter a value (x): ";
	std::cin >> x;
	std::cout << "enter a value (y): ";
	std::cin >> y;
	
	std::cout << "int& x == " << x << ", int& y == " << y << std::endl;
}

void swap(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void postswap(int& x, int& y)
{
	std::cout << "values have been swapped." << std::endl;
	std::cout << "int& x == " << x << ", int& y == " << y << std::endl;
}