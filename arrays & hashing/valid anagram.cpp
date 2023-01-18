// https://leetcode.com/problems/valid-anagram/
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
            return false;

        unordered_map<char, int> mp;

        for (auto it : s)
        {
            mp[it]++;
        }

        for (int i = 0; i < t.length(); i++)
        {
            if (mp.find(t[i]) == mp.end())
            {
                return false;
            }
            else
            {
                mp[t[i]] -= 11;
            }
        }

        for (auto it : mp)
        {
            if (mp[it] != 0)
            {
                return false;
            }
            else
            {
                return true;
            }
        }

        return false;
    }
};

// tc: O(n);
// sc: O(n);