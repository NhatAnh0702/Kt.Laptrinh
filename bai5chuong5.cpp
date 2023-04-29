#include <iostream>
using namespace std;
int bitcount(int n) {
    int count = 0;
    while (n) {
        if (n & 1) {
            count++;
        }
        n >>= 1;
    }
    return count;
}
int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int count = bitcount(n);
    cout << "So luong bit 1 cua " << n << " la: " << count << endl;
    return 0;
}
//by #NhatAnh0236
