#include <iostream>
#include <string>
#include <cmath>

using namespace std;

typedef long long ll ;


int digitsSum(int k){
    int s = 0 ;
    while(k>0){
        s+=k-(k/10)*10 ;
        k/=10 ;
    }
    return s ;
}

string som(int n){


    int k = ceil(static_cast<double>(n) /10);
    ll s = 0 ;
    int step =1;
    for(int i=0;i<=k;i++){
        s+= i*(step) ;
        step++ ;
    }
    for(int i=1;i<=k-1;i++){
        for(int j=i;j<9+i;j++){
            s+= j;
            n-=j;
        }
    }
    cout << n <<endl;
    return to_string(s) ;
}

int main(){
    int t ;
    cin >> t;
    string out ="" ; 
    for(int i=0;i<t;i++){
        int n ;
        cin >>n ;
        out += som(n)+'\n';
    }
    cout << out ;
    return 0 ;
}