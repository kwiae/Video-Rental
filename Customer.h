// Customer.hh
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "Rental.h"
#include "Statement.h"
// The customer class represents the customer of the store

class Customer {
public:
	Customer() {};
	explicit Customer(const std::string& name);

	void AddRental(const Rental& arg);
	std::string GetName() const;

	// Generate a Statement for the customer
	void PrintStatement(STATEMENT_TYPE type = STATEMENT_TYPE::TEXT);

private:
	std::string customerName;
	std::vector< Rental > customerRentals;

};
#endif // CUSTOMER_HH
