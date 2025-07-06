#include <bits/stdc++.h>
using namespace std;

int d1, d2;
float ret;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> d1 >> d2;

    ret = (d1 * 2) + (2 * d2 * 3.141592);

    printf("%.6f\n", ret);

    return 0;
}