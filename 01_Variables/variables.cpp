#include <iostream>
using namespace std;

int main() {
    int age = 20;
    float height = 175.5;
    bool isStudent = true;

    cout << "年齢: " << age << endl;
    cout << "身長: " << height << endl;

    // if文
    if (age >= 20) {
        cout << "成人です" << endl;
    } else {
        cout << "未成年です" << endl;
    }

    // forループ
    for (int i = 0; i < 5; i++) {
        cout << "カウント: " << i << endl;
    }

    // whileループ
    int n = 0;
    while (n < 3) {
        cout << "n = " << n << endl;
        n++;
    }

    return 0;
}

// clang++ variables.cpp -o variables && ./variables