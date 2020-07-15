#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int A, B, answer;
  cin >> A >> B;

  if (A == B || A > B)
    answer = A;
  else
    answer = B;
  
  cout << answer << '\n';
  
  return 0;
}