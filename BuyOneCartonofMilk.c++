/*int minAm(int N,int S,int M, int L){
    map<int,int> prices ={{6,S},{8,M},{12,L}};
    int amount = 0 ;
    while(N>0){
        int c6 , c8,c12 ; 
        c6 = ceil(static_cast<double>(N) / 6) *prices[6] ;
        c8 = ceil(static_cast<double>(N) / 8) *prices[8];
        c12 = ceil(static_cast<double>(N) / 12)*prices[12] ;
        int minc = c6 ; int u = 6;
        if(minc>c8){
            minc = c8 ;
            u = 8;
        }
        if(minc>c12){
            minc  =c12 ;
            u=12 ; 
        }
        amount += prices[u] ;
        N -=u ;

    }
    return amount ; 
}
*/

#include <iostream>
#include <map>
#include <cmath> 
using namespace std ;





int minAm(int N,int S,int M, int L){
    map<int,int> prices ={{6,S},{8,M},{12,L}};
    int amount = INT_MAX ;
    int mx6 = ceil(static_cast<double>(N) / 6) ;
    int mx8 =  ceil(static_cast<double>(N) / 8);
    int mx12=  ceil(static_cast<double>(N) / 12);
    for(int i=0;i<=mx6;i++){
        for(int j=0;j<=mx8;j++){
            for(int k=0;k<=mx12;k++){
                if(6*i+8*j+12*k<N)
                    continue;
                int c = i*prices[6]+prices[8]*j+k*prices[12] ; 
                if(amount>c)
                    amount = c;
            }
        }
    }
    return amount ; 
}

int main(){
    int N,S,M,L ;
    cin >> N ;
    cin >> S ;
    cin >> M;
    cin >> L;
    cout << minAm(N,S,M,L);


    return 0 ;
}