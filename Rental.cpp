#include "Rental.h"

Rental::Rental(const Movie& movie, int daysRented) 
	: rentedMovie(movie),
	nDaysRented(daysRented)
{
}

int Rental::GetDaysRented() const 
{ 
	return nDaysRented; 
}

const Movie& Rental::GetMovie() const 
{ 
	return rentedMovie; 
}

double Rental::GetFee() const
{
    return rentedMovie.GetRentalFee(nDaysRented);
}

int Rental::GetPoint() const
{
	return rentedMovie.GetRentalPoint(nDaysRented);
}

