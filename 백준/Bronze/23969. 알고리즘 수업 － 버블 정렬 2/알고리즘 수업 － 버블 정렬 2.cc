#include <bits/stdc++.h>

using namespace std;

int n, k, Prev, cnt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> k;

    int a[n] = { 0 };
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
   
    while(1)
    {
        Prev = a[0];
        int flag = 0;
        for(int i = 1; i < n; i++)
        {
            if(a[i] < Prev)
            {
                int temp = Prev;
                a[i - 1] = a[i];
                a[i] = Prev;
                cnt++;
                flag++;
            }
            if(cnt == k) break;
            Prev = a[i];
        }
        if(flag == 0) break;
        if(cnt == k) break;
    }
    
    if(cnt < k) cout << -1;
    else
    {
        for(int ret : a)
        {
            cout << ret << " ";
        }
    }
    

    return 0;
}