#include <bits/stdc++.h>
using namespace std;

int main() {
    int number = 12345;
    int reversedNumber = 0;

    while (number > 0) {
        int lastDigit = number % 10;

        reversedNumber = (reversedNumber * 10) + lastDigit;

        number = number / 10;
    }

    cout << reversedNumber;

    return 0;
}