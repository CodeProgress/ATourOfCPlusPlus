#include "stdafx.h"

constexpr double squareCE(double x) { return x*x; }

void constantsMain()
{
	const auto dmv = 17;
	auto var = 17;

	constexpr double max1 = squareCE(dmv) + 1;

}