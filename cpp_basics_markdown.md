# C++基礎（詳しい解説）

## 1️⃣ 変数・型・演算子・if・for/while

### 変数と型

```cpp
int age = 20;
float height = 175.5;
bool isStudent = true;
char grade = 'A';
```

- **int** … 整数（例：-10, 0, 20）
- **float** … 小数（例：3.14, 175.5）
- **bool** … 真偽値（true / false）
- **char** … 文字（'A', 'b' など）

💡 ポイント：

- 型を間違えると計算や表示がうまくいかない
- Unrealでは `int32`, `float`, `bool` がよく使われる

### 演算子

```cpp
int x = 10 + 5;   // 足し算
int y = 10 - 3;   // 引き算
int z = 4 * 5;    // 掛け算
float f = 10.0 / 4.0; // 割り算
x++;              // インクリメント
y--;              // デクリメント
```

- `+ - * / %` … 基本の四則演算
- `++` / `--` … 1ずつ増減
- `==`, `!=`, `<`, `>`, `<=`, `>=` … 比較演算子
- `&&`, `||`, `!` … 論理演算子

### if文

```cpp
if (age >= 20) {
    cout << "成人です" << endl;
} else {
    cout << "未成年です" << endl;
}
```

### forループ

```cpp
for (int i = 0; i < 5; i++) {
    cout << "カウント: " << i << endl;
}
```

### whileループ

```cpp
int n = 0;
while (n < 3) {
    cout << "n = " << n << endl;
    n++;
}
```

---

## 2️⃣ 関数・引数・戻り値

### 基本形

```cpp
int add(int a, int b) {
    return a + b;
}

void printMessage(string msg) {
    cout << msg << endl;
}
```

- `int add(int a, int b)` → 整数を返す関数
- `void printMessage(string msg)` → 値は返さない関数
- 引数はカッコ内に書く（複数可）
- `return` で値を返す

💡 ポイント：

- 関数は **処理のまとまりを作る** 便利な道具
- Unrealでは関数を `UFUNCTION(BlueprintCallable)` にして呼び出すことが多い

---

## 3️⃣ クラスとオブジェクト

```cpp
class Player {
public:
    string name;
    int hp;

    Player(string n, int h) { // コンストラクタ
        name = n;
        hp = h;
    }

    void Attack() {
        cout << name << " の攻撃!" << endl;
    }
};

Player p1("勇者", 100);
p1.Attack();
```

- **クラス** … データ（変数）と処理（関数）をまとめた設計図
- **オブジェクト** … クラスを元に作った実体
- **コンストラクタ** … オブジェクト生成時に呼ばれる関数
- Unrealでは、ActorやPawnもクラスとして扱う

---

## 4️⃣ ポインタ・参照

### ポインタ

```cpp
int a = 10;
int* p = &a;    // aのアドレスを代入
*p = 20;        // ポインタ経由でaを書き換え
```

- `*p` … ポインタが指す先の値
- `&a` … 変数aのアドレス
- Unrealでは `UObject*` や `AActor*` の形でよく使う

### 参照

```cpp
void addOne(int& ref) {
    ref += 1;
}

int x = 5;
addOne(x);  // xの値が直接変更される
```

- `&` を引数につけると「参照渡し」になり、関数内で変数を直接変更可能
- Unrealでも関数に `int&` や `FVector&` など参照を使うことがある

---

## 🔹 まとめ

- **変数・型・演算子** … 基本のデータ操作
- **if/for/while** … 条件分岐・繰り返し
- **関数** … 処理のまとまり、引数・戻り値
- **クラス/オブジェクト** … データと処理をまとめた設計
- **ポインタ/参照** … 変数の直接操作、UnrealのActorやComponentで必須



