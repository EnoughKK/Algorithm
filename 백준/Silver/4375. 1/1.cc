#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n;

int main()
{
    ios_base::sync_with_stdio(false);

    while(scanf("%d", &n) != EOF)
    {
        ll temp = 1;
        int cnt = 1;
        while(1)
        {
            if(temp % n == 0)
            {
                cout << cnt << "\n";
                break;
            }
            else
            {
                temp = ((temp * 10) + 1) % n;
                cnt++;
            }
        }
    }

    return 0;
}

/*
오버플로우, 모듈러 연산 문제

<포인트>
- 모듈러 연산 법칙을 통한 오버플로우 방지
*/