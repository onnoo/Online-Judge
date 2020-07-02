#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int n, h, num, answer = 0;
  cin >> n >> h;
  
  for (int i = 0; i < n; i++)
  {
    cin >> num;
    answer += 1 + (num > h);
  }

  cout << answer << '\n';

  return 0;
}