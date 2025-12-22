#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, c=1;
    cin >> n >> k;
    vector<int> arr(n), lon;
    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    int maxx = 1, cur = 1;
    for (int i = 1; i<n; i++){
        if(arr[i]-arr[i-1]<=k){
            cur++;
        }
        else{
            cur = 1;
        }
         maxx = max(maxx, cur);
    }
    cout << n-maxx<< "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    
}
