#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Enter radius in cm: ";
    double radius;
    cin >> radius;
    const double pi = 3.14;

    double areal = pi * pow(radius,2);
    cout << "Arealet av sirkelen er:" << areal << "cm^2";

    return 0;
}
