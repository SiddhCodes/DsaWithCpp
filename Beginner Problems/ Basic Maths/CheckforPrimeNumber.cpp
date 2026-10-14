#include <bits/stdc++.h>
using namespace std;

int main() {
    int number = 17;
    int divisorCount = 0;

    for (int divisor = 1; divisor <= number; divisor++) {
        if (number % divisor == 0) {
            divisorCount++;
        }
    }

    if (divisorCount == 2) {
        cout << "Prime Number";
    } else {
        cout << "Not a Prime Number";
    }

    return 0;
}