#pragma once
#include <iostream>
#include "Price.h"
#include "PriceNewRelease.h"
#include "PriceRegular.h"
#include "PriceChildrens.h"
#include "PriceExampleGenre.h"

class PriceFactory {
public:
	static std::shared_ptr<Price> Create(PRICE_CODE code)
	{
		switch (code)
		{
		case PRICE_CODE::REGULAR:
			return std::make_shared<PriceRegular>();
		case PRICE_CODE::NEW_RELEASE:
			return std::make_shared<PriceNewRelease>();
		case PRICE_CODE::CHILDRENS:
			return std::make_shared<PriceChildrens>();
		case PRICE_CODE::EXAMPLE_GENRE:
			return std::make_shared<PriceExampleGenre>();
		default:
			return std::make_shared<PriceRegular>();
		}
	}
};