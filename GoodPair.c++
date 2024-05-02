#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std ;


vector<int> pr(int n){
    int a =2*n-1;
    int b =2; 
    int c =pow(a,b)-1 ;

    vector<int> res ={a,b} ;
    return res;
}

int main(){
    int t;
    cin >>t ;
    string out = "";
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        vector<int> res= pr(n) ;
        out+=to_string(res[0])+" "+to_string(res[1])+"\n";

    }
    cout << out ;
    return  0;
}