#include <bits/stdc++.h>
using namespace std;

int main() {
    int number = 10;

    for (int divisor = 1; divisor <= number; divisor++) {
        if (number % divisor == 0) {
            cout << divisor << endl;
        }
    }

    return 0;
}