#include <bits/stdc++.h>
using namespace std;

vector<int> single(vector<int> arr, int n){
   if(arr[0]==-1){ 
    for (int i = 0; i<n; i++){
        
        }
    }
}
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        
    }
    
    if(arr[0]==-1 ^ arr[n-1]==-1){
            if(arr[0]==-1){
                arr[0] = arr[n-1];
            }
            else{
                arr[n-1] = arr[0];
            }
    }
    else{
        if(arr[0]==-1){
            arr[0]=0;
            arr[n-1]=0;
        }
    }
    int sigB = abs(arr[n-1] - arr[0]);
    cout << sigB << "\n";
    for(int i = 0; i<n; i++){
        
        if(arr[i]==-1){
            cout << 0<<" ";
        }
        else {
            cout << arr[i]<<" ";
        }
    }
    
   

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    
}
