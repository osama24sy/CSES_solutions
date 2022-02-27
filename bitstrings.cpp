#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    unsigned long long int a = 1;
    unsigned long long int m = 1000000007;
    for (int i = 0; i < n; i++) {
        a *= 2;
        a = a%m;
    }
    cout << a;
    return 0; 
}