#pragma once

enum class STATEMENT_TYPE {
	UNKNOWN = -1, TEXT = 0, JSON
};

class Rental;
class Statement {
public:
	Statement(){}
	virtual void Print(const std::string& name, const std::vector< Rental >& customerRentals) = 0;

	double GetTotalAmount(const std::vector< Rental >& customerRentals);
	int GetFrequentRenterPoints(const std::vector< Rental >& customerRentals);
};

class StatementText : public Statement {
public:
	StatementText() : Statement() {}

	virtual void Print(const std::string& name, const std::vector< Rental >& customerRentals) override;
};

class StatementFactory
{
public:
	static std::unique_ptr<Statement> Create(STATEMENT_TYPE type)
	{
		switch (type)
		{
		case STATEMENT_TYPE::TEXT:
			return  std::make_unique<StatementText>();
		default:
			return std::make_unique<StatementText>();
		}
	};
};