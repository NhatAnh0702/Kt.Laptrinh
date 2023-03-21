#include<iostream>
using namespace std;
void nhap(int &x, int &p);
void xuat(int kq);
int tinh(int x, int p);
int main()
{
	int x, p;
	nhap(x,p);
	int kq = tinh(x, p);
	xuat(kq);
	return 0; 
}
void nhap(int &x, int &p)
{
	cin>>x>>p;
}
void xuat(int kq)
{
	cout<<kq;
}
int tinh(int x, int p)
{
	int t=1;
	int i = 0;
	while(i<p)
	{
		t = t*x;
		i++;
	}
	return t; 
}
