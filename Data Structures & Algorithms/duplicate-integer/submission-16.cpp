class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool res = false;
        unordered_map<int, int>umap;
        for (const int& num : nums) {
            if (!umap[num]) 
                umap[num] = 1;
            else {
                umap[num]++;
                res = true;
                break;
            }
        }
        return res;
    }
};
