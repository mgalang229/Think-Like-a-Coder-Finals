#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    int c, rc;
    cin >> c >> rc;
    int rl[7];
    string rw[7];
    for(int i=0; i<rc; ++i)
        cin >> rl[i] >> rw[i];
    for(int i=1; i<=c; ++i) {
        bool ok=0;
        for(int j=0; j<rc; ++j) {
            if(i%rl[j]==0) {
                cout << rw[j];
                ok=1;
            }
        }
        if(!ok)
            cout << i;
        cout << "\n";
    }
}
