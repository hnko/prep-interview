class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> cache(nums.size()+1, 0);
        vector<int> output;
        
        for(auto a : nums) cache[a]++;
        for(int i=1; i<=nums.size(); i++)
            if(cache[i] == 0) output.push_back(i);
        
        return output;
    }
};
