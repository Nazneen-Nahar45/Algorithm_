#include<bits/stdc++.h>
using namespace std;


int main() {
    int n; cin >> n;


    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }


    int val; cin >> val;


    sort(a.rbegin(), a.rend());
    int ans = 0;
    for(int i=0; i<n; i++) {
        int currCoin = a[i];
        ans += val/currCoin;
        val %= currCoin;


        if(!val)
            break;
    }


    cout << ans << endl;

}

