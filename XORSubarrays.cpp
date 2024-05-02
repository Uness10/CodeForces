#include <iostream>
#include <vector>
#include <string>
using namespace std;

int arrayXor(vector<int>& a) {
    int c = a[0];
    for(int i = 1; i < a.size(); i++) 
        c ^= a[i]; 
    return c; 
}

vector<int> dp; 
void sol(vector<int>& a) {
    int mxor = a[0]; 
    int k = 0; 
    int xor1 = 0; 
    for(int i = 1; i < a.size(); i++) 
        mxor |= a[i]; 
    
    for(int j = 0; j < a.size()-1; j++) {
        vector<int> v1(a.begin(), a.begin() + j + 1); 
        vector<int> v2(a.begin() + j + 1, a.end()); 
        int xorv1 = arrayXor(v1); 
        int xorv2 = arrayXor(v2); 
        if((xorv1 | xorv2) >= mxor) {
            mxor = xorv1 | xorv2; 
            k = j;  
            xor1 = xorv1; 
        }
    }
    if(xor1)
        dp.push_back(xor1); 

    if(k < a.size() - 1) {
        vector<int> v1(a.begin() + k + 1, a.end());
        sol(v1); 
    }
}


int main() {
    int t;
    cin >> t;
    string out ; 
    for (int i = 0; i < t; ++i) {
        out="";
        int n;
        cin >> n;
        vector<int> a(n);
        dp = {};
        for (int j = 0; j < n; ++j) {
            cin >> a[j];

        }
        
        sol(a);
        int mxor = a[0]; 
        for(int i = 1; i < a.size(); i++) 
            mxor |= a[i]; 
        out += to_string(mxor)+"\n";
    }
    
    cout << out ;
    
    return 0;
}
