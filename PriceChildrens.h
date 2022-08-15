#pragma once
#include "Price.h"

class PriceChildrens : public Price {
public:
	PriceChildrens();

	virtual double GetRentalFee(int daysRented) override;
	virtual int GetRentalPoint(int daysRented) override;

private:
	const double baseFee = 1.5;

};