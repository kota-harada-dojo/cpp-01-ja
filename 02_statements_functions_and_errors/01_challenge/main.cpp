#include <string>
#include <iostream>

// 関数宣言
std::string pos_neg_check(float a);

// ユーザーに数値の入力を求め、その値が正、負、ゼロのどれであるかを表示するプログラムを作成してください。
int main() {
    float user_input = {};
    std::cout << "Input number which you like: ";
    std::cin >> user_input; 

    // 表示
    if (std::cin.fail()){
        std::cout << "Please input number." << std::endl;
    } else {
        std::cout << "Your input number is " << pos_neg_check(user_input) << "." << std::endl;
    }
    return 0;
}


std::string pos_neg_check(float a) {
    std::string result {"zero"};
    if (a > 0.0f){
        result = "positive";
    } else if (a < 0.0f){
        result = "negative";
    } 
    return result;
}
