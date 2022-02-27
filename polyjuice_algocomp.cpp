#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n ; i++) {
        double b;
        cin >> b;
        cout << ceil(100/b) << endl;
    }
}