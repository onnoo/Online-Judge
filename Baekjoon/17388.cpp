#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

typedef pair<int, string> pis;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int n, tot = 0;
  vector<pis> v;
  string arr[3] = {"Soongsil", "Korea", "Hanyang"};

  for (int i = 0; i < 3; i++)
  {
    cin >> n;
    tot += n;
    v.push_back(make_pair(n, arr[i]));
  }

  if (tot >= 100)
    cout << "OK\n";
  else
  {
    sort(v.begin(), v.end());
    cout << v[0].second << '\n';
  }

  return 0;
}