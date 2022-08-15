// Movie.hh
#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include <iostream>
#include "Price.h"

class Movie {
public:
  Movie( const std::string& title, PRICE_CODE priceCode = PRICE_CODE::REGULAR );

  double GetRentalFee(int daysRented) const;
  int GetRentalPoint(int daysRented) const;

  PRICE_CODE GetPriceCode() const;
  void SetPriceCode(PRICE_CODE arg );
  std::string GetTitle() const;

private:
  std::string title;
  std::shared_ptr<Price> price;
};


#endif // MOVIE_H
