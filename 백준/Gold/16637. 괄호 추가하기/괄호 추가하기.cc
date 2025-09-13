#include <bits/stdc++.h>

using namespace std;

int n, ret = -987654321;
string s;
vector<int> nums;
vector<char> opers;

int Calc(char oper, int a, int b)
{
    if(oper == '+') return a + b;
    if(oper == '-') return a - b;
    if(oper == '*') return a * b;

    return 0;
}

void Go(int idx, int total)
{
    if(idx == nums.size() - 1)
    {
        ret = max(ret, total);
        return;
    }

    Go(idx + 1, Calc(opers[idx], total, nums[idx + 1]));

    if(idx + 2 <= nums.size() - 1)
    {
        int temp = Calc(opers[idx + 1], nums[idx + 1], nums[idx + 2]);
        Go(idx + 2, Calc(opers[idx], total, temp));
    }

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> s;

    for(int i = 0; i < n; ++i)
    {
        if((i % 2) == 0) nums.push_back(s[i] - '0');
        else opers.push_back(s[i]);
    }

    Go(0, nums[0]);

    cout << ret;
    
    return 0;
}