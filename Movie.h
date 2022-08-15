// Movie.hh
#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include <iostream>
#include "Price.h"

class Movie {
public:
  Movie( const std::string& title, PRICE_CODE priceCode = PRICE_CODE::REGULAR );

  PRICE_CODE getPriceCode() const;
  void setPriceCode(PRICE_CODE arg );
  std::string getTitle() const;

private:
  std::string title;
  std::shared_ptr<Price> price;
};


#endif // MOVIE_H
