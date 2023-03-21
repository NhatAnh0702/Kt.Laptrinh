#include <iostream>
using namespace std;
void nhap(int &n);
void xuat(double kq);
double tinh(int n);
int main()
{
    int n;
    nhap(n);
    double kq = tinh(n);
    xuat(kq);
    return 0;
}
void nhap(int &n)
{
    cout<<"Nhap n: ";
    cin>>n;
}
void xuat(double kq)
{
    cout<<"Tong S(n) la: "<<kq<<endl;
}
double tinh(int n)
{
    double s = 0;
    double t = 0;
    for (int i = 1; i <= n; i++) 
	{
        t += i;
        s += 1/t;
    }
    return s;
}

