#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long fact = 1;

    cout << "Enter a number (0 to 100): ";
    cin >> n;

    if (n < 0 || n > 100) {
        cout << "Enter a number from 0 to 100";
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << "Factorial = " << fact;
    return 0;
}
