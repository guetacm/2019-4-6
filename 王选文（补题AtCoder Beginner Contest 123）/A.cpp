#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
	int a[5],k;
	for(int i=0; i<5; i++)
		cin>>a[i];
	cin>>k;
	int flag=1;
	for(int i=0; i<5; i++)
		for(int j=0; j<5; j++)
			if(abs(a[i]-a[j])>k)
			{
				flag=0;
				break;
			}
	if(flag)
		printf("Yay!\n");
	else
		printf(":(\n");
	return 0;
}