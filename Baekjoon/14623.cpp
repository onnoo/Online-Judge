#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

ll bin2dec(string s)
{
  ll ret = 0;
  ll c = 1;
  for (int i = s.size() - 1; i >= 0; i--)
  {
    if (s[i] == '1')
      ret += c;
    c *= 2;
  }
  return ret;
}

string dec2bin(ll d)
{
  ll t;
  string ret = "";
  while (d)
  {
    t = d % 2;
    if (t)
      ret = '1' + ret;
    else
      ret = '0' + ret;
    d /= 2;
  }
  return ret;
}

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  string b1, b2;
  cin >> b1 >> b2;

  cout << dec2bin(bin2dec(b1) * bin2dec(b2)) << '\n';

  return 0;
}