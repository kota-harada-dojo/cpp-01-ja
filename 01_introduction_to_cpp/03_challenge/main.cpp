#include <iostream>
#include <string>


int main() {
    // このプログラムに書かれているすべての手順を完了してください。
    // プログラムをコンパイルして実行してください (エラーが出ない状態にしてください)。

    // データに適した型を使用して、次の変数の宣言と初期化を完成させてください。
    int pizzaSlices = 12;
    float pi = 3.14159f;
    long long starsInTheUniverse = 1234567890LL;
    char aLetter = 'k'; //シングルクオート
    std::string aWord = "kaleidescope"; //標準ライブラリ
    double veryPrecisePi = 3.14159265358979; //
    bool thisIsTrue = true;
    bool thisIsAlsoTrue = thisIsTrue;

    // 新しい変数を3つ宣言して初期化してください (3行で記述、1行につき1つの変数)。各変数のデータ型が異なるようにしてください。
    // ここに変数1を記述 
    int a = 1;
    // ここに変数2を記述
    double b =2.0;
    // ここに変数3を記述
    bool c = true;

    // 正しいデータ型を指定して次の配列を完成させてください。
    int myArray[] = {1, 2, 3, 4};
    float anotherArray[] = {3.5, 1.2, 6.7};

    // 独自の配列を作成し (1行で記述)、そこに5個以上の数値を格納します。数値のデータ型はどれでもかまいませんが、すべて同じデータ型にしてください。
    std::string member[] = {"Harada", "Maeda"};

    // この配列には大きな数値を格納するので、`int` 型は適していません。どのデータ型が適切ですか。
    long bigNumbers[3] = {500000, 700000, 800000};

    // static_castを使用して、`sizeOfCesiumAtom` をint型に変更してください。`static_cast` は、sizeOfCesiumAtomの次の行に記述してください。
    double sizeOfCesiumAtom = 0.267;
    int sizeOfCesiumAtomCast = static_cast<int>(sizeOfCesiumAtom);
    int sizeOfCesiumAtomCast1 {static_cast<int>(sizeOfCesiumAtom)};

    // 3つの定数変数を作成してください。データ型はどれでもかまいませんが、各変数のデータ型が異なるようにしてください。
    // ここに定数変数1を記述
    const int const_int_1 = 10;
    const int const_int_2 {10};
    // ここに定数変数2を記述
    const double const_double_2 = 20.0;
    // ここに定数変数3を記述
    const char const_char_1 = 'a';

    // 次の行を変更する必要はありません。これらはプログラムの出力をチェックするためのものです。
    std::cout << pizzaSlices << std::endl;
    std::cout << pi << std::endl;
    std::cout << starsInTheUniverse << std::endl;
    std::cout << aLetter << std::endl;
    std::cout << aWord << std::endl;
    std::cout << veryPrecisePi << std::endl;
    std::cout << thisIsTrue << std::endl;
    std::cout << thisIsAlsoTrue << std::endl;
    std::cout << "The size of a Cesium atom in nanometers is: " << sizeOfCesiumAtomCast << std::endl;

    return 0;
}