// Pixels.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <math.h>
#include "pixels.h"

std::vector<std::string> pixels;
std::vector<int> scaledPixels;

int min = 0;
int max = 15;

int _tmain(int argc, _TCHAR* argv[])
{
	getPixels();
	double num;
	double den;
	double result;


	for (int i = 0; i < pixels.size(); i++)
	{
		int pix = atoi(pixels[i].c_str());
		num = 255 * (pix - min);
		den = max - min;
		result = num / den;
		scaledPixels.push_back(result);
	}
	if (argv[1] == argv[2])
	{
		std::cout << "They are the same" << std::endl;
		std::cout << argv[1] << "," << argv[2] << std::endl;
	}

	for (int i = 0; i < scaledPixels.size(); i++)
	{	
		std::cout << "Scaled Pix: " << scaledPixels[i] << std::endl;
	}


	std::cout << "Press any key.." << std::endl;
	std::cin.get();

	return 0;
}

void getPixels()
{
	pixels.push_back("0");
	pixels.push_back("0");
	pixels.push_back("3");
	pixels.push_back("11");
	pixels.push_back("11");
	pixels.push_back("3");
	pixels.push_back("15");
	pixels.push_back("0");
}
