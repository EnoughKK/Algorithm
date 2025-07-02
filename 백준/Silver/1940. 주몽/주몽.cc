#include <bits/stdc++.h>

using namespace std;

int n, m, cnt, a[15001];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if(m > 200000) cout << 0 << "\n";
    else
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(a[i] + a[j] == m) cnt++;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}

/*
조합 문제

<포인트>
- for문을 사용하여 조합 구현
- 시간초과 고려해서 if문을 통해 예외처리
*/