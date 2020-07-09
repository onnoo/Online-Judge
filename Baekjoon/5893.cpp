#include <iostream>
#include <string>

using namespace std;

#define L 1020
bool arr[L];

void set(int t)
{
  if (arr[t])
  {
    arr[t] = false;
    set(t - 1);
  }
  else
  {
    arr[t] = true;
  }
}

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int idx, target;
  string s;
  cin >> s;

  for (int i = 1; i <= s.size(); i++)
  {
    idx = s.size() - i;
    target = L - i;
    if (s[idx] == '1')
    {
      set(target);
      set(target - 4);
    }
  }

  string answer = "";
  bool flag = false;
  for (int i = 0; i < L; i++)
  {
    if (arr[i])
    {
      flag = true;
      answer = answer + '1';
    }
    else if(flag)
    {
      answer = answer + '0';
    }
  }

  cout << answer << '\n';

  return 0;
}