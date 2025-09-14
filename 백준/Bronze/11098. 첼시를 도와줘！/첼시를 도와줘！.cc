#include <bits/stdc++.h>

using namespace std;

int n, p, a;
string s;
vector<pair<int , string>> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> p;
        for(int j = 0; j < p; j++)
        {
            cin >> a >> s;
            v.push_back(make_pair(a, s));
        }
        sort(v.begin(), v.end(), [](const auto& a, const auto& b){
            if(a.first > b.first) return true;
            else return false;
        });
        cout << v[0].second << endl;
        v.clear();
    }
    
    return 0;
}