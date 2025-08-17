#include <iostream>
using namespace std;

void addOne(int& ref) {
    ref += 1;
}

int main() {
    int a = 10;
    int* p = &a;

    cout << "aの値: " << a << endl;
    cout << "ポインタpの指す値: " << *p << endl;

    *p = 20;
    cout << "aの新しい値: " << a << endl;

    int x = 5;
    addOne(x);
    cout << "参照渡しでxの値: " << x << endl;

    return 0;
}
