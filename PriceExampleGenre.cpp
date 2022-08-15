#include "PriceExampleGenre.h"

PriceExampleGenre::PriceExampleGenre()
	:Price(PRICE_CODE::EXAMPLE_GENRE)
{

}

double PriceExampleGenre::GetRentalFee(int daysRented)
{
	double fee = baseFee;

	if (daysRented > 5)
		fee += 4 * 1.0;
	else if (daysRented > 1)
		fee += (daysRented - 1) * 1.0;

	return fee;
}

int PriceExampleGenre::GetRentalPoint(int daysRented)
{
	int point = 1;

	if (daysRented > 3)
		point += 2;
	else if (daysRented > 1)
		point += 1;

	return point;
}