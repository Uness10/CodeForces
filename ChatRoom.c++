#include <bits/stdc++.h>

using  namespace std ;


bool isHello(string& s){

    string h = "hello";
    int idx = 0 ;
    int i = 0 ;
    while(idx<h.length() &&  i<s.length() ){
        if(h[idx]==s[i]){
            idx++;
        }
        i++ ; 
    }
    return idx==h.size();
}
int main(){
    string s ;
    cin >> s;
    bool res = isHello(s);
    if(res)
        cout << "YES"<<endl;
    else 
        cout << "NO"<<endl;
    return 0;
}