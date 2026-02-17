// Created by paulw on 2/16/2026.
#include <iostream>
using namespace std;
// Recursive function to compute GCD
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "GCD: " << gcd(num1, num2) << endl;
    return 0;
}
