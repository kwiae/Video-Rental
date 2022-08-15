#pragma once
#include "Price.h"

class PriceExampleGenre : public Price {
public:
	PriceExampleGenre(PRICE_CODE code = PRICE_CODE::EXAMPLE_GENRE);

	virtual double GetRentalFee(int daysRented) override;
	virtual int GetRentalPoint(int daysRented) override;

private:
	const double baseFee = 1.0;

};