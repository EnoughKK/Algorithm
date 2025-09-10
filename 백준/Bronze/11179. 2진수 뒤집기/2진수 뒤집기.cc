// 문자열
#include <bits/stdc++.h>

using namespace std;

long long n, ret;
vector<int> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    if(n == 1)
    {
        cout << n;
        return 0;
    }

    while(n >= 1)
    {
        v.push_back(n % 2);
        n = (n / 2);
    }

    ret += v[v.size() - 1];
    long long rec = 1;
    for(long long i = (v.size() - 2); i >= 0; --i)
    {
        rec *= 2;
        ret += v[i] * rec;
    }

    cout << ret;

    return 0;
}