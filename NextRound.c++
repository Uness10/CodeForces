#include <bits/stdc++.h>

using  namespace std ;
typedef long long ll ; 

#define fori(j) for(int i=0;i<j;i++)


int main(){
    unsigned int  k ,n ; 
    cin >> n ;
    cin >>k ; 
    ll pts,temp ; 
    int r=0;
    fori(n){
        if(i>=k){
            cin >> temp ; 
            if(pts>0 && temp>=pts)
                r++;
        }
        else {
            cin >> pts ; 
            if(pts>0)
                r++;
        }
    }
    cout << r;

    return 0 ;
}