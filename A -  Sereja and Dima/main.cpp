#include <iostream>
#include <vector>

using namespace std;

int main()
{
        int n , a;
        cin>>n;

        vector<int> cards;

        for(int i=0; i<n; i++)
            {
                cin>>a;
                cards.push_back(a);
            }

         int countS =0 , countD = 0;


        while(!cards.empty())
        {
            if(cards.at(0) > cards.at(cards.size()-1))
            {
                countS += cards.at(0);
                cards.erase(cards.begin());
            }

            else
            {
                countS += cards.at(cards.size()-1);
                cards.erase(cards.begin() + cards.size()-1);
            }

            if(!cards.empty())
            {
                if(cards.at(0) > cards.at(cards.size()-1))
                {
                    countD += cards.at(0);
                    cards.erase(cards.begin());

                }

                else
                {
                    countD += cards.at(cards.size()-1);
                    cards.erase(cards.begin() + cards.size()-1);
                }
            }

        }

        cout<<countS<<" "<<countD;
    return 0;
}
