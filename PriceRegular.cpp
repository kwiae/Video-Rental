#include "PriceRegular.h"

PriceRegular::PriceRegular()
	:Price(PRICE_CODE::REGULAR)
{

}

double PriceRegular::GetRentalFee(int daysRented)
{
	double fee = baseFee;

	if (daysRented > 2)
		fee += (daysRented - 2) * 1.5;

	return fee;
}

int PriceRegular::GetRentalPoint(int daysRented)
{
	int point = 1;

	return point;
}
