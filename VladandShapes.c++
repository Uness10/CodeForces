#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

typedef long long ll;

int isTr(int n, vector<vector<unsigned int>>& a) {
    for (int i = 0; i < n; i++) {
        if(a[i][n/2])
        int k = 1;
        while (i + k < n && a[i][i + k] == 1)
            k++;
        if (k != 2 * i) // Fix this condition
            return 0;
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    vector<vector<unsigned int>> a(n, vector<unsigned int>(n)); // Correct initialization
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int k = 0; k < n; k++) {
            a[i][k] = s[k] - '0'; // Convert character to integer
        }
    }
    cout << isTr(n, a);
    return 0;
}
