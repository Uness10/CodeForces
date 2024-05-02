#include <iostream>
#include <string>

using namespace std ;


int check(int  a, int b, int c){

    if(a+b==c || a+c==b|| b+c==a)
        return 1 ;
    return 0 ;
}

int main(){
    int t;
    cin >>t ;
    string out = "";
    for(int i=0;i<t;i++){
        int a,b,c ;
        cin >> a >> b>> c ;
        if(check(a,b,c))
            out+="YES\n";
        else 
            out+="NO\n" ;
    }
    cout << out ;
    return  0;
}