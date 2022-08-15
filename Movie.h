// Movie.hh
#ifndef MOVIE_H
#define MOVIE_H
#include <string>

enum class PRICE_CODE { REGULAR  =0, NEW_RELEASE, CHILDRENS
};

class Movie {
public:
  Movie( const std::string& title, PRICE_CODE priceCode = PRICE_CODE::REGULAR );

  PRICE_CODE getPriceCode() const;
  void setPriceCode(PRICE_CODE arg );
  std::string getTitle() const;

private:
  std::string movieTitle;
  PRICE_CODE moviePriceCode;
};

inline Movie::Movie( const std::string& title, PRICE_CODE priceCode ):
  movieTitle( title ),
  moviePriceCode( priceCode )
{}

inline PRICE_CODE Movie::getPriceCode() const { return moviePriceCode; }

inline void Movie::setPriceCode(PRICE_CODE arg ) { moviePriceCode = arg; }

inline std::string Movie::getTitle() const { return movieTitle; }

#endif // MOVIE_H
