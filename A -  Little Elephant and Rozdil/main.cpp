#include <iostream>

using namespace std;

int main()
{
    long n , x , Min , minIndex , tmp;
    cin>>n;
    for(int i=1; i<=n; i++)
        {
            cin>>x;
            if(i == 1)
                {
                    Min = x;
                    minIndex = i;
                    tmp = 1;
                }

            else
                {
                if(Min > x)
                    {
                        Min = x;
                        minIndex = i;
                        tmp = 1;
                    }
                }
                if(Min == x && i != minIndex)
                    tmp++;
        }

    if(tmp == 1)
        cout<<minIndex;
    else
        cout<<"Still Rozdil";


    //cout<<"\n\n"<<tmp;
    return 0;
}
