#include <bits/stdc++.h>
using namespace std;

int w, h;
float ret;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> w >> h;

    ret = (float)w * h / 2;

    printf("%.1f", ret);

    return 0;
}