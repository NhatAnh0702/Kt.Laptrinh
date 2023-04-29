#include <iostream>
#include <vector>
#include <string>
using namespace std;
void generateBinaryStrings(int n, int& count, string str) {
    if (n == 0) {
        int found = 0;
        for (int i = 0; i < str.length() - 1; i++) {
            if (str[i] == '0' && str[i + 1] == '1') {
                found++;
            }
        }
        if (found == 2) {
            cout << str << endl;
            count++;
        }
    } else {
        generateBinaryStrings(n - 1, count, str + '0');
        generateBinaryStrings(n - 1, count, str + '1');
    }
}
int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int count = 0;
    generateBinaryStrings(n, count, "");
    if (count == 0) {
        cout << "Khong co day nhi phan thoa man" << endl;
    } else {
        cout << "Tong cong co " << count << " day nhi phan thoa man" << endl;
    }
    return 0;
}
//by #NhatAnh0236
