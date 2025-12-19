#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    int ans = 0;
    string word;

    for (int i = 0; i < n; i++) {
        cin >> word;
        int len = word.size();

        if (len <= m) {
            m -= len;
            ans++;
        } else {
            // discard remaining words to avoid breaking input
            for (int j = i + 1; j < n; j++) {
                cin >> word;
            }
            break;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
