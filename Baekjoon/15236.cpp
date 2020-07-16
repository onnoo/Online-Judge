#include <iostream>

using namespace std;


int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N, count = 0;
  cin >> N;

  for (int i = 0; i <= N; i++)
    for (int j = i; j <= N; j++)
      count += i + j;
  
  cout << count << '\n';

  return 0;
}