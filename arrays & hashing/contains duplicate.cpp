// https://leetcode.com/problems/contains-duplicate/

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> mp;

        for (auto it : nums)
        {
            if (mp.find(nums[it]) == mp.end())
            {
                mp.insert(it);
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};