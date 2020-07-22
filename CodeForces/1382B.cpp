#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;

  while (T--)
  {
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++)
      cin >> arr[i];
    
    // 다음 돌을 먼저 뽑는 사람
    int cnt = 0;
    for (int i = 0; i < N - 1; i++)
    {
      if (arr[i] == 1)
        cnt++;
      else
        break;
    }


    if (cnt % 2 == 0)
      cout << "First\n";
    else
      cout << "Second\n";
  }


  return 0;
}