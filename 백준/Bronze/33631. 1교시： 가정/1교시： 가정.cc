#include <bits/stdc++.h>

using namespace std;

int S[4], N[4], Q, n, input, cnt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    for(int i = 0; i < 4; ++i)
    {
        cin >> S[i];
    }
    
    for(int i = 0; i < 4; ++i)
    {
        cin >> N[i];
    }

    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        cin >> Q >> input;
        
        int ret(104);
        switch(Q)
        {
        case 1:
            for(int j = 0; j < 4; ++j)
            {
                ret = min(ret, (S[j] / N[j]));
            }
            if(ret >= input)
            {
                for(int j = 0; j < 4; ++j)
                {
                    S[j] -= (N[j] * input);
                }
                cnt += input;
            }
            else
            {
                ret = 0;
                break;
            }
            ret = cnt;
            break;
        case 2:
            S[0] += input;
            ret = S[0];
            break;
        case 3:
            S[1] += input;
            ret = S[1];
            break;
        case 4:
            S[2] += input;
            ret = S[2];
            break;
        case 5:
            S[3] += input;
            ret = S[3];
            break;            
        default:
            break;
        }
        if(ret > 0) cout << ret << '\n';
        else cout << "Hello, siumii" << '\n';
    }


    return 0;
}