#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
typedef long long ll;

#define forloop(i,j) for(int i=0;i<j;i++)


void operation(vector<ll>& a, ll i,ll idx){
    a[idx]-=i;
    a[1+idx] -= 2*i;
    a[2+idx]-=i;
}
 
bool fct(vector<ll>& a, ll n) {
    int i;
    for(i=0;i<n-3;i++){
        if(a[i]<0)
            return 0 ;
        operation(a,a[i],i);
    }

    return  a[i] == a[i+2] && a[i+1] == 2 * a[i] ; 

}


int main() {
    ll tst;
    cin >> tst;

    forloop(i, tst){
        ll n;
        cin >> n;
        vector<ll> a(n);
        forloop(j, n){
            ll k;
            cin >> k;
            a[j] = k;
        }
        if(fct(a, n))
            cout << "YES"<<endl ;
        else 
            cout << "NO"<< endl;
    }

    return 0;
}
