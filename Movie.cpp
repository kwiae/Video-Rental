// Movie.cpp
#include "Movie.h"
#include "PriceFactory.h"

Movie::Movie(const std::string& title, PRICE_CODE code)
	:title(title)
{
	SetPriceCode(code);
}

PRICE_CODE Movie::GetPriceCode() const
{ 
	if (!price)
		return PRICE_CODE::UNKNOWN;

	return price->GetCode();
}

void Movie::SetPriceCode(PRICE_CODE code)
{ 
	price = PriceFactory::Create(code);
}

 std::string Movie::GetTitle() const
 { 
	 return title; 
 }


 double Movie::GetRentalFee(int daysRented) const
 {
	 if (!price)
		 return 0.0;

	 return price->GetRentalFee(daysRented);
 }
 int Movie::GetRentalPoint(int daysRented) const
 {
	 if (!price)
		 return 0;

	 return price->GetRentalPoint(daysRented);
 }
