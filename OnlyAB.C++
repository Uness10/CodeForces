#include <iostream>
#include <string>

using namespace std;

void operation(string &S, int i, int j) {
    S[i] = 'A';
    S[j] = 'B';
}

int StoT(string &S, string &T, int n) {
    int c = 0;

    for (int i = 0; i < n; i++) {
        if (S[i] > T[i]) {
            for (int j = i + 1; j < n; j++) {
                if (T[j] == 'B') {
                    if(S[i]=='A')
                    operation(S, i, j);
                    c++;
                    break;
                }
                else if(T[j] == 'B')
            }
        }
        else if (S[i] < T[i]) {
            for (int j = i - 1; j >= 0; j--) {
                if (T[j] == 'A') {
                    operation(S, j, i);
                    c++;
                    break;
                }
            }
        }
    }
    if(S!=T)
        return -1 ;
    return c;
}

int main() {
    int n;
    string s, t;
    cin >> n;
    cin >> s;
    cin >> t;
    cout << StoT(s, t, n);

    return 0;
}


