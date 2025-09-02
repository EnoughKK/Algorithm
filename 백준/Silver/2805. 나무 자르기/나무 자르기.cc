#include <bits/stdc++.h>

using namespace std;

int n;
long long m, ret;
vector<long long> v;

bool CanCut(long long mid)
{
    long long total = 0;
    for(auto h : v)
    {
        if(h > mid) total += h - mid;
        if(total >= m) return true; 
    }
    return total >= m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        int temp(0);
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    int low = 0;
    int high = v.back();

    while(low <= high)
    {
        long long mid = (low + high) / 2;
        if(CanCut(mid))
        {
            ret = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }

    cout << ret << '\n';

    return 0;
}