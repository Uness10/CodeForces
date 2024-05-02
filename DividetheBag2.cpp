#include <iostream>
#include <string>
#include <vector>
#include <numeric>
using namespace std;

typedef long long ll;

void printVector(const vector<ll>& vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i];
        if (i != vec.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

bool isSubsetSum(const vector<ll>& set, ll sum) {
    vector<bool> dp(sum + 1, false);
    dp[0] = true;
    for (ll num : set) {
        for (ll j = sum; j >= num; --j) {
            dp[j] = dp[j] || dp[j - num];
        }
    }
    return dp[sum];
}

int main() {
    ll t;
    cin >> t;

    string out = "";
    for (ll i = 0; i < t; i++) {
        ll targetSum, arraySize;
        cin >> targetSum >> arraySize;
        vector<ll> array(arraySize);
        ll currentSum = 0;
        for (ll j = 0; j < arraySize; j++) {
            cin >> array[j];
            currentSum+= array[j] ; 
        }

        ll operations = 0;
        
        while (currentSum>targetSum ) {
            ll candidateIndex = -1;
            for (ll k = 0; k < arraySize; k++) {
                if (array[k] > 1 && (candidateIndex == -1 || array[k] > array[candidateIndex])) {
                    candidateIndex = k;
                }
            }
            if (candidateIndex == -1 || currentSum - (array[candidateIndex] >> 1) < targetSum) {
                break;
            }
            array[candidateIndex] >>= 1;
            currentSum -= array[candidateIndex];
            operations++;
        }

        out += isSubsetSum(array, targetSum) ? to_string(operations) + "\n" : "-1\n";
    }
    cout << out;

    return 0;
}
