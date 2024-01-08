// スレッド(thread)記憶域期間
// g++ -std=c++17 -pthread main.cpp -o main

#include <iostream>
#include <thread>

// スレッド記憶変数の初期化
thread_local int thread_data = 10;

void func1() {
  thread_data += 1;
  std::cout << "Thread1:" << thread_data << std::endl;
}

void func2() {
  for (int i{0}; i < 100000; i++) {
    thread_data += 1;
  }

  std::cout << "Thread2:" << thread_data << std::endl;
}

int main() {
  // 初期値になっていることを確認。
  std::cout << "Before thread:" << thread_data << std::endl;

  // ２つのスレッドを作成
  std::thread t1(func1);
  std::thread t2(func2);

  // それぞれのスレッドの終了まで待つ
  t1.join();
  t2.join();

  // スレッド外では初期値になっていることを確認。
  std::cout << "Out of thread:" << thread_data << std::endl;
  return 0;
}