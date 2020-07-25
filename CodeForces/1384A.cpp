#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int T, N;
  cin >> T;

  while (T--)
  {
    cin >> N;
    int arr[N + 2];
    arr[0] = 0;
    arr[N + 1] = 0;
    for (int i = 1; i <= N; i++)
      cin >> arr[i];
    
    
    int offset = 0;
    string s = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    cout << s << '\n';
    for (int i = 1; i <= N; i++)
    {
      string tmp = s.substr(0, arr[i]);
      for (int j = 0; j < 50 - arr[i]; j++)
        tmp += ('a' + offset);
      cout << tmp << '\n';
      s = tmp;
      offset = (offset + 1) % 25;
    }
  }

  return 0;
}