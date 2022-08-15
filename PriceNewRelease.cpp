#include "PriceNewRelease.h"

PriceNewRelease::PriceNewRelease(PRICE_CODE code)
	:Price(code)
{

}
double PriceNewRelease::GetRentalFee(int daysRented)
{
	return 0.0;
}

int PriceNewRelease::GetRentalPoint(int daysRented)
{
	return 0;
}
