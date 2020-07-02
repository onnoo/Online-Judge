#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  string a, b;
  cin >> a >> b;
  reverse(a.begin(), a.end());

  cout << (a == b ? "YES\n" : "NO\n");

  return 0;
}