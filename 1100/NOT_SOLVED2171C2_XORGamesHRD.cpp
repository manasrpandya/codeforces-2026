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
    int fl = 0, com;
    for (int i = 0; i < n; i++){
        cin >> arr[i].second;
        fin ^= arr[i].second;
        if(!fl){
            if(arr[i].first==arr[i].second){
                fl = 1;
                com = arr[i].first;
            }
        }
        if(fl){
            if(arr[i].first==arr[i].second){
                com ^= arr[i].first;
            }
        }
    }
    if(!fin){
        cout << "tie" << "\n";
        return;
    }
    int comA = com; int comM = com;
    int c=0, mai = 0, aji = 0;
    for(int i = 0; i<n; i++){
            if(arr[i].first!=arr[i].second){
                  if((i&1) && ((comM^arr[i].first)>(comM^arr[i].second) )){
                    
                  }
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
