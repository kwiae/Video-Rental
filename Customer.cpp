// Customer.cc
#include <iostream>
#include "Customer.h"
#include "Statement.h"

using std::ostringstream;
using std::vector;

Customer::Customer(const std::string& name) 
	:customerName(name) 
{
}

void Customer::AddRental(const Rental& arg) 
{ 
    customerRentals.push_back(arg);
}

std::string Customer::GetName() const 
{ 
    return customerName; 
}

void Customer::PrintStatement(STATEMENT_TYPE type)
{
	std::unique_ptr<Statement> statement = StatementFactory::Create(type);

	if (statement)
		statement->Print(GetName(), customerRentals);
}