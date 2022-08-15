#pragma once
#include "Price.h"

class PriceRegular : public Price {
public:
	PriceRegular();

	virtual double GetRentalFee(int daysRented) override;
	virtual int GetRentalPoint(int daysRented) override;

private:
	const double baseFee = 2.0;

};