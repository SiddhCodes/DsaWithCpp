#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "hello";

    int l = 0;
    int n = s.size();

    while (l < n / 2) {
        char temp = s[l];
        s[l] = s[n - 1 - l];
        s[n - 1 - l] = temp;

        l++;
    }

    cout << s << endl;

    return 0;
}
