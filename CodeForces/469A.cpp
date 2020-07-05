#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N, p, num;
  cin >> N;

  bool* check = (bool*)calloc(N, sizeof(bool));
  
  for (int i = 0; i < 2; i++)
  {
    cin >> p;
    while (p--)
    {
      cin >> num;
      check[num - 1] = true;
    }
  }

  bool answer = true;
  for (int i = 0; i < N; i++)
  {
    answer = check[i] && answer;
  }
  
  cout << (answer ? "I become the guy." : "Oh, my keyboard!") << '\n';

  return 0;
}