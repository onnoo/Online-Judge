#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;
  while (T--)
  {
    int N, M;
    cin >> N >> M;

    int answer = -1;
    int a[N], b[M];
    for (int i = 0; i < N; i++)
      cin >> a[i];
    
    for (int i = 0; i < M; i++)
      cin >> b[i];
    
    for (int i = 0; i < N; i++)
    {
      for (int j = 0; j < M; j++)
      {
        if (a[i] == b[j]) {
          answer = a[i];
          break;
        }
      }
    }

    if (answer > 0)
      cout << "YES\n" << 1 << ' ' << answer << '\n';
    else
      cout << "NO\n";

  }
  



  return 0;
}