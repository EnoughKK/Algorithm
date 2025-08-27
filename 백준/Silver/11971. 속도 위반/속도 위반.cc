#include <bits/stdc++.h>

using namespace std;

int n, m, rec, dis, vel, ret, a[100];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        cin >> dis >> vel;

        for(int j = rec; j < rec + dis; j++)
        {
            a[j] = vel;
        }

        rec += dis;
    }
    
    rec = 0;
    for(int i = 0; i < m; i++)
    {
        cin >> dis >> vel;
        for(int j = rec; j < rec + dis; j++)
        {
            if(vel - a[j] > 0)
            {
                ret = max(ret, vel - a[j]);
            }
        }
        rec += dis;
    }

    cout << ret << '\n';

    return 0;
}