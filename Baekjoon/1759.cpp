#include <iostream>
#include <algorithm>

using namespace std;

int L, C;
char *arr;
char *word;
int include[2];

bool is_vowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

void func(int idx, int t)
{
    if (idx == L)
    {
        if (include[0] >= 2 && include[1] >= 1)
            cout << word << '\n';
    }
    else
    {
        for (int i = t; i < C; i++)
        {
            include[is_vowel(arr[i])]++;
            word[idx] = arr[i];
            func(idx + 1, i + 1);
            include[is_vowel(arr[i])]--;
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> L >> C;

    arr = (char *)malloc(sizeof(char) * C);
    word = (char *)malloc(sizeof(char) * L);
    for (int i = 0; i < C; i++)
        cin >> arr[i];

    sort(arr, arr + C);
    func(0, 0);

    return 0;
}