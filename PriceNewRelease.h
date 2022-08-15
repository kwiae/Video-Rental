#pragma once
#include "Price.h"

class PriceNewRelease : public Price {
public:
	PriceNewRelease();

	virtual double GetRentalFee(int daysRented) override;
	virtual int GetRentalPoint(int daysRented) override;

private:
	const double baseFee = 3.0;

};