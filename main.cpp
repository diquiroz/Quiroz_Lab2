// Lab 2
// Derek Quiroz
// Complete

// Calculates and displays total with discount for purchasing n units

#include <iostream>
using namespace std;


int main() {
    double PRICE_PER_UNIT = 199.00;    // constant - cost of one unit
    int units_purchased;    // initialize amount of units purchased

    // user input amount of units purchased
    cout << "How many units are being purchased? ";
    cin >> units_purchased;

    double discount_rate;    // initialize discount rate

    // determine discount rate depending on units_purchased
    if (units_purchased >= 100)
        discount_rate = 0.5;
    else if (units_purchased >= 50 && units_purchased <= 99)
        discount_rate = 0.4;
    else if (units_purchased >= 20 && units_purchased <= 49)
        discount_rate = 0.3;
    else if (units_purchased >= 10 && units_purchased <= 19)
        discount_rate = 0.2;
    else discount_rate = 0.0;

    double purchase_total;    // initialize the sale's total

    // calculate total
    purchase_total = PRICE_PER_UNIT * discount_rate * units_purchased;

    // display formatted total
    cout.precision(2);
    cout << "The total cost of the purchase is $" << fixed << purchase_total;

    return 0;
}