#include<bits/stdc++.h>
#define pii pair<int,int>
#define mkp make_pair
#define fs first
#define sc second
#define pb push_back
#define ppb pop_back()
#define pf printf
#define pf1(a) printf("%d\n",a)
#define hi printf("hi!\n");
#define sf scanf
#define sf1(a) scanf("%d",&a)
#define sf2(a,b) scanf("%d %d",&a,&b)
#define sf3(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define pcase(x) printf("Case %d: ",x)
#define MX 1000000007
#define inf 1000000007
#define pi acos(-1.0)
#define mem(arr,x) memset((arr), (x), sizeof((arr)));
#define FOR(i,x) for(int i=0;i<(x); i++)

using namespace std;
typedef long long int lint;
typedef double dbl;


int main()
{
    int t, tst = 1;
    sf1(t);
    while(t--)
    {
        int n;
        sf1(n);
        int ara[n];
        FOR(i, n) sf1(ara[i]);
        sort(ara, ara+n);
        lint ans = 0;
        for(int i = 0; i<n ; i++)
            for(int j = i+1; j<n ; j++)
            {
               int *x = lower_bound(ara+j, ara+n, ara[i]+ara[j]);
               x--;
               ans+=x-ara-j;
            }
        pcase(tst++);
        pf("%lld\n", ans);
    }
    return 0;
}














