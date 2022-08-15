#include "PriceRegular.h"

PriceRegular::PriceRegular(PRICE_CODE code)
	:Price(code)
{

}

double PriceRegular::GetRentalFee(int daysRented)
{
	return 0.0;
}

int PriceRegular::GetRentalPoint(int daysRented)
{
	return 0;
}
