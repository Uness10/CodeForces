#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int minprice(int n , int m, int a ,int b){
    int price = 0 ;

    int buckets = ceil(static_cast<double>(n) / m) ;
    
    if(a >=static_cast<float>(b)/m){

        int rem = n-m*(n/m);
        price += (n/m)*b;

        price += min(rem*a,b) ; 
        return price ;
    }
    else {
        return n*a  ; 
    }
}

int main(){

    int n,m,a,b ;
    cin >> n>>m>>a>>b ; 
  
    cout << minprice(n,m,a,b) <<endl;

    return 0 ;
}