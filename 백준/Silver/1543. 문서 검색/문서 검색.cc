#include <bits/stdc++.h>

using namespace std;

int GetString(char* arr);
bool Check(char* a, char* repeat, int rSize, int rec);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int cnt(0), aSize(0), rSize(0);
    char a[2504] = {}, repeat[2504] = {};

    aSize = GetString(a);
    rSize = GetString(repeat);

    for(int i = 0; i < aSize; ++i)
    {
        if(a[i] == repeat[0])
        {
            if((i + rSize) <= aSize && Check(a, repeat, rSize, i))
            {
                ++cnt;
                i += rSize - 1;
            }
        }
    }

    cout << cnt;

    return 0;
}

int GetString(char* arr)
{
    string s = "";
    getline(cin, s);

    for(int i = 0; i < s.size(); ++i)
    {
        arr[i] = s[i];
    }

    return s.size();
}

bool Check(char* a, char* repeat, int rSize, int rec)
{
    bool flag = true;
    for(int i = 0; i < rSize; ++i)
    {
        if(a[rec + i] != repeat[i])
        {
            flag = false;
            break;
        }
    }

    return flag;
}