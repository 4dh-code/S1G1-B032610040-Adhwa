#include <iostream>
using namespace std;

int main()
{
	int KE;
	double m;
	int v;

	cout << "Input the object's mass (kg): ";
	cin >> m;
	cout << "input the object's velocity (m/s): ";
	cin >> v;

	KE = 0.5 * m * v * v;

	cout << "The kinetic energy (joules): " << KE ;

	return 0;
	
}
