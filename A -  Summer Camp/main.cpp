#include <iostream>

using namespace std;

//A. Summer Camp

void gDig(long k , long count)
{
    long res = 0;
    while(count != 0)
    {
        count--;
        res = k % 10;
        k /= 10;
    }
    cout<<res;
}

void solve(long k , long tmp ,long bound)
{
    if(k%bound < bound)
        gDig(tmp , bound - k%bound);
}

int main()
{
        long k ;
        cin>>k;
        long tmp = 0;

        if(k < 10)
            cout<<k;

        else
        {
            //from 10 to 100
             if(k >=10 && k < 190)
             {
                k -= 9;
                tmp += k/2 + 9;

                if(k%2 == 0)
                    gDig(tmp , 1);

                else
                {
                    tmp++;
                    gDig(tmp , 2);
                }
             }
             //from 100 to 1000
             else if(k >= 190 && k < 2890)
             {
                 k -= 190;
                 tmp += k/3 + 100;
                 solve(k , tmp , 3);

             }
             //from 1000 to 10000
             else if(k >= 2890 && k < 38890)
             {
                 k -= 2890;
                 tmp += k/4 + 1000;
                 solve(k , tmp , 4);
             }

        }

    return 0;
}

