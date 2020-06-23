#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <unordered_map>
#include <stack>
#include <algorithm>
#include <utility>

using namespace std;

typedef pair<string, int> psi;

bool comp(psi a, psi b)
{
  return a.second < b.second;
}

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, M;
  string s;
  unordered_map<string, int> m;
  
  cin >> N >> M;

  for (int i = 0; i < M; i++)
  {
    cin >> s;
    m[s] = i;
  }

  vector<psi> v(m.begin(), m.end());

  sort(v.begin(), v.end(), comp);

  auto it = v.begin();
  for (int i = 0; i < N && it != v.end(); i++, it++)
  {
    cout << it->first << '\n';
  }

  return 0;
}