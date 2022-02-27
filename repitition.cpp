#include <iostream>
using namespace std;

int main() {
    string dna ;
    cin >> dna;
    int length;
    int max_length = 1;
    int i = 0;
    while (i != dna.size()) {
        if (dna[i+1] == dna[i]) {
            int k = i;
            while (dna[i] == dna[i+1]) {
                i++;
            }
            length = i - k + 1;
            max_length = max(max_length,length);

        }
        else {
            i++;
        }
    }
    cout << max_length;
}