#include <iostream>
#include <vector>
using namespace std;
void sinhTapCon(int n, vector<int> &cur, int k) {
    if (k == n + 1) {
        for (int i = 0; i < cur.size(); i++) {
            cout << cur[i] << " ";
        }
        cout << endl;
        return;
    }
    cur.push_back(k); 
    sinhTapCon(n, cur, k + 1); 
    cur.pop_back(); 
    sinhTapCon(n, cur, k + 1);
}
int main() {
    int n;
    cout << "Nhap so phan tu cua tap: ";
    cin >> n;
    vector<int> cur;
    sinhTapCon(n, cur, 1);
    return 0;
}
//by #NhatAnh0236
