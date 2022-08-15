#include "PriceChildrens.h"

PriceChildrens::PriceChildrens(PRICE_CODE code)
	:Price(code)
{

}

double PriceChildrens::GetRentalFee(int daysRented)
{
	return 0.0;
}

int PriceChildrens::GetRentalPoint(int daysRented)
{
	return 0;
}