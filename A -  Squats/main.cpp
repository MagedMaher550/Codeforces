#include <iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int n , sitting = 0 , standing = 0 , i , res , tmp;
    string state;
    cin>>n>>state;

    for(i=0; i<state.length(); i++)
        {
            if(state[i] == 'X')
                standing++;
            else
                sitting++;
        }

    if(standing == sitting)
        cout<<0<<endl<<state;

    else
        {
            res = max(standing,sitting) - n/2;
            tmp = res;
            i = 0;
                for(int i=0; i<n; i++)
                        {
                            if(tmp > 0)
                                {
                                    if(standing > sitting)
                                        {
                                            if(state[i] == 'X')
                                                {
                                                    state[i] = 'x';
                                                    tmp--;
                                                }
                                        }

                                     else if(state[i] == 'x')
                                        {
                                            state[i] = 'X';
                                            tmp--;
                                        }
                                    if(tmp == 0)
                                        break;
                                }
                        }
            cout<<res<<endl<<state;
        }


    return 0;
}
