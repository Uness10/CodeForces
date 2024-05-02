#include <iostream>
#include <string>

using namespace std ;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int primesum(int n){
    for(int i=2;;i++){
        if(isPrime(i)){
            if(!isPrime(i+n) && i!=n)
                return i ;
        }
    }
}
int main(){
    int t;
    cin >>t ;
    string out = "";
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        out+=to_string(primesum(n))+"\n";

    }
    cout << out ;
    return  0;
}