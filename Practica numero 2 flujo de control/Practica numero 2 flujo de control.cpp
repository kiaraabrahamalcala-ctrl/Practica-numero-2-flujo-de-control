

#include <iostream>
using namespace std;

int main() {
	double s, a, isr = 0;

	cout << "Sueldo:  ";
	cin >> s;

	a = s * 0.9409 * 12; //Analiza y descuenta el 5.91% de TSS directo

	if (a > 867123) isr = (79776 + (a - 867123) * 0.25) / 12;
	else if (a > 624329) isr = (31216 + (a - 624329) * 0.2) / 12;
	else if (a > 416220) isr = ((a - 416220) * 0.15) / 12;

	cout << "Sueldo:  " << s << "\nDescuento ISR: ";

	if (isr == 0) cout << "0(N/A)";
	else cout << isr;

	return 0;
}



