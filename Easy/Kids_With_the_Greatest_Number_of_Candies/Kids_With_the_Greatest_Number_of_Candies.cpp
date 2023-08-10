class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> res;
        int maxVal = INT_MIN;
        for (const auto &i : candies)
        {
            if (i > maxVal)
            {
                maxVal = i;
            }
        }
        for (auto i : candies)
        {
            if (i + extraCandies >= maxVal)
            {
                res.push_back(true);
            }
            else
            {
                res.push_back(false);
            }
        }
        return res;
    }
};