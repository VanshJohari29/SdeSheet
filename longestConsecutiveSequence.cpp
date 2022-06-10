//First doing sorting 
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0 ){
            return 0;
        }
        
        sort(nums.begin(),nums.end());
        
        int ans = 1;
        int prev = nums[0];
        int cur = 1;
        
        for(int i = 1;i < nums.size();i++){
            if(nums[i] == prev+1){
                cur++;
            }
            else if(nums[i] != prev){
                cur = 1;
            }
            prev = nums[i];
            ans = max(ans, cur);
        }
        return ans;
    }
};
//Using hashing
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int>s;
        int cnt=1,ans=0;
        for(int x:nums)s.insert(x);
        for(auto i:s){
            if(s.find(i-1)==s.end()){
                int cnt=1;
                while(s.find(i+1)!=s.end()){
                    s.erase(i+1);
                    i++;
                    cnt++;
                }
                ans=max(ans,cnt);
            }
        }
        return ans;
    }
};
