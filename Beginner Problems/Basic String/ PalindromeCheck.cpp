#include <bits/stdc++.h>
using namespace std;

int main() {
    const string s = "amma";
    int l = 0;
    int r = s.size() - 1;

    while (l < r) {
        if (!isalnum(s[l])) {
            l++;
        } else if (!isalnum(s[r])) {
            r--;
        } else if (tolower(s[l]) != tolower(s[r])) {
            cout << false;
            return 0;
        } else {
            l++;
            r--;
        }
    }

    cout << true;
    return 0;
}
