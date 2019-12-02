#include <iostream>
#include <cstdlib>
#include <string>
#include "functions.h"  //H_FUNCTIONS

float a; //@param a - decimal value defined by console input (void calc(float&, float&))
float b; //@param b - decimal value defined by console input (void calc(float&, float&))
int x; //@param x - integer value defined by console input, to be swapped with @param y
int y; //@param y - integer value defined by console input, to be swapped with @param x

int main()
{
	//root function body
	preswap(x, y);
	swap(x, y);
	postswap(x, y);
	std::cout << "" << std::endl;
	
	calc(a, b);
	
	return 0;
}