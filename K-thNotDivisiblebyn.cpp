#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std ; 
typedef long long ll; 
int main(){
    ll t ; 
    cin >> t;
    string out =""; 

    for(ll i=0;i<t;i++){
        ll n,k;
        cin >> n >>k ;

            ll sup = k * (static_cast<double>(n)/(n-1)) ; 
            if(sup%n==0){
                out+=to_string(sup-1)+"\n" ; 
            }
            else 
                out+=to_string(sup) +"\n"; 

        



    }


    cout << out <<endl;
    return 0 ; 
}