#pragma once

enum class PRICE_CODE {
	REGULAR = 0, NEW_RELEASE, CHILDRENS
};

class Price {
public:
	Price(PRICE_CODE genre = PRICE_CODE::REGULAR);

	//virtual double GetRentalFee(int daysRented) = 0;
	//virtual int GetRentalPoint(int daysRented) = 0;

	PRICE_CODE GetCode() const { return code; }

private:
	PRICE_CODE code;
};