#include <iostream>
#include <string>

using namespace std ; 
typedef long long ll; 


int main() {
    ll n;
    cin >> n;
    string s= to_string(n);
    
    int f = s[0] - '0';
    
    ll k = stoll(string(s.length(), f + '0'));
    
    if (k >= n) 
        cout << k<<endl;
    else {
        f++;
        k = stoll(string(s.length(), f + '0'));
        cout <<  k<<endl;
    }

    
    return 0;
}
