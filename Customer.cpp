// Customer.cc
#include <sstream>
#include <vector>
#include "Customer.h"

using std::ostringstream;
using std::vector;

std::string Customer::statement()
{
  double totalAmount = 0.;
  int frequentRenterPoints = 0;

  std::vector< Rental >::iterator iter = customerRentals.begin();
  std::vector< Rental >::iterator iter_end = customerRentals.end();

  // result will be returned by statement()
  std::ostringstream result;
  result << "Rental Record for " << getName() << "\n";

  // Loop over customer's rentals
  for ( ; iter != iter_end; ++iter ) {

    double thisAmount = 0.;
    Rental each = *iter;

    // Determine amounts for each rental
    thisAmount += each.GetFee();

    // Add frequent renter points
    frequentRenterPoints += each.GetPoint();

    // Show figures for this rental
    result << "\t" << each.GetMovie().GetTitle() << "\t"
           << thisAmount << std::endl;
    totalAmount += thisAmount;
  }

  // Add footer lines
  result << "Amount owed is " << totalAmount << "\n";
  result << "You earned " << frequentRenterPoints
         << " frequent renter points";

  return result.str();
}
