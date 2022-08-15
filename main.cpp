#include <iostream>
#include "Customer.h"
#include "Movie.h"
#include "Statement.h"

using namespace std;

int main()
{
    Movie regular1{ "일반 1", PRICE_CODE::REGULAR };
    Movie regular2{ "일반 2", PRICE_CODE::REGULAR };
    Movie newRelease1{ "신작 1", PRICE_CODE::NEW_RELEASE };
    Movie newRelease2{ "신작 2",PRICE_CODE::NEW_RELEASE };
    Movie children1{ "어린이 1", PRICE_CODE::CHILDRENS };
    Movie children2{ "어린이 2", PRICE_CODE::CHILDRENS };
    Movie example1{ "예제 1", PRICE_CODE::EXAMPLE_GENRE };

    Customer customer{ "고객" };

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
