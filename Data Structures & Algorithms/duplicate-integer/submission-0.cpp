class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        bool has=false;

        for(int i=0;i+1<nums.size();i++)
        {
            if(nums[i]==nums[i+1])
            {
                has=true;
            }
        }

        return has;
    }
};