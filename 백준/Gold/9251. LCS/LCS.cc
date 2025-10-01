#include <bits/stdc++.h>

using namespace std;

string s1,s2;
int LCS[10004][1004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> s1 >> s2;

    for(int i = 0; i <= s1.size(); i++)
    {
        for(int j = 0; j <= s2.size(); j++)
        {
            if(i == 0 || j == 0) LCS[i][j] = 0;
            else if(s1[i-1] == s2[j-1])
            {
                LCS[i][j] = LCS[i-1][j-1] + 1;
            }
            else
            {
                LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1]);
            }
        }
    }

    cout << LCS[s1.size()][s2.size()];

    return 0;
}