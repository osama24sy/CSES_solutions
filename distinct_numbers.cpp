#include<bits/stdc++.h>

using namespace std;

int main() {
    set<int> s;
    int n,b;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin>>b;
        s.insert(b);
    }
    cout << s.size();
}