// https://www.acmicpc.net/problem/11659
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int suNo, quizNo;
  cin >> suNo >> quizNo;
  int s[100001] = {};
  
  for (int i = 1; i <= suNo; i++) {
    int temp;
    cin >> temp;
    s[i] = s[i - 1] + temp;
  }
  
  for (int i = 0; i < quizNo; i++) {
    int startNo, endNo;
    cin >> startNo >> endNo;
    cout << s[endNo] - s[startNo - 1] << "\n";
  }
}
