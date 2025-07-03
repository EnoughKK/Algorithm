#include <bits/stdc++.h>

using namespace std;

int n, ret;
string s;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> s;

        stack<int> st;
        for(char a : s)
        {
            if(st.empty() || st.top() != a) st.push(a);
            else st.pop();
        }

        if(st.size() == 0) ret++;
    }
    
    cout << ret << "\n";

    return 0;
}

/*
스택 문제

<포인트>
- 짝맞추기 문제에선 스택활용
*/