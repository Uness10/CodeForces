#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define forloop(i,j) for(int i=0;i<j;i++)

bool compare(pair<ll, ll> a, pair<ll, ll> b) {
    if (a.first != b.first)
        return a.first > b.first;
    return a.second > b.second;
}

bool canWin(vector<pair<ll,ll>>& d,ll s){
    sort(d.begin(),d.end(),compare);
    ll i = d.size();
    while(d.size()){
        if(s>d[d.size()-1].first)
            s+=d[d.size()-1].second;
        else
            break;
        d.pop_back();
    }
    return d.size()==0;
}

int main(){
    ll s,n ;
    cin >> s;
    cin >> n ;
    vector<pair<ll,ll>> d(n) ;

    forloop(i,n){
        ll xi,yi ;
        cin >> xi;
        cin >> yi;
        d[i].first=xi ;
        d[i].second=yi ;
    }
    if(canWin(d,s))
    cout << "YES";
    else cout<< "NO";
    return 0;
}