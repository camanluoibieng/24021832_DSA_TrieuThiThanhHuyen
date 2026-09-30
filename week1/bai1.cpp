#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a[N];
    int tong = 0;

    for (int i = 0; i < N; i++) {
        cin >> a[i];
        tong += a[i];
    }

    cout << tong;

    return 0;
}

// Time = O(N)
// Memory = O(N)
