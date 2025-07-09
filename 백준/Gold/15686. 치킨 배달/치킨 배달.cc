#include <bits/stdc++.h>

using namespace std;

int n, m, a[54][54], result = 987654321;
vector<vector<int>> chickenList;
vector<pair<int, int>> _home, chicken;

// 치킨집을 선택하는 경우의 수를 chickenList에 넣기
void combi(int start, vector<int> v)
{
    if(v.size() == m)
    {
        chickenList.push_back(v);
        return;
    }
    for(int i = start + 1; i < chicken.size(); i++)
    {
        v.push_back(i);
        combi(i, v);
        v.pop_back();
    }

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;

    // 집 좌표, 치킨집 좌표 입력
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if(a[i][j] == 1) _home.push_back({i, j});
            else if(a[i][j] == 2) chicken.push_back({i, j});
        }
    }

    // 치킨집을 선택하는 경우의 수를 chickenList에 입력
    vector<int> v;
    combi(-1, v);

    // 각각의 경우의 수를 탐색하며 최소값 갱신
    for(vector<int> cList : chickenList)
    {
        int ret = 0;
        for(pair<int, int> home : _home)
        {
            int _min = 987654321;
            for(int ch : cList)
            {
                int _dist = abs(home.first - chicken[ch].first) + abs(home.second - chicken[ch].second);
                _min = min(_min, _dist);
            }
            ret += _min;
        }
        result = min(result, ret);
    }

    cout << result << "\n";

    return 0;
}

/*
조합, 완전 탐색

<포인트>
- 문제 시간복잡도를 구해보고 완전 탐색을 해도 되는지 판별
- 조합식 combi함수 구현
- 적절한 자료형 사용
- 완전 탐색을 하면 최소값 갱신
*/