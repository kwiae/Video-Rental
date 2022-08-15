// Movie.cpp
#include "Movie.h"
#include "PriceFactory.h"

Movie::Movie(const std::string& title, PRICE_CODE code)
	:title(title)
{
	setPriceCode(code);
}

PRICE_CODE Movie::getPriceCode() const
{ 
	return price->GetCode();
}

void Movie::setPriceCode(PRICE_CODE code)
{ 
	price = PriceFactory::Create(code);
}

 std::string Movie::getTitle() const
 { 
	 return title; 
 }
