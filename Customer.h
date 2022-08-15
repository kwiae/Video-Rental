// Customer.hh
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "Rental.h"

// The customer class represents the customer of the store

class Customer {
public:
  Customer();
  explicit Customer( const std::string& name );

  void AddRental( const Rental& arg );
  std::string GetName() const;

  // Generate a Statement for the customer
  std::string Statement();

private:
	double GetTotalAmount();
	int GetFrequentRenterPoints();

private:
  std::string customerName;
  std::vector< Rental > customerRentals;

};


inline Customer::Customer() {}

inline Customer::Customer( const std::string& name ): 
  customerName( name ) {}

inline void Customer::AddRental( const Rental& arg ) { customerRentals.push_back( arg ); }

inline std::string Customer::GetName() const { return customerName; }

#endif // CUSTOMER_HH
