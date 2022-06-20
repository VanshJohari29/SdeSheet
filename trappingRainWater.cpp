//two pointer approach
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
  int left = 0, right = n - 1;
  int res = 0;
  int maxLeft = 0, maxRight = 0;
  while (left <= right) {
    if (height[left] <= height[right]) {
      if (height[left] >= maxLeft) {
        maxLeft = height[left];
      } else {
        res += maxLeft - height[left];
      }
      left++;
    } else {
      if (height[right] >= maxRight) {
        maxRight = height[right];
      } else {
        res += maxRight - height[right];
      }
      right--;
    }
  }
  return res;
        
    }
};

// optimised approach
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n==0){
            return 0;
        }
        int ans=0;
      int leftmax[n];
         leftmax[0]=height[0];
        int rightmax[n];
        rightmax[n-1]=height[n-1];
        
        for(int i=1;i<n;i++){
            leftmax[i] = max(leftmax[i-1],height[i]); 
        }
        for(int i=n-2;i>=0;i--){
            rightmax[i] = max(rightmax[i+1],height[i]);
        }
        for(int i=0;i<n;i++){
            if(min(leftmax[i],rightmax[i])-height[i]>0){
                ans+=min(leftmax[i],rightmax[i])-height[i];
            }
            
        }
        return ans;
        
    }
};
