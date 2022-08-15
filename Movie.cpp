// Movie.cpp
#include "Movie.h"

Movie::Movie(const std::string& title, PRICE_CODE priceCode)
	:title(title)
{
	price = Price(priceCode);
}

PRICE_CODE Movie::getPriceCode() const
{ 
	return price.GetCode();
}

void Movie::setPriceCode(PRICE_CODE arg) 
{ 
	price = Price(arg);
}

 std::string Movie::getTitle() const
 { 
	 return title; 
 }
