//direct approach time complexity : O(logn) + O(n) = O(logn)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m1;
        int n=nums.size();
        int ans=0,d=n/2;
        for(auto i : nums ){
            m1[i]++;
        }
      for(auto it : m1){
            if(it.second > d)
                ans =  it.first;
           }
        return ans;
        
    }
};
// Optimal approach
class Solution {
public:
    int majorityElement(vector<int>& nums) {
           int count = 0;
        int candidate = 0;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            if(num==candidate) count += 1; 
            else count -= 1; 
        }

        return candidate;         
        
    }
};
// we can also sort the array first and then calculate the no of occurences
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
        
    }
 
};
