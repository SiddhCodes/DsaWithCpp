
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "anagram";
    string t = "nagaram";

    int sl = s.size();
    int tl = t.size();

    if (sl != tl) {
        cout << false;
        return 0;
    }

    unordered_map<char, int> m;

    for (int i = 0; i < sl; i++) {
        m[s[i]]++;
        m[t[i]]--;
    }

    for (auto [key, value] : m) {
        if (value != 0) {
            cout << false;
            return 0;
        }
    }

    cout << true;
    return 0;
}
