class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int n=nums.size();
        int d=n/3;
        vector<int>ans;
        map<int,int>m1;
        for(auto it : nums)
            m1[it]++;
        for(auto i : m1){
            if(i.second > d)
                ans.push_back(i.first);
        }
        
        return ans;
    }
};
// one more optimal approach can be using boyre moore's algorithm.
