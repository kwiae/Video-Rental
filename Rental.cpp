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

double Rental::GetFee() const
{
    return rentedMovie.GetRentalFee(GetDaysRented());
}

int Rental::GetPoint() const
{
	return rentedMovie.GetRentalPoint(GetDaysRented());
}

std::string Rental::GetMovieTitle() const
{
	return rentedMovie.GetTitle();
}

