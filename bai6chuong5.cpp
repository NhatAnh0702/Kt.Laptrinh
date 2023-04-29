#include <iostream>
using namespace std;
int F(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n % 2 == 0) return F(n / 2);
    else return F(n / 2) + F(n / 2 + 1);
}
int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "F(" << n << ") = " << F(n) << endl;
    return 0;
}
//by #NhatAnh0236
