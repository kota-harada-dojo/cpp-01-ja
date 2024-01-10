#include <iostream>
#include <vector>

// コードを入力してください

std::vector<int> double_elements(std::vector<int> target) {
  std::vector<int> result;
  // for (int i = 0; i < target.size(); i++) {
  //   result.push_back(target[i] * 2);
  // }

  for (auto i : target) {
    result.push_back(i * 2);
  }
  return result;
}

// void double_elements(std::vector<int>& target) {
//   for (int i = 0; i < target.size(); i++) {
//     target[i] = target[i] * 2;
//   }

//   return;
// }

int main() {
  std::vector<int> numbers = {1, 2, 3, 4, 5};

  std::vector<int> result = double_elements(numbers);

  // コードを入力してください
  for (int i = 0; i < numbers.size(); i++) {
    std::cout << "Result of double_elements: " << result[i] << std::endl;
    std::cout << "Result of origin: " << numbers[i] << std::endl;
  }

  return 0;
}