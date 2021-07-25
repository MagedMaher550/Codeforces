#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void removeDuplicates(vector<int>& vec)
{

    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
}

int main(){

    int nums[5] , sum = 0;
    for(int i=0; i<5; i++)
        cin>>nums[i];

    sort(nums , nums+5);
    vector<int> rep;

    for(int i=0; i<5; i++)
        {
            sum += nums[i];
            for(int j=i+1; j<5; j++)
                {
                    if(nums[i] == nums[j] && i != j)
                        rep.push_back(i);
                }
        }

    removeDuplicates(rep);

    if(rep.empty())
        cout<<sum;

    if(rep.size() == 1)
        cout<<sum - nums[rep.at(0)] - nums[rep.at(0) + 1];

    else if(rep.size() == 2)
        {
            if(nums[0] == nums[1] && nums[1] == nums[2] && nums[3] != nums[4])
                cout<<nums[3] + nums[4];

            else if(nums[0] != nums[1] && nums[2] == nums[3] && nums[3] == nums[4])
                cout<<nums[0] + nums[1];

            else if(nums[1] == nums[2] && nums[2] == nums[3] && nums[0] != nums[4])
                cout<<nums[0] + nums[4];

            else
                cout<<min(sum - nums[rep.at(0)] - nums[rep.at(0) + 1] , sum - nums[rep.at(1)] - nums[rep.at(1) + 1]);
        }

    else if(rep.size() >= 3)
        {
            if(nums[0] == nums[1] && nums[1] == nums[2] && nums[3] == nums[4])
                cout<<min(sum - nums[rep.at(0)] - nums[rep.at(0) + 1] - nums[rep.at(0) + 2] , sum - nums[rep.at(0) + 3] - nums[rep.at(0) + 4]);

            else if(nums[0] == nums[1] && nums[3] == nums[2] && nums[3] == nums[4])
                cout<<min(sum - nums[rep.at(0)] - nums[rep.at(0) + 1] , sum - nums[rep.at(0) + 2] - nums[rep.at(0) + 3] - nums[rep.at(0) + 4]);

            else if(nums[0] == nums[1] && nums[1] == nums[2] && nums[2] == nums[3] && nums[3] != nums[4])
                cout<<nums[3] + nums[4];
            else
                cout<<nums[0] + nums[1];
        }

        /*cout<<"\n\n";
        for(int i=0; i<rep.size(); i++)
            cout<<rep.at(i)<<" ";*/
    return 0;
}
