#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    switch (n)
    {
    case 1:
        cout << 12 << " " << 1600 << '\n';
        break;
    case 2:
        cout << 11 << " " << 894 << '\n';
        break;
    case 3:
        cout << 11 << " " << 1327 << '\n';
        break;
    case 4:
        cout << 10 << " " << 1311 << '\n';
        break;
    case 5:
        cout << 9 << " " << 1004 << '\n';
        break;
    case 6:
        cout << 9 << " " << 1178 << '\n';
        break;
    case 7:
        cout << 9 << " " << 1357 << '\n';
        break;
    case 8:
        cout << 8 << " " << 837 << '\n';
        break;
    case 9:
        cout << 7 << " " << 1055 << '\n';
        break;
    case 10:
        cout << 6 << " " << 556 << '\n';
        break;
    case 11:
        cout << 6 << " " << 773 << '\n';
        break;
    default:
        break;
    }

    return 0;
}