#include <iostream>
using namespace std;

int main()
{
	int amountloan;
	int year;
	double interestRate;
	double totalinterest;
	double monthlyloan;

	cout << "Input loan amount (RM): ";
	cin >> amountloan;
	cout << "input annual interest rate (%): ";
	cin >> interestRate;
	cout << "Input number of years: ";
	cin >> year;

	totalinterest = (amountloan * (interestRate / 100)) * year;
	monthlyloan = (amountloan + totalinterest) / (year * 12);

	cout << "Monthly payment for this loan is (RM): " << monthlyloan;

	return 0;

}
