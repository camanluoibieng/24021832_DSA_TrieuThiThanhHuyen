#include <iostream>
#include <algorithm>
using namespace std;

void sapxeptangdan(int a[], int n) {
    sort(a, a + n); }
// Time = O(NlogN)
int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i]; }

    sapxeptangdan(a, n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " "; }

    return 0;
}
// Memory = O(N)
