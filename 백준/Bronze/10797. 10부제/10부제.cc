#include <bits/stdc++.h>
using namespace std;

int n, ret;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < 5; i++)
    {
        int temp;
        cin >> temp;
        if(temp == n) ret++;
    }

    cout << ret;

    return 0;
}