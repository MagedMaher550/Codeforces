#include<iostream>
using namespace std;

int main()
{
	int n;
	string s;
	cin>>n>>s;


	for(int i=0; i<n; i++)
        {
            if(s[i] == 'o' && s[i+1] == 'g' && s[i+2] == 'o')
             {
                i = i+3;
                while(s[i] == 'g' && s[i+1] == 'o')
                        i = i+2;

                cout<<"***";
                i--;
            }
            else
                cout<<s[i];
        }
	return 0;
}
