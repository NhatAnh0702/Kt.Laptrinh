#include <iostream>
using namespace std;
void nhap(int &n);
void xuat(int kq);
int tinh(int n);
int main()
{
    int n;
    nhap(n);
    int kq = tinh(n);
    xuat(kq);
    return 0;
}
void nhap(int &n)
{
    cout<<"Nhap n: ";
    cin>>n;
}
void xuat(int kq)
{
    cout<<"Tong S(n) la: " <<kq<<endl;
}
int tinh(int n)
{
    int s = 0;
    int t = 1;
    for (int i = 1; i <= n; i++) 
	 {
        t = t*i;
        s += t;
    }
    return s;
}

