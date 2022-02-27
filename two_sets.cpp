#include<bits/stdc++.h>

using namespace std;
void res(vector<int> a, vector<int> b) {
    int as = a.size(); int bs = b.size();
        cout << "YES" << endl << as<< endl;
        for (int i = 0; i < as; i++) {
            cout << a[i] << " ";
        }
        cout << endl << b.size() << endl;
        for (int i = 0; i < bs; i++) {
            cout << b[i] << " ";
        }
}
int main() {
    int n;
    cin >> n;
    vector<int> a,b;
    if (n%4 == 0) {
        for (int i = 1; i <= n; i++) {
            if (i%4 < 2) a.push_back(i);
            else b.push_back(i);
        }
        res(a,b);
    } else if (n%4 == 3) {
        for (int i = 1; i <= n; i++) {
            if (i%4 == 1 or i%4 == 2) a.push_back(i);
            else b.push_back(i);
        }
        res(a,b);
    } else {
        cout << "NO";
    }
}