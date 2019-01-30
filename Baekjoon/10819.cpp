#include <iostream>
#include <algorithm>
#include <list>
#include <cmath>

using namespace std;

int func(bool back, list<int> arr, list<int> ls)
{
    if (back)
    {
        ls.push_front(arr.front());
        arr.pop_front();
    }
    else
    {
        ls.push_front(arr.back());
        arr.pop_back();
    }

    while (!arr.empty())
    {
        if (back)
        {
            ls.push_front(arr.back());
            arr.pop_back();
            if (!arr.empty())
            {
                ls.push_back(arr.back());
                arr.pop_back();
            }
        }
        else
        {
            ls.push_front(arr.front());
            arr.pop_front();
            if (!arr.empty())
            {
                ls.push_back(arr.front());
                arr.pop_front();
            }
        }
        back = !back;
    }

    int sum = 0;
    auto it1 = ls.begin();
    auto it2 = ls.begin();
    advance(it2, 1);
    for (; it2 != ls.end(); ++it1, ++it2)
    {
        sum += abs(*it1 - *it2);
    }

    return sum;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, tmp;
    cin >> N;

    list<int> arr, ls;

    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        arr.push_back(tmp);
    }
    arr.sort();

    int ans = max(func(true, arr, ls), func(false, arr, ls));

    cout << ans << '\n';

    return 0;
}