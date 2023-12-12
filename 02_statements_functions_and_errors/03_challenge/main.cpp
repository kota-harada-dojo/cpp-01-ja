#include <iostream>
#include <string>

int power(int base, int exponent = 2) {
    int result { 1 };
    for (int i { 0 }; i < exponent; ++i) {
        result *= base;
    }
    return result;
}


int main() {
  std::cout << "result is " << power(3, 4) << std::endl;
  return 0;
}