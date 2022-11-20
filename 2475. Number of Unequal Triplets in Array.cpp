class Solution
{
public:
    int unequalTriplets(vector<int> &v)
    {
        int res = 0;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = i + 1; j < v.size(); j++)
            {
                for (int k = j + 1; k < v.size(); k++)
                {
                    if (v[i] != v[j] && v[j] != v[k] && v[k] != v[i])
                        res++;
                }
            }
        }
        return res;
    }
};