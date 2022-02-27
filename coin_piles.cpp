#include<bits/stdc++.h>

using namespace std;

int main() {
    int t,a,b,mn,mx;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a>>b;
        mn = std::min(a,b);
        mx = std::max(a,b);
        if ((mn+mx)%3 == 0 and mx <= mn*2) {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
    }
}