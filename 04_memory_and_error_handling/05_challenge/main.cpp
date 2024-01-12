#include <iostream>
#include <vector>

int main() {
  std::vector<int> numbers;

  std::cout << "Initial size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;

  numbers.push_back(1);
  numbers.push_back(2);
  numbers.push_back(3);
  std::cout << "After adding elements: size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;

  numbers.reserve(10);
  std::cout << "After reserving space: size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;
}

// capacity()は現在割り当てられている領域の容量
// 領域を確保するときに、現在のcapacityの2倍のサイズのメモリ領域ととるように実装されている
// size()は実際に使われている要素数

/* 回答 */
// Initial size: 0, capacity: 0
// After adding elements: size: 3, capacity: 4
// After reserving space: size: 3, capacity: 10

// 初めはvectorを定義しただけなので、要素数はゼロであり、Capacityもゼロである。
// 要素１が追加されたとき、領域が確保され、サイズは１でCapacityも１となる。
// 次に、要素２が追加されると、領域が確保され、サイズは２となり、
// Capacityは「現在のcapacityの2倍のサイズのメモリ領域ととるように実装されている」ため、１×２＝２となる。
// その後、要素３が追加されると、領域の追加が行われcapacityは２×２＝４となり、このときのサイズは３となる。
// .reserve(10)とすると、領域が１０バイト分確保されるため、capacityは１０となるが、使用されている要素は３つなので、
// サイズは３のままである。