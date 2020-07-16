#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int p1, s1, p2, s2;
  cin >> p1 >> s1 >> s2 >> p2;

  if (p1 + p2 > s1 + s2)
    cout << "Persepolis\n";
  else if (p1 + p2 < s1 + s2)
    cout << "Esteghlal\n";
  else if (p1 < s2)
    cout << "Persepolis\n";
  else if (p1 > s2)
    cout << "Esteghlal\n";
  else
    cout << "Penalty\n";

  return 0;
}