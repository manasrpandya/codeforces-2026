#include <bits/stdc++.h>
using namespace std;
/*
    how to run:
    g++ main.cpp -o main (or) g++ -std=gnu++23 main.cpp -o main
    ./main

 Core competitive programming template.
 Assumes GNU++17 or newer.
*/

using ll = long long;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr)

/* Utility functions */
template<typename T>
inline bool chmax(T &a, const T &b) {
    if (a < b) { a = b; return true; }
    return false;
}

template<typename T>
inline bool chmin(T &a, const T &b) {
    if (a > b) { a = b; return true; }
    return false;
}

int main() {
    fastio();

    int T = 1;
    // cin >> T;  // uncomment if multiple test cases

    while (T--) {
        // solve one test case here
    }

    return 0;
}
