#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    int n;
    cin >> n;
    string name[10];
    double x[10], y[10];
    for(int i=0; i<n; ++i)
        cin >> name[i] >> x[i] >> y[i];
    bool p[n+1];
    memset(p, 1, sizeof(p));
    for(int i=0; i<n; ++i) {
        bool ok=1;
        for(int j=0; j<n; ++j) {
            if(i==j)
                continue;
            double d=((x[i]-x[j])*(x[i]-x[j]))+((y[i]-y[j])*(y[i]-y[j]));
            if(sqrt(d)<3) {
                ok=0;
                break;
            }
        }
        if(!ok)
            p[i]=0;
    }
    vector<string> s;
    for(int i=0; i<n; ++i) {
        if(!p[i])
            s.push_back(name[i]);
    }
    if((int)s.size()!=0) {
        sort(s.begin(), s.end());
        for(auto z : s)
            cout << z << "\n";
    } else
        cout << "Social distancing was followed.\n";
}
