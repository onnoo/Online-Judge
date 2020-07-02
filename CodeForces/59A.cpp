#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  string s, answer;
  int arr[2] = {0, 0};

  cin >> s;
  for (char c : s)
  {
    arr[c > 'Z']++;
  }

  if (arr[0] > arr[1])
  {
    transform(s.begin(), s.end(), s.begin(), ::toupper);
  }
  else
  {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
  }
  cout << s << '\n';

  return 0;
}