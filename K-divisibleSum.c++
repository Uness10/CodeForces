#include <iostream>
#include <cmath>
#include <numeric>

using namespace std;

#define forloop(i,j) for(int i=0;i<j;i++)


int mnMax(int n,int k){
    
    k *=ceil(static_cast<double>(n) / k) ;
    
    int mx = ceil(static_cast<double>(k) /n) ; 
    return mx ; 
}


int main(){
    int tst ;
    cin >> tst;
    forloop(i,tst){
        int n,k;
        cin >> n ;
        cin >> k;
        cout << mnMax(n,k)<<endl;
    }

    return 0;
}