#include <iostream>
using namespace std;
void nhap(int &n);
void xuat(long long kq);
long long tinh(int n);
int main()
{
    int n;
    nhap(n);
    long long kq = tinh(n);
    xuat(kq);
    return 0;
}
void nhap(int &n)
{
    cout << "Nhap n: ";
    cin >> n;
}
void xuat(long long kq)
{
    cout << "Ket qua: " << kq << endl;
}
long long tinh(int n)
{
    long long s = 0;
    long long s1 = 0;
    for (int i = 1; i <= n; i++) {
        s1 += i;
        s += s1;
    }
    return s;
}

