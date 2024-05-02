#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std ;
typedef long long ll ;
int isvalid =1;
ll som(vector<ll> a,ll n){
    ll  s =0;
    for(ll c:a){
        if(c==0) isvalid=0;
        if(s==n)
            return 1;
        s+=c;
        

    }
    return s==n ;
}

ll mindiv(ll n,ll m, vector<ll> a){
    if(n%2)
        return -1 ;
    ll divs=0 ;
    ll i = 0 ;
    ll k  ;
    int nn = n ;
    while(!som(a,n)&& nn>0){
        k = (ll)log2(nn) ;
        ll sup =INT_MAX;
        ll idx ;
        for(ll i=0;i<a.size();i++){
                if(a[i]>=pow(2,k) && sup>a[i] ){
                    sup =a[i] ;
                    idx= i ;
                }
        }
        
        nn-=a[idx]/2;
        if(nn<0 || isvalid==0) return -1  ;

        a[idx] /=2 ; 
                cout << a[0]<<','<< a[1]<<','<< a[2]<<endl;

        divs++ ;
        cout << nn<<endl;

    }
    return divs;

}

int main() {
    ll t;
    cin >> t;

    string out = "";
    for (ll i = 0; i < t; i++) {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(m);

        for (ll j = 0; j < m; j++) {
            cin >> a[j];
        }

        out += to_string(mindiv(n, m, a)) + "\n";
    }

    cout << out;
    return 0;
}