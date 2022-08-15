// Rental.hh
#ifndef RENTAL_H
#define RENTAL_H
#include "Movie.h"

class Rental {
public:
  Rental( const Movie& movie, int daysRented );

  double GetFee() const;
  int GetPoint() const;
  std::string GetMovieTitle() const;

private:
	int GetDaysRented() const;

private:
  Movie rentedMovie;
  int nDaysRented;
};

#endif // RENTAL_H
