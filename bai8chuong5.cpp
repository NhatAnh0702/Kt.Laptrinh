#include <iostream>
#include <string>
using namespace std;
bool kiemTraChuoiDoiXung(string s) {
    int len = s.length();
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            return false;
        }
    }
    return true;
}
int main() {
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    if (kiemTraChuoiDoiXung(s)) {
        cout << "Chuoi doi xung" << endl;
    } else {
        cout << "Chuoi khong doi xung" << endl;
    }
    return 0;
}
//by #NhatAnh0236
