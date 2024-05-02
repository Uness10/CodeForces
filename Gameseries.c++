#include <iostream>

using namespace std ;


int main(){
    int A1,P1,A2,P2 ;
    cin >> A1 ; cin >> P1 ;
    cin >> A2 ;cin >> P2 ;

    if(A1+A2 > P1 +P2)
        cout << "A";
    if(A1+A2 < P1 +P2)
        cout << "P";
    else if (A1+A2 == P1 +P2)
        cout << "D";
}