#include <iostream>
#include <string>

using namespace std;

string poly[5] = {"Tetrahedron", "Cube", "Octahedron", "Dodecahedron", "Icosahedron"};
int faces[5] = {4, 6, 8, 12, 20};

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N, answer = 0;
  string s;
  cin >> N;

  while (N--)
  {
    cin >> s;
    for (int i = 0; i < 5; i++)
    {
      if (s == poly[i])
      {
        answer += faces[i];
      }
    }
  }
  cout << answer << '\n';

  return 0;
}