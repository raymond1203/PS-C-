// https://www.acmicpc.net/problem/1546
#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int arr[1000];
  
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  int max = 0; int sum = 0;

  for(int i = 0; i < n; i++){
    if(arr[i] > max){
      max = arr[i];
    }
    sum += arr[i];
  }
  // 한 과목과 관련된 수식을 총합과 관련된 수식으로 변환해 로직이 간단해짐
  double result = sum * 100.0 / max / n;
  cout << result << '\n';
}
