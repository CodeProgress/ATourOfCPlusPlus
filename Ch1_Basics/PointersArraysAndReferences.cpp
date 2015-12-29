#include "stdafx.h"
#include <iostream>


void copyTenElementsFromOneArrayToAnother()
{
	int v1[10] = { 1,2,3,4,5,6,7,8,9 };
	int v2[10];
	int v3[10];

	for (auto i = 0; i < 10; ++i)
	{
		v2[i] = v1[i];
		std::cout << i << ' ';
	}

	for (auto x : v1)      // for each x in v1
	{
		std::cout << x;
	}

}

void pointersArraysAndReferencesMain()
{
	char v[6];  // array of 6 characters
	
	// char* p;    // pointer to character.  * means "pointer to"

	char* p = &v[3];  // p points to v's fourth element

	char x = *p;     // *p is the object that p points to.  Here, * means "contents of"

	copyTenElementsFromOneArrayToAnother();

	//  &  means "reference to"
	
	// T a[10];   // array of 10 Ts
	// T* p;      // point to a T object
	// T& r;      // reference to a T object
	
	// use  nullptr  instead of  0  or  NULL
}

