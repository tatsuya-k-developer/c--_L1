#include <iostream>
using namespace std;

// 関数定義
int add(int a, int b) {
    return a + b;
}

void printMessage(string msg) {
    cout << msg << endl;
}

int main() {
    int x = 10, y = 20;
    int sum = add(x, y);
    printMessage("計算結果: " + to_string(sum));
    return 0;
}
