#include <iostream>
#include <vector>
using namespace std;
void sinhToHop(int n, int k, vector<int> &cur, int last) {
    if (cur.size() == k) {
        for (int i = 0; i < cur.size(); i++) {
            cout << cur[i] << " "; 
        }
        cout << endl;
        return;
    }
    for (int i = last + 1; i <= n; i++) {
        cur.push_back(i); 
        sinhToHop(n, k, cur, i); 
        cur.pop_back(); 
    }
}
int main() {
    int n, k;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap k (<n): ";
    cin >> k;
    vector<int> cur;
    sinhToHop(n, k, cur, 0);
    return 0;
}
//by #NhatAnh0236
