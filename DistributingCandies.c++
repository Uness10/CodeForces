#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;
typedef long long ll;

int remain(ll m, vector<ll> E, ll cands) {
    int remains = cands;
    for (int i = 0; i < m; i++) {
        int d = remains / E[i];
        if (d) {
            remains -= E[i] * d;
        }
       
    }
    return remains;
}

int main() {
    ll n, m; 
    cin >> n >> m; 

    string out = ""; 
    vector<ll> cs(n);
    for(int i = 0; i < n; i++) {        
        cin >> cs[i];
    }
    vector<ll> E(m);

    for(int i = 0; i < m; i++) {            
        cin >> E[i];
    }
    for(int i = 0; i < n; i++) {    
        out += to_string(remain(m, E, cs[i])) + " ";
    }
    cout << out;

    return 0;
}
