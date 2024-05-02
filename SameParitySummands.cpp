#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std ;


int main(){

    int t ;  int n ;int k ;
    cin >> t  ; 

    for(int i=0;i<t;i++){
        cin >> n >> k ;
        int su = 0 ;

        string out = "";

        int nn = n ;
        int q = n/k ; 
        int rem = n-q*k; 
        q+=rem;
        out+= to_string(q)+" ";
        
        n = n-q ;
        su+=q;
        k--;

        if(q%2==0){
            
            while(n>0 && k){
                
                q=n/k; 
                if (q%2){
                    q--;
                }
                if(q==0)
                break;
                out+= to_string(q)+" ";
                su+=q;
    
                n-=q; 
                k-- ;
                
            }
        }
        
        else {
            while(n>0 && k){
                
                q=n/k; 
                if (q%2==0){
                    q--;
                }
                if(q==0)
                break;
                out+= to_string(q)+" ";
                su+=q;
    
                n-=q; 
                k-- ;
                
            }
        }
        if(n==0 && k==0){
            cout << "YES"<<endl;
            cout << out<<endl;
        }
        else 
            cout << "NO"<<endl;


    }

    return 0 ; 
}