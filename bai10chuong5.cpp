#include <iostream>
#include <string>
using namespace std;
void sinhDayNhiPhan(int n, string str = "") {
    if (str.length() == n) { 
        cout << str << endl;
        return;
    }
    sinhDayNhiPhan(n, str + "0"); 
    sinhDayNhiPhan(n, str + "1"); 
}
int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    sinhDayNhiPhan(n);
    return 0;
}
//by #NhatAnh0236
