#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, l=0, r=0;
    cin >> n >> a;
    vector<int> arr(n);

    for (int i = 0; i<n; i++){
        cin >> arr[i];
        if(arr[i]>a) r++;
        else if(arr[i]<a) l++;
    }

    if(r<l) cout << a-1 << "\n";
    else cout << a+1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
