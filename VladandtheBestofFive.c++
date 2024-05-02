#include <iostream>
#include <string>

using namespace std;

typedef long long ll ;
string check(string& s){
    int cA=0;
    int cB=0;
    for(int i=0;i<5;i++){
        if(s[i]=='A')
            cA ++ ;
        else 
            cB ++ ;
    }
    if(cA>cB)
        return "A";
    
    return "B";
}

int main(){
    ll t ;
    cin >> t ; 
    string out ="";
    for(int i=0;i<t;i++){
        string s ;
        cin >> s ;
        out += check(s)+'\n';
    }
    cout << out ;
    return 0 ;
}