/*
Viết chương trình nhận đầu vào là mảng 2 chiều có kích thước N×M
//a.Viết hàm tính tổng các phần tử trong mảng
b.Viết hàm xóa dòng thứ i trong mảng 2 chiều
*/
#include <iostream>
using namespace std;
// a. tính tổng các phần tử trong mảng
int tinhTong(int a[][100], int n, int m) {
    int tong = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {   
          tong += a[i][j]; 
        }
    }
    return tong;
}
// b. xóa dòng thứ i trong mảng 2 chiều
void xoaDong(int a[][100], int &n, int m, int i) {
    if (i < 0 || i >= n) {
        cout << "Vi tri dong khong hop le!";
        return;  }

    for (int k = i; k < n - 1; k++) {
        for (int j = 0; j < m; j++) {    
          a[k][j] = a[k + 1][j];     
        }
    }
    n--;
}

int main() {
    int a[100][100];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {  
        cin >> a[i][j];   
        }
    }
    cout << "Tong = " << tinhTong(a, n, m) << endl;

    int i;
    cin >> i;
    xoaDong(a, n, m, i);
    for (int k = 0; k < n; k++) {
        for (int j = 0; j < m; j++) {      
          cout << a[k][j] << " ";     
        }
        cout << endl;
    }
    return 0;
}

/*
1. Ham tinhTong:
   Time: O(N * M)
   Memory: O(1)
2. Ham xoaDong:
   Time:
   - xóa dòng cuối: O(1)      
   - xóa dòng đầu: O(N * M) 
   Memory : O(1)
3. All:
   Time: O(N * M)
   Memory: O(N * M)
*/
