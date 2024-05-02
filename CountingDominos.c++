#include <iostream>
#include <string>
#include <cmath>

using namespace std ;
typedef long long ll ;

int main(){
    ll n ;
    cin >> n ;
    if(n%2==0){
        
        ll p = pow(2,n/2);
        cout << p ;
    }
    else
        cout << 0 ;

    return 0;
}