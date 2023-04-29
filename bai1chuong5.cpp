#include <iostream>
#include <vector>
using namespace std;
void nhap(int &n);
void xuat(int binary);
void chuyenDoiHeNhiPhan(int n);
int main()
{
    int n;
    nhap(n);
    chuyenDoiHeNhiPhan(n);
    return 0;
}
void nhap(int &n)
{
    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;
}
void xuat(int binary)
{
    cout << binary << endl;
}
void chuyenDoiHeNhiPhan(int n)
{
    vector<int> binary;
    for (int i = 1; i <= n; i++)
    {
        int temp = i;
        while (temp > 0)
        {
            int bit = temp % 2;
            binary.insert(binary.begin(), bit);
            temp /= 2;
        }
        int result = 0;
        for (int j = 0; j < binary.size(); j++)
        {
            result = result * 10 + binary[j];
        }
        xuat(result);
        binary.clear();
    }
}
//by #NhatAnh0236
