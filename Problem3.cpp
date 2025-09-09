/**
 * @file   Pa2_problem3.cpp
 * @author Alex Ludwick
 * @brief  This program calculates how many customers 
 *         purchase energy drinks and citrus-flavored energy drinks.
 * @date   2025-09-07
 *
 */

#include <iostream>
using namespace std;

int main()
 { 
    int totalc = 20200;
    double energyp = 0.18;
    double citrus = 0.52;

    int ecustomers = totalc * energyp;

    int citrusustomers = ecustomers * citrus;

    cout << "Approximate number of customers who purchase one or more energy drinks per week: "
         << citrusustomers << endl;

    cout << "Approximate number of customers who purchase citrus-flavored energy drinks: "
         << citrusustomers << endl;

    return 0;
}

// g++ -Wall -std=c++17 Problem3.cpp -o Problem3
// ./Problem3