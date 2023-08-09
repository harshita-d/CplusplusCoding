class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string s;
        int n = word1.size();
        int m = word2.size();
        int minLen = min(n, m);
        for (int i = 0; i < minLen; i++)
        {
            s = s + word1[i] + word2[i];
        }
        if (n == minLen)
        {
            for (int i = minLen; i < m; i++)
            {
                s = s + word2[i];
            }
        }
        if (m == minLen)
        {
            for (int i = minLen; i < n; i++)
            {
                s = s + word1[i];
            }
        }
        return s;
    }
};