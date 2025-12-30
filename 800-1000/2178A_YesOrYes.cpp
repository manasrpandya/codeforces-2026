#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    
    int fl = 0;
    for (int i = 0; i<s.size(); i++){
        if(s[i]=='Y' ){
            if(fl){
            cout << "no" << "\n";
            return;
        }
        else fl=1;
    }
    }
    cout << "Yes" << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    
}
