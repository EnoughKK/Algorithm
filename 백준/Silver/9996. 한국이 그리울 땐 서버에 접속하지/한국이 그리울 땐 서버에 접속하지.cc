#include <bits/stdc++.h>

using namespace std;

int n, idx;
string con, front, back, s;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> n >> con;
    idx = con.find('*');
    front = con.substr(0, idx);
    back = con.substr(idx + 1);

    for(int i = 0; i < n; i++)
    {
        cin >> s;

        if(front.size() + back.size() > s.size()) { cout << "NE" << '\n'; continue; }
        if(front == s.substr(0, front.size()) && back == s.substr(s.size() - back.size())) { cout << "DA" << '\n'; }
        else { cout << "NE" << '\n'; }
    }

    return 0;
}