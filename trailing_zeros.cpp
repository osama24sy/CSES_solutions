#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,a = 0;
    cin >> n;
    //cout << n /5;
    while (n != 0)
    {
        a += n/5;
        n /= 5;
    }
    cout << a;
}