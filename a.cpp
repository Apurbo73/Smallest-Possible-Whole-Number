#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        if (K == 0)
            cout << N << endl; 
        else
            cout << N % K << endl;
    }
    return 0;
}