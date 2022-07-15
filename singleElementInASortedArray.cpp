// tc : O(n)  sc: O(n)
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i: nums){
            mp[i]++;
        }
        int ans;
        for(auto i:mp){
            if(i.second==1)
                ans =  i.first;
        }
        return ans;
    }
};
// tc: O(logn) sc : O(1)
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = size(nums), L = 0, R = n-1, mid, ans;
        while(L <= R) {
            mid = (L + R) >> 1;
            if(mid & 1) mid--;                              
            if(mid+1 < n && nums[mid] == nums[mid+1])       
                L = mid+2;                                  
            else                                            
                R = mid-1, ans = nums[mid];                 
        }
        return ans;
    }
};
