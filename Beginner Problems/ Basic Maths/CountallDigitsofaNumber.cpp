#include <bits/stdc++.h>
using namespace std;

int main() {
    int number = 14;
    int digitCount = 0;

    while (number > 0) {
        digitCount++;
        number = number / 10;
    }

    cout << digitCount;

    return 0;
}