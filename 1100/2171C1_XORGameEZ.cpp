#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;
    int fin = 0;
    vector<pair<int,int>> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i].first;
        fin ^= arr[i].first;
    }
    for (int i = 0; i < n; i++){
        cin >> arr[i].second;
        fin ^= arr[i].second;
    }
    if(!fin){
        cout << "tie" << "\n";
        return;
    }
    int c=0;
    for(int i = 0; i<n; i++){
            if(arr[i].first^arr[i].second){
                c=i;  
            }
        }
    cout << (c&1? "mai": "ajisai") << "\n";

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    
}
