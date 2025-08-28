#include <bits/stdc++.h>

using namespace std;

int n, k, cnt;
vector<int> ret;

int main()
{
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        v[i] = i + 1;
    }

    while(!v.empty())
    {
        for(auto it = v.begin(); it != v.end(); it++)
        {
            cnt++;
            if(cnt % k == 0)
            {
                ret.push_back(*it);
                it = v.erase(it);
                it--;
            } 
        }
    }

    cout << '<';
    for(int i = 0; i < ret.size(); i++)
    {
        if(i == (ret.size() - 1))
        {
            cout << ret[i];
            break;
        }
        cout << ret[i] << ", ";
    }
    cout << '>';

    return 0;
}