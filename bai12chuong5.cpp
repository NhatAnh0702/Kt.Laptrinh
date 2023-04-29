#include <iostream>
#include <vector>
using namespace std;
void sinhHoanVi(int n, vector<int> &cur, vector<bool> &used) {
    if (cur.size() == n) { 
        for (int i = 0; i < cur.size(); i++) {
            cout << cur[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (!used[i]) { 
            cur.push_back(i + 1); 
            used[i] = true;
            sinhHoanVi(n, cur, used); 
            cur.pop_back(); 
            used[i] = false;
        }
    }
}
int main() {
    int n;
    cout << "Nhap so phan tu cua tap: ";
    cin >> n;
    vector<int> cur;
    vector<bool> used(n, false); 
    sinhHoanVi(n, cur, used);
    return 0;
}
//by #NhatAnh0236
