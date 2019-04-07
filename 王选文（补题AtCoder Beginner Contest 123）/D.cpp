#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
#define min(x,y) (x<y?(x):(y))

bool cmp(long long x, long long y){
    return x>y;
}
int main()
{
    int ca, cb, cc, k;
    cin>>ca>>cb>>cc>>k;

    //vector<long long> a, b, c; ¥ÌΩ‚£¨ª·RE
    vector<long long> a(ca), b(cb), c(cc);
    for (int i=0; i<ca; i++) cin>>a[i];
    for (int i=0; i<cb; i++) cin>>b[i];
    for (int i=0; i<cc; i++) cin>>c[i];

    vector<long long> tmp;
    for (int i=0; i<ca; i++)
        for (int j=0; j<cb; j++)
            tmp.push_back(a[i]+b[j]);
    sort(tmp.begin(), tmp.end(), cmp);

    vector<long long> ans;
    for (int i=0; i<tmp.size()&&i<k; i++)
        for (int j = 0; j < cc; j++)
            ans.push_back(tmp[i] + c[j]);
    sort(ans.begin(), ans.end(), cmp);

    for (int i = 0; i < k; i++)
        cout << ans[i] << endl;
    return 0;
}

