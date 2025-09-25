/*Program: car caculator asiimnet
    Programmer: Taif
    Date: 09/25/2025
    Description: car assimnent
    */

#include <iostream>
using namespace std;
int main()
{
	double MPG;
    double car;
    double driven;
	cout << "What is number of gallons of gas the car can hold: ";
	cin >> car; 
	cout << "How many miles can the car be driven on a full tank: ";
	cin >> driven;

    MPG = driven / car;
    cout << "The car gets " << MPG << " miles per gallon.\n";
}


