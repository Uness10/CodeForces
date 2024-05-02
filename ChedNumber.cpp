#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std ; 
typedef long long ll; 

int main(){
    ll x ;
    cin >> x ;

    string  s = to_string(x);
    ll l =s.length();
    for(int i=l-1;i>=1;i--){
        if( (i== 0 && (s[i]-'0')<9 && (s[i]-'0')>=5 ) ||  (s[i]-'0')>=5){
            s[i] = (9-(s[i]-'0')) + '0'; 
        }
    }
    if(  (s[0]-'0')<9 && (s[0]-'0')>=5 ){
            s[0] = (9-(s[0]-'0')) + '0'; 
    }


    cout << s<<endl;


    return 0 ; 
}