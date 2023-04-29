#include <iostream>
using namespace std;
void generatePermutations(int n, int k, int chosen[], int index) {
    if (k == 0) { 
        for (int i = 0; i < index; i++) {
            cout << chosen[i] << " ";
        }
        cout << endl;
        return;
    }
    if (n == 0) { 
        return;
    }
    if (k > n) { 
        return;
    }
  chosen[index] = n;
    generatePermutations(n-1, k-1, chosen, index+1);
    generatePermutations(n-1, k, chosen, index);
}
int main() {
    int n, k;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap k: ";
    cin >> k;
    int chosen[k];
    generatePermutations(n, k, chosen, 0);
    return 0;
}
//by #NhatAnh0236
