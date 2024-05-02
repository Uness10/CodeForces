#include <iostream>
#include <stack>
#include <string>

using namespace std;

typedef long long ll ;
int main() {
    ll t;
    cin >> t; 
    string out ="";
    while (t--) {
        string s;
        cin >> s; 
        stack<char> stk;

        for (char c : s) {
            if (!stk.empty() && stk.top() != c)
                stk.pop(); 
            else
                stk.push(c); 
        }

        if (stk.empty())
           out +="YES\n" ; 
        else
             out +="NO\n" ; 
    }
    cout << out;
    return 0;
}
