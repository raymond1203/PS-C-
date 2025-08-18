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

  double result = sum * 100.0 / max / n;
  cout << result << '\n';
}
