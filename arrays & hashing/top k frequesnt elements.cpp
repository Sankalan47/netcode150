// https://leetcode.com/problems/top-k-frequent-elements/description/
class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> ans;

        unordered_map<int, int> filter;

        // entering array values by freq.
        for (int i = 0; i < n; i++)
        {
            filter[nums[i]]++;
        }

        // take vector of vector to enter keys on the indexes as values
        vector<vector<int>> container(n + 1); // specifing size n+1 means no elemnts will be for freq that the total array size

        for (auto it : filter)
        {
            container[it.second].push_back(it.first);
        }

        // this above line gives us an array of arrays where the indexes are freq of each value
        // ex array [1,1,1,2,2,3,100]
        //  0     1     2   3   4   5   6
        //     [3,100] [2] [1]

        for (int i = n; i >= 0; i--)
        {
            if (ans.size() >= k)
                break;
            if (!container[i].empty())
            {
                ans.insert(ans.end(), container[i].begin(), container[i].end());
            }
        }

        return ans;
    }
}
// tc: O(n)
// sc: O(n)