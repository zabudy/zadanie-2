#include <iostream>
using namespace std;
int Aa (int a){
    int s = 0, l = a / 2;
    for (int i = 1; i <= l; i++) {
        if (a % i == 0) { s = s + i; }
    }
    return s;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int a=2, n, m, k=0;
    while (a <= 10000) {
        n = Aa(a);
        m = Aa(n);
        if (m == a) { k += 1; }
        a += 1;
    }
    cout << k;
    return 0;
}