#include <iostream>
using namespace std;
int fi(int n) {
    if ((n == 2) || (n == 1)) {
            return 1;
        }
    else {
            return fi(n - 1) + fi(n - 2);
        
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "n = ";
    int n;
    cin >> n;
    cout << fi(n);
    return 0;
}
