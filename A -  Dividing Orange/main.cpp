#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
	int n , k , num[35] , flag[1005] , l = 0;
	cin>>n>>k;

		memset(num,0,sizeof(num));
		memset(flag,0,sizeof(flag));

		for(int i=0;i<k;i++)
		{
			cin>>num[i];
	 		flag[num[i]-1] = 1;
		}

		for(int i=0; i<k; i++)
		{
			cout<<num[i]<<" ";

			for(int j=0; j<n-1;)
			{
				if(!flag[l])
				{
					cout<<1+l<<" ";
					j++;
					flag[l] = 1;
				}
				l++;
			}
			cout<<endl;
		}
	return 0;
}
