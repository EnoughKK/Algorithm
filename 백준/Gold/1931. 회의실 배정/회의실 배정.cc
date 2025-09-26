#include <bits/stdc++.h>

using namespace std;

int n, cnt;
vector<pair<int , int>> v;

void Go(int pos)
{
    int endTime = v[pos].second;
    cnt++;
    if(pos == (n - 1)) return;
    
    for(int i = pos + 1; i < n; i++)
    {
        if(v[i].first >= endTime)
        {
            Go(i);
            return;
        }
    }

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int tempS(0), tempE(0);
        cin >> tempS >> tempE;

        v.push_back(make_pair(tempS, tempE));
    }

    sort(v.begin(), v.end(), [](const pair<int , int> a, const pair<int , int> b){
        if(a.second > b.second)
            return false;
        else if(a.second == b.second)
        {
            return (a.first <= b.first);
        }

        return true;
    });


    Go(0);

    cout << cnt;

    return 0;
}