#include <iostream>
using namespace std;
const int MAX = 100;
void nhapMaTran(int A[][MAX], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Nhap A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }
}
void xuatPhanTuMaxTrenDongVaMinTrenCot(int A[][MAX], int m, int n) {
    int maxDong, minCot;
    bool coPhanTu = false;
    for (int i = 0; i < m; i++) {
        maxDong = A[i][0];
        for (int j = 1; j < n; j++) {
            if (A[i][j] > maxDong) {
                maxDong = A[i][j];
            }
        }
        for (int j = 0; j < n; j++) {
            if (A[i][j] == maxDong) {
                minCot = A[0][j];
                for (int k = 1; k < m; k++) {
                    if (A[k][j] < minCot) {
                        minCot = A[k][j];
                    }
                }
                if (A[i][j] == minCot) {
                    cout << A[i][j] << " ";
                    coPhanTu = true;
                }
            }
        }
    }
    if (!coPhanTu) {
        cout << "Khong co phan tu nao thoa dieu kien!";
    }
    cout << endl;
}
int main() {
    int A[MAX][MAX], m, n;
    cout << "Nhap so hang m: ";
    cin >> m;
    cout << "Nhap so cot n: ";
    cin >> n;
    nhapMaTran(A, m, n);
    cout << "Cac phan tu A[i][j] sao cho A[i][j] la phan tu lon nhat tren dong i va nho nhat tren cot j: ";
    xuatPhanTuMaxTrenDongVaMinTrenCot(A, m, n);
    return 0;
}
//by #NhatAnh0236
