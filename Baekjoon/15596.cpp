#include <vector>
long long sum(std::vector<int> &a)
{
    long long ret = 0;
    for (auto it = a.begin(); it != a.end(); ++it)
        ret += *it;
    return ret;
}