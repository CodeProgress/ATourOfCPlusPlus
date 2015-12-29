// Ch1_Basics.cpp : Defines the entry point for the console application.

#include "stdafx.h"

#include <iostream>

using namespace std;

void typesVariablesArithmeticMain();
void functionsAndScopeMain();
void constantsMain();
void pointersArraysAndReferencesMain();

int main()
{
	std::cout << "Hello World!\n";  // << (put to) writes its second argument onto its first
									// std:: specifies that the name cout is to be found in the standard-library namespace
									// std:: is usally left out by using namespaces.  Ex:  using namespace std;

	// Chapter sections
	typesVariablesArithmeticMain();
	functionsAndScopeMain();
	constantsMain();
	pointersArraysAndReferencesMain();


	// ----end----
	std::getchar();
    return 0;  // A non zero value returned from main indicates a failure
}





