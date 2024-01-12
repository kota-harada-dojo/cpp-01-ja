#include <iostream>
#include <vector>

// コードを入力してください

std::vector<int> double_elements(const std::vector<int>& numbers) {
  std::vector<int> result;

  for (auto i : numbers) {
    result.push_back(i * 2);
  }
  return result;
}

// void void_double_elements(std::vector<int>& target) {
//   for (auto& i : target) {
//     i *= 2;
//   }
//   return;
// }

int main() {
  std::vector<int> numbers = {1, 2, 3, 4, 5};

  std::vector<int> result = double_elements(numbers);

  for (auto num : numbers) {
    // std::cout << "Result of origin: " << num << std::endl;
    std::cout << num << " ";
  }

  std::cout << std::endl;

  for (auto num : result) {
    // std::cout << "Result of double_elements: " << num << std::endl;
    std::cout << num << " ";
  }

  std::cout << std::endl;

  return 0;
}