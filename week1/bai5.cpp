//Viết chương trình nhập vào một dãy số thực có độ dài N. In ra tất cả những giá trị lớn hơn hoặc bằng giá trị trung bình của dãy.
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    float a[N];
    float tong = 0;
  
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        tong += a[i]; }

    float trungbinh = tong / N;

    for (int i = 0; i < N; i++) {
        if (a[i] >= trungbinh) {
            cout << a[i] << " ";  }
    }

    return 0;
}
// Time: O(N)
// Memory: O(N)
