#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, T, num, head, tail, size, ret;
  size = head = tail = 0;

  string s;

  cin >> T;
  N = 2 * T;
  int* q = (int*)malloc(sizeof(int) * N);

  while (T--)
  {
    cin >> s;
    if (s == "push")
    {
      cin >> num;
      q[tail] = num;
      tail = (tail + 1) % N;
      size++;
    }
    else if (s == "front")
    {
      cout << (size == 0 ? -1 : q[head]) << '\n';
    }
    else if (s == "back")
    {
      cout << (size == 0 ? -1 : q[(N + tail - 1) % N]) << '\n';
    }
    else if (s == "size")
    {
      cout << size << '\n';
    }
    else if (s == "empty")
    {
      cout << (size == 0) << '\n';
    }
    else // (s == "pop")
    {
      if (size == 0)
        cout << -1 << '\n';
      else
      {
        cout << q[head] << '\n';
        head = (N + head + 1) % N;
        size--;
      }
    }
  }

  return 0;
}

