// Customer.cc
#include <sstream>
#include <iostream>
#include <vector>
#include "Customer.h"
#include "Statement.h"

using std::ostringstream;
using std::vector;

Customer::Customer(const std::string& name) :
    customerName(name) 
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
    std::unique_ptr<Statement> statement;
    switch (type)
    {
    case STATEMENT_TYPE::TEXT :
      statement = std::make_unique<StatementText>();
    break;
    default:
        statement = std::make_unique<StatementText>();
        break;

    }

    if(statement)
        statement->Print(GetName(), customerRentals);
}