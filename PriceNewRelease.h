#pragma once
#include "Price.h"

class PriceNewRelease : public Price {
public:
	PriceNewRelease(PRICE_CODE code = PRICE_CODE::REGULAR);

	virtual double GetRentalFee(int daysRented) override;
	virtual int GetRentalPoint(int daysRented) override;
};