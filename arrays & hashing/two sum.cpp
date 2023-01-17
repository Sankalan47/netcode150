class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> s;
        vector<int> ans;
        if (nums.size() == 0)
            return ans;
        if (nums.size() == 0)
            return ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (s.find(target - nums[i]) == s.end())
            {
                s[nums[i]] = i;
            }
            else
            {
                ans.push_back(s[target - nums[i]]);
                ans.push_back(i);
            }
        }

        return ans;
    }
};