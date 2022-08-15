#include <sstream>
#include <iostream>
#include <vector>
#include "Statement.h"
#include "Rental.h"

double Statement::GetTotalAmount(const std::vector< Rental >& customerRentals)
{
	double totalAmount = 0;
	for (auto iter : customerRentals)
	{
		totalAmount += iter.GetFee();
	}

	return totalAmount;
}

int Statement::GetFrequentRenterPoints(const std::vector< Rental >& customerRentals)
{
	int frequentRenterPoints = 0;
	for (auto iter : customerRentals)
	{
		frequentRenterPoints += iter.GetPoint();
	}

	return frequentRenterPoints;
}

void StatementText::Print(const std::string& name, const std::vector< Rental >& customerRentals)
{
	// result will be returned by Statement()
	std::ostringstream result;
	result << "Rental Record for " << name << "\n";

	// Loop over customer's rentals
	for (auto each : customerRentals)
	{
		// Show figures for this rental
		result << "\t" << each.GetMovieTitle() << "\t"
			<< each.GetFee() << std::endl;
	}

	// Add footer lines
	result << "Amount owed is " << GetTotalAmount(customerRentals) << "\n";
	result << "You earned " << GetFrequentRenterPoints(customerRentals)
		<< " frequent renter points";

	std::cout << result.str() << std::endl;
}

void StatementJSON::Print(const std::string& name, const std::vector< Rental >& customerRentals)
{
	// result will be returned by Statement()
	std::ostringstream result;
	result << "{" << "\n";
	result << "\"name\": " << "\"" << name << "\"," << "\n";

	result << "\"rentals\": [" << "\n";

	bool bFirst = true;
	// Loop over customer's rentals
	for (auto each : customerRentals)
	{
		if (bFirst)
		{
			result << "{" << "\n";
			bFirst = false;
		}
		else
		{
			result << ",\n{" << "\n";
		}

		result << "\"title\": " << "\"" << each.GetMovieTitle() << "\"," << "\n";
		result << "\"fee\": " << "\"" << each.GetFee() << "\"" << "\n";
		result << "}";
	}
	result << "\n" << "]," << "\n";

	// Add footer lines
	result << "\"amount\": " << "\"" << GetTotalAmount(customerRentals) << "\"," << "\n";
	result << "\"points\": " << "\"" << GetFrequentRenterPoints(customerRentals) << "\"" << "\n";
	result << "}" << "\n";

	std::cout << result.str() << std::endl;
}
