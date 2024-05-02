#include <iostream>
#include <string>

using namespace std ;

int duos(string& s){
    int count = 0;
    for(int i=0;i<s.length();){
        if(s[i] =='N' && s[i+1]=='N'){
            count++ ;
            i+=2 ;
        }
        else
            i++;

    }
    return count;
}

int main(){

    int n ;
    cin >> n ; 
    int count = 0;
    for(int i=0;i<n;i++){
        string row ;
        cin >> row ; 
        count +=duos(row);
    }
    cout << count;
    return 0;
}

