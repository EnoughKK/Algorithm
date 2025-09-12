#include <bits/stdc++.h>

using namespace std;

int n;
priority_queue<int, vector<int>, greater<int>> pq;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        int temp = 0;
        cin >> temp;
        if(temp > 0) pq.push(temp);
        else
        {
            if(pq.empty()) cout << 0 << '\n';
            else
            {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
    }
    
    return 0;
}