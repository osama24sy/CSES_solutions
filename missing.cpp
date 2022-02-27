#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long full = n*(n+1)/2;
    long long given = 0;
    for (int i =0; i < (n-1); i++) {
        long long a;
        cin >> a;
        given = given + a;
    }
    cout << full - given ;
}