#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

	vector<pair<int ,int> > game;
	int s , n , x , y;
	cin>>s>>n;

	 bool check = true;

 	 for(int i=0; i<n; i++)
        {
             cin>>x>>y;
             game.push_back(make_pair(x,y));
        }

	 sort(game.begin(),game.end());

	 for(int i=0; i<n; i++)
        {
             if(s > game[i].first)
                 s += game[i].second;

            else
                {
                 check = false;
                 break;
                }
        }

    if(check)
        cout<<"YES";
    else
        cout<<"NO";

 	return 0;
}
