// Rental.hh
#ifndef RENTAL_H
#define RENTAL_H
#include "Movie.h"

class Rental {
public:
  Rental( const Movie& movie, int daysRented );

  int GetDaysRented() const;
  const Movie& GetMovie() const;
  double GetFee() const;
  int Rental::GetPoint() const;

private:

private:
  Movie rentedMovie;
  int nDaysRented;
};

#endif // RENTAL_H
