#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    vector<string> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    sort(v.begin(), v.end(),[](const string& a, const string& b)
    {
        if(a.size() == b.size()) return a < b;
        return a.size() < b.size();
    });
    
    for(string s : v) cout << s << '\n';

    return 0;
}