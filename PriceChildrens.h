#pragma once
#include "Price.h"

class PriceChildrens : public Price {
public:
	PriceChildrens(PRICE_CODE code = PRICE_CODE::REGULAR);

	virtual double GetRentalFee(int daysRented) override;
	virtual int GetRentalPoint(int daysRented) override;
};