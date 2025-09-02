#include <bits/stdc++.h>

using namespace std;

int m, ret;
vector<int> divisors(0);

enum
{
    deficient = 1,
    perfect = 2,
    abundent = 3,
};

int Go(int n)
{
    int sum = 1;

    if(n <= 1) divisors.push_back(1);

    for(int i = 2; i * i < n; i++)
    {
        if((n % i) == 0) 
        {
            divisors.push_back(i);
            if(i != (n / i)) divisors.push_back(n / i);
        }
    }

    for(int i : divisors)
    {
        sum += i;
    }

    if(sum < n) return 1;
    else if(sum == n) return 2;
    else if(sum > n) return 3;
    else return 4;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> m;

    for(int i = 0; i < m; i++)
    {
        divisors.clear();
        int n(0);
        cin >> n;

        switch(Go(n))
        {
            case deficient:
                cout << n << " is a deficient number." << '\n' << '\n';
                break;
            case perfect:
                cout << n << " is a perfect number." << '\n' << '\n';
                break;
            case abundent:
                cout << n << " is an abundant number." << '\n' << '\n';
                break;
            default:
                cout << n;
                break;
        }
    }


    return 0;
}