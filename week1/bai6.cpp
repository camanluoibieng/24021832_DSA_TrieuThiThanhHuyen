//Viết chương trình nhập vào một dãy gồm N phần tử: 
//a.Viết hàm xóa phần tử ở vị trí thứ k
//b.Viết hàm chèn phần tử y vào vị trí thứ m trong dãy 
#include <iostream>
using namespace std;

// a. Xóa
void xoa(int a[], int &n, int k) {
    if (k < 0 || k >= n) {
        cout << "Vị trí k không hợp lệ!";
        return; }

    for (int i = k; i < n - 1; i++) {
        a[i] = a[i + 1];   }

    n--;
}

// b. Chèn
void chen(int a[], int &n, int y, int m) {
    if (m < 0 || m > n) {
        cout << "Vị trí m không hợp lệ!";
        return;   }

    for (int i = n; i > m; i--) {
        a[i] = a[i - 1];   }

    a[m] = y;
    n++;
}

int main() {
    int n;
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];   }

    // xóa phần tử ở vị trí thứ k
    int k;
    cin >> k;
    xoa(a, n, k);
    cout << "Dãy sau khi xóa: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " "; }
  
    // chèn phần tử y vào vị trí thứ m trong dãy 
    int y, m;
    cin >> y >> m;
    chen(a, n, y, m);
    cout << "\nDãy sau khi chèn: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";  }

    return 0;
}
// Xoa: Time = O(N)
// Chen: Time = O(N)
// Memory = O(N)
