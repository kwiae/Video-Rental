// Customer.cc
#include <sstream>
#include <vector>
#include "Customer.h"

using std::ostringstream;
using std::vector;

std::string Customer::Statement()
{
  // result will be returned by Statement()
  std::ostringstream result;
  result << "Rental Record for " << GetName() << "\n";

  // Loop over customer's rentals
  for (auto each : customerRentals)
  {
	  // Show figures for this rental
	  result << "\t" << each.GetMovieTitle() << "\t"
		  << each.GetFee() << std::endl;
  }

  // Add footer lines
  result << "Amount owed is " << GetTotalAmount() << "\n";
  result << "You earned " << GetFrequentRenterPoints()
	  << " frequent renter points";

  return result.str();
}

double Customer::GetTotalAmount()
{
    int totalAmount = 0;
    for (auto iter : customerRentals)
    {
        totalAmount += iter.GetFee();
    }

    return totalAmount;
}

int Customer::GetFrequentRenterPoints()
{
    int frequentRenterPoints = 0;
    for (auto iter : customerRentals)
    {
        frequentRenterPoints += iter.GetPoint();
    }

    return frequentRenterPoints;
}