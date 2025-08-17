#include <iostream>
using namespace std;

class Player {
public:
    string name;
    int hp;

    Player(string n, int h) {
        name = n;
        hp = h;
    }

    void Attack() {
        cout << name << " の攻撃!" << endl;
    }
};

int main() {
    Player p1("勇者", 100);
    p1.Attack();
    cout << p1.name << " HP: " << p1.hp << endl;
    return 0;
}
