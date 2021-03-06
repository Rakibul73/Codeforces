/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 510
#define inf 1e6

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int, int>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    sf(n);

    string pat[] = {"RGB", "RBG", "BRG", "BGR", "GBR", "GRB"};

    string s;
    cin >> s;

    int mn = inf, cnt;
    for(i = 0; i < 6; i++)
    {
        cnt = 0; k = 0;
        for(j = 0; j < n; j++)
        {
            if(pat[i][k % 3] != s[j])
                cnt++;
            k++;
        }

        if(cnt <= mn)
            mn = cnt, m = i;
    }

    pf(mn); nl;
    for(i = 0; i < n; i++)
        cout<<pat[m][i % 3];

    return 0;
}
