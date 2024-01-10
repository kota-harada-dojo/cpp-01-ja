#include <iostream>
#include <vector>

// コードを入力してください

std::vector<int> double_elements(const std::vector<int> target) {
  std::vector<int> result;
  // for (int i = 0; i < target.size(); i++) {
  //   result.push_back(target[i] * 2);
  // }

  for (auto i : target) {
    result.push_back(i * 2);
  }
  return result;
}

void void_double_elements(std::vector<int>& target) {
  for (auto& i : target) {
    i *= 2;
  }
  return;
}

int main() {
  std::vector<int> numbers = {1, 2, 3, 4, 5};

  // コードを入力してください
  std::vector<int> result = double_elements(numbers);
  for (int i = 0; i < numbers.size(); i++) {
    std::cout << "Result of double_elements: " << result[i] << std::endl;
    std::cout << "Result of origin: " << numbers[i] << std::endl;
  }

  // std::vector<int> numbers2 = {1, 2, 3, 4, 5};
  // double_elements(numbers2);
  // for (int i = 0; i < numbers.size(); i++) {
  //   std::cout << "Result of double_elements: " << result[i] << std::endl;
  //   std::cout << "Result of origin: " << numbers[i] << std::endl;
  // }
  return 0;
}