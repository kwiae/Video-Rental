#include "PriceNewRelease.h"

PriceNewRelease::PriceNewRelease(PRICE_CODE code)
	:Price(code)
{

}
double PriceNewRelease::GetRentalFee(int daysRented)
{
	double fee = daysRented * baseFee;

	return fee;
}

int PriceNewRelease::GetRentalPoint(int daysRented)
{
	int point = 1;

	if (daysRented > 1)
		point += 1;

	return point;
}
