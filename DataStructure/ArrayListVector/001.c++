// https://www.acmicpc.net/problem/11720
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  string numbers;
  cin >> numbers;

  int sum = 0;
  for (int i = 0; i < numbers.length(); i++) {
    // numbers[i]를 정수로 계산하여 sum에 누적하기
    sum += numbers[i] - '0';
  }

  cout << sum;
}
