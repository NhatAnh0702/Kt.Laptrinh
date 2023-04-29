#include <iostream>
#include <vector>
using namespace std;
void sangEratosthene(int n) {
    vector<bool> primes(n+1, true); 
    for (int p = 2; p * p <= n; p++) {
        if (primes[p]) { 
            for (int i = p * p; i <= n; i += p) {
                primes[i] = false;
            }
        }
    }
    for (int p = 2; p <= n; p++) {
        if (primes[p]) { 
            cout << p << " ";
        }
    }
}
int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Cac so nguyen to nho hon " << n << " la: ";
    sangEratosthene(n);
    return 0;
}
//by #NhatAnh0236
