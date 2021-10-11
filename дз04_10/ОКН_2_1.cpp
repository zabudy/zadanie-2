#include <iostream>
#include <ctime>
using namespace std;
void kub() {
    
    cout << 1+rand()%5  << endl;
}

int main()
{
    srand(time(0));
    setlocale(LC_ALL, "Russian");
    cout << "Значение первого кубика:";
    kub();
    cout << "Значение второго кубика:";
    kub();
    return 0;
}
