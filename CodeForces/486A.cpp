#include <iostream>

using namespace std;

typedef long long ll;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  ll N;
  cin >> N;

  cout << (ll(N / 2) + (N % 2)) * (N % 2 ? -1 : 1) << '\n';

  return 0;
}