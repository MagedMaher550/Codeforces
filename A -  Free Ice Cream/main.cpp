#include<iostream>
#include<stdio.h>
#include <sstream>

using namespace std;
//A. Free Ice Cream

int main()
{
    long n , x;
    cin>>n>>x;
    long long carr = x , dis = 0 , a = 0;
    string tmp;

    for(int i=0; i<=n; i++)
        {
            char ss[50];
            gets(ss);
            string s(ss);

            int x = s.find(' ');
            tmp = s.substr(x+1);

            stringstream aa(tmp);
            aa >> a;

            if(s[0] == '+')
                carr += a;

            else if(s[0] == '-')
                {
                    if(carr >= a)
                        carr -= a;
                    else
                        dis ++;
                }
        }

        cout<<carr<<" "<<dis;


    return 0;
}
