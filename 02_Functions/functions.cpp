#include <iostream>
using namespace std;

// 関数定義
int add(int a, int b) {
    return a + b;
}

void printMessage(const string& msg) {
    cout << msg << endl;
}

int main() {
    int x = 10, y = 20;
    int sum = add(x, y);

    // 安全に文字列結合する
    string result = string("計算結果: ") + to_string(sum);
    printMessage(result);

    return 0;
}

// clang++ functions.cpp -o functions && ./functions

