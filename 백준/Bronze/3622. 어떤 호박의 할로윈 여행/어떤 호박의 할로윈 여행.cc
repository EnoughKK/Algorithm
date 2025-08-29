#include <bits/stdc++.h>

using namespace std;

int A, a, B, b, P;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> A >> a >> B >> b >> P;

    if(P >= A && P >= B)
    {
        if(P >= A + B) cout << "Yes";
        else if(A > B && a >= B) cout << "Yes";
        else if(B > A && b >= A) cout << "Yes";
        else cout << "No";
    }
    else cout << "No";

    return 0;
}