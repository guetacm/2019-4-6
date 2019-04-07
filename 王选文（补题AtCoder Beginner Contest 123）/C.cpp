#include <iostream>
#include <cstdio>
using namespace std;
#define min(x,y) (x<y? (x):(y))

int main ()
{
	long long a, n, cnt=5;
	long long  minn=0x3f3f3f3f3f3f3f3f;
	cin>>n;
	while(cnt--)
	{
		cin>>a;
		minn=min(minn, a);
	}
	if(n%minn)
		cout<<n/minn+1+4;
	else
		cout<<n/minn+4;
	return 0;
}
