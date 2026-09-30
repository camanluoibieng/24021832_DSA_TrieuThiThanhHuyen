//Viết chương trình nhập vào hai số a, b, viết hàm rút gọn phân số a/b (hàm kiểu void)
#include <iostream>
using namespace std;

int UCLN(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    while (b != 0) {
        int h = a % b;
        a = b;
        b = h; }
  
    return a;
}
void rutgon(int &a, int &b) {
    if (b == 0) return;

    int ucln = UCLN(a, b);
    a = a / ucln;
    b = b / ucln;

    if (b < 0) {
        a = -a;
        b = -b; }
}

int main() {
    int a, b;
    cin >> a >> b;

    if (b == 0) {
        cout << "Mau so phai khac 0";
        return 0; }

    rutgon(a, b);
    cout << a << "/" << b;
    return 0;
}
// Time: O(log(min(|a|, |b|)))
// Memory: O(1)
