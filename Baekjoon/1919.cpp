#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(void)
{
    iostream::sync_with_stdio(0);
    cin.tie(0);

    int arr[26] = {0};
    string a, b;
    cin >> a >> b;

    for (int i = 0; a[i]; i++)
        arr[a[i] - 'a']++;
    
    for (int i = 0; b[i]; i++)
        arr[b[i] - 'a']--;
    
    int answer = 0;
    for (int i = 0; i < 26; i++)
    {
        answer += abs(arr[i]);
    }

    cout << answer << '\n';

    return 0;
}