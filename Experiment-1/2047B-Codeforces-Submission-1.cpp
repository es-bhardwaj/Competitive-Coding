#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

void solve() {
    int n;
    string s;
    cin>>n>>s;

    map<char, int> freq;
    for (char c : s) freq[c]++;

    char maxChar = s[0], minChar = s[0];
    int maxFreq = -1, minFreq = n + 1;

    for (auto const& x : freq) {
        char ch = x.first;
        int f = x.second;
        if (f >= maxFreq) {
            maxFreq = f;
            maxChar = ch;
        }
        if (f < minFreq) {
            minFreq = f;
            minChar = ch;
        }
    }

    for (int i = 0; i < n; i++) {
        if (s[i] == minChar) {
            s[i] = maxChar;
            break;
        }
    }
    cout<<s<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}