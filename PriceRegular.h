#pragma once
#include "Price.h"

class PriceRegular : public Price {
public:
	PriceRegular(PRICE_CODE code = PRICE_CODE::REGULAR);

	virtual double GetRentalFee(int daysRented) override;
	virtual int GetRentalPoint(int daysRented) override;

};