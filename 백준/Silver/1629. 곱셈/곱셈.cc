#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll a, b, c;

ll go(ll a, ll b)
{
    if(b == 1) return a % c;

    ll ret = go(a, b / 2);
    ret = (ret * ret) % c;
    if(b % 2) ret = (ret * a) % c;
    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b >> c;

    cout << go(a, b) << "\n";

    return 0;
}

/*
오버플로우 방지, 계산 최적화

<포인트>
- 시간 복잡도, 오버플로우 체크
- 재귀함수를 사용아여 계산 과정 줄이기
*/