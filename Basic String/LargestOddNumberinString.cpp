#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "5347";
    int n = s.size();

    for (int r = n - 1; r >= 0; r--) {
        if ((s[r] - '0') % 2 != 0) {
            cout << s.substr(0, r + 1);
            return 0;
        }
    }

    cout << "";
    return 0;
}
