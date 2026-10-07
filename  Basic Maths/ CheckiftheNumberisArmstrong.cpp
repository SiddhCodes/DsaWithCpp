#include <bits/stdc++.h>
using namespace std;

int main() {
    int number = 153;
    int originalNumber = number;
    int digitCount = 0;
    int sum = 0;

    while (number > 0) {
        digitCount++;
        number = number / 10;
    }

    number = originalNumber;

    while (number > 0) {
        int lastDigit = number % 10;

        sum += pow(lastDigit, digitCount);

        number = number / 10;
    }

    if (sum == originalNumber) {
        cout << "Armstrong Number";
    } else {
        cout << "Not an Armstrong Number";
    }

    return 0;
}