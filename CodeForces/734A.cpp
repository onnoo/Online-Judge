#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N;
  string s;
  int arr[2] = {0, 0};

  cin >> N >> s;

  for (char c : s)
  {
    arr[c == 'A']++;
  }
  if (arr[0] > arr[1])
    cout << "Danik\n";
  else if (arr[0] < arr[1])
    cout << "Anton\n";
  else
    cout << "Friendship\n";

  return 0;
}