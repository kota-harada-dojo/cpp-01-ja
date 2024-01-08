#include <iostream>
#include <stdexcept>
#include <vector>

// コードを入力してください

int element_at(std::vector<int> numbers, int index) {
  int result = 0;
  if ((index >= numbers.size()) || (index < 0)) {
    throw std::runtime_error("Index error");
  } else {
    result = numbers[index];
  }

  return result;
}

int main() {
  std::vector<int> numbers = {1, 3, 5, 7, 9};
  // 正しい例
  try {
    int result = element_at(numbers, 0);
    std::cout << result << std::endl;
  } catch (const std::runtime_error& e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  // エラー例
  try {
    int result = element_at(numbers, -1);
    std::cout << result << std::endl;
  } catch (const std::runtime_error& e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  // コードを入力してください
}