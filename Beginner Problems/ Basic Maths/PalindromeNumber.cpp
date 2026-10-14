#include <bits/stdc++.h>
using namespace std;

int main() {
    int number = 121;
    int originalNumber = number;
    int reversedNumber = 0;

    while (number > 0) {
        int lastDigit = number % 10;

        reversedNumber = (reversedNumber * 10) + lastDigit;

        number = number / 10;
    }

    if (originalNumber == reversedNumber) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0;
}