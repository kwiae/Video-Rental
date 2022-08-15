#include <iostream>
#include "Customer.h"
#include "Movie.h"
#include "Statement.h"

using namespace std;

int main()
{
    Movie regular1{ "�Ϲ� 1", PRICE_CODE::REGULAR };
    Movie regular2{ "�Ϲ� 2", PRICE_CODE::REGULAR };
    Movie newRelease1{ "���� 1", PRICE_CODE::NEW_RELEASE };
    Movie newRelease2{ "���� 2",PRICE_CODE::NEW_RELEASE };
    Movie children1{ "��� 1", PRICE_CODE::CHILDRENS };
    Movie children2{ "��� 2", PRICE_CODE::CHILDRENS };
    Movie example1{ "���� 1", PRICE_CODE::EXAMPLE_GENRE };

    Customer customer{ "��" };

    customer.AddRental({ regular1, 2 });
    customer.AddRental({ regular2, 3 });
    customer.AddRental({ newRelease1, 1 });
    customer.AddRental({ newRelease2, 2 });
    customer.AddRental({ children1, 3 });
    customer.AddRental({ children2, 4 });
    customer.AddRental({ example1, 5 });

   customer.PrintStatement();

    return 0;
}
