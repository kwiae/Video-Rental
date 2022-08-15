#include "PriceChildrens.h"

PriceChildrens::PriceChildrens(PRICE_CODE code)
	:Price(code)
{

}

double PriceChildrens::GetRentalFee(int daysRented)
{
	double fee = baseFee;

	if (daysRented > 3)
		fee += (daysRented - 3) * 1.5;

	return fee;
}

int PriceChildrens::GetRentalPoint(int daysRented)
{
	int point = 1;

	return point;
}