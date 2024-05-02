#include <bits/stdc++.h>

using  namespace std ;
typedef long long ll ; 

#define fori(j) for(int i=0;i<j;i++)

int main(){
    ll n ;
    int m1,m2,m3 ; 
    ll p=0 ; 
    cin >> n ; 
    fori(n){
        cin >> m1 ; 
        cin >> m2 ; 
        cin >> m3 ;
        if(m1+m2+m3>=2)
            p++;
    }
    cout << p ;
    return 0 ;
}