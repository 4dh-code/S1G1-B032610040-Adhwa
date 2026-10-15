#include <iostream>
using namespace std;
int main()
{
	double price = 9.90;
	int quantity;
	const int DISC = 10;
	double totalprice;

	cout << "Enter quantity Purchased: ";
	cin >> quantity;

	totalprice = (price * quantity) * (100 - DISC) / 100;

	cout << "Total Price after discount: RM" << totalprice;

	return 0;
}
