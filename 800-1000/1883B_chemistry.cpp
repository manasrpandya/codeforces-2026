#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> freq(26, 0);
    for (char c : s) freq[c - 'a']++;

    int odd = 0;
    for (int f : freq) {
        if (f % 2) odd++;
    }

    int len = n - k;
    int required_odd = (len % 2);

    int min_odd = max(0, odd - k);
    int max_odd = odd + k;

    if (required_odd >= min_odd && required_odd <= max_odd)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
