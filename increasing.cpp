#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long moves = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i-1] <= arr[i]) {
            continue;
        }
        else {
            long long r = arr[i-1] - arr[i];
            //cout << r << " " << arr[i] << "\n";
            moves += r;
            arr[i] += r;
            /*for (int j = 0; j < n; j++){
                cout << arr[j] << " ";
            }*/
        }
    }
    cout << moves;
}