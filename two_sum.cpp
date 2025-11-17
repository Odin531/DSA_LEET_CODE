#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size()-1;
        vector<int> ans ;
        for (int st =0;st < nums.size();st++)
        {
            if ((nums[i]+nums[j])> target)
            {
                j=j-1;

            }
            if ((nums[i]+nums[j])< target)
            {
                i=i+1;

            }
            if ((nums[i]+nums[j])== target)
            {
                return {i,j};
            }

        }
        return{0};
    }

};
