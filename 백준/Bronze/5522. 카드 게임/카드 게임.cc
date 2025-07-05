#include <bits/stdc++.h>

using namespace std;
int a, ret;

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    
    for(int i = 0; i < 5; i++)
    {
        cin >> a;
        ret += a;
    }
    cout << ret << "\n";

    return 0;
}