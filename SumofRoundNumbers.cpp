#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std ;


string fct(int n){
    int k = 1 ;
    vector<int> summands = {};
    while(n>0){
        int rem = n-10*(n/10) ; 
        if(rem){
            summands.push_back(rem*k) ; 
        }
        n= n/10 ; 
        k*=10; 
    }
    string out = to_string(summands.size()) +"\n" ;
    for(int k:summands){
        out +=to_string(k) +" ";
    }
    out+="\n";
    return out ; 
}
int main(){

    int t ; int n ;
    cin >> t ;
    string out= "" ;
    for(int i=0;i<t;i++){
        cin >> n ; 
        out += fct(n) ; 

    }
    cout << out ;
    return  0 ;
}