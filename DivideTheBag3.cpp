#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

typedef long long ll;

int mx(const std::vector<ll>& arr) {
    int m=0;
    for(int i=0;i<arr.size();i++){
        if(arr[m]<arr[i]) m = i ; 
    }
    return m ; 
}
void printVector(const vector<ll>& vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i];
        if (i != vec.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

int main() {
    ll t;
    cin >> t;

    string out = "";
    for (ll i = 0; i < t; i++) {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(m);
        ll vsum = 0 ;
        for (ll j = 0; j < m; j++) {
            cin >> a[j];
            vsum+=a[j];
        }
        if(vsum<n) out+= "-1"+="\n"; 
        while(n>0){
            for(int k=0;k<m;k++){
                if((n>>log2(a[k]))&1){
                    n-=a[k] ; 
                }
                else {
                    
                }
            }
        }


        
    }
    cout << out;

    return 0;
}