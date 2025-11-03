#include <bits/stdc++.h>

using namespace std;

int qy, qx, sy, sx, n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int cy(0);
    char cx(0);
    string s = "";

    cin >> cx >> cy;
    qx = cx - 64;
    qy = cy;

    cin >> cx >> cy;
    sx = cx - 64;
    sy = cy;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> s;
        int nqx = qx;
        int nqy = qy;

        for(char c : s)
        {
            switch(c)
            {
                case 'R':
                    nqx += 1;
                    break;
                case 'L':
                    nqx -= 1;
                    break;
                case 'T':
                    nqy += 1;
                    break;
                case 'B':
                    nqy -= 1;
                    break;
            }
        }
    
        if(nqy < 1 || nqx < 1 || nqy > 8 || nqx > 8) continue;
        
        int nsx = sx;
        int nsy = sy;
        
        if(nqy == sy && nqx == sx)
        {
                for(char c : s)
            {
                switch(c)
                {
                    case 'R':
                        nsx += 1;
                        break;
                    case 'L':
                        nsx -= 1;
                        break;
                    case 'T':
                        nsy += 1;
                        break;
                    case 'B':
                        nsy -= 1;
                        break;
                }
            }
        }
        
        if(nsy < 1 || nsx < 1 || nsy > 8 || nsx > 8) continue;

        qy = nqy;
        qx = nqx;
        sy = nsy;
        sx = nsx;
    }
    
    cout << (char)(qx+64) << qy << "\n" << (char)(sx+64) << sy;

    return 0;
}