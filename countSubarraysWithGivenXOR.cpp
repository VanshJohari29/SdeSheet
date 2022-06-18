#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    int n=arr.size();

map<int,int> mp;

   int count=0;

   int Xor=0;

 for(int i=0;i<n;i++)  

 {Xor^=arr[i];

     if(Xor==x){

         count++;

     }

  if(mp.find(Xor^x)!=mp.end()){

      count+=mp[Xor^x];

  }

 mp[Xor]+=1;

 }

return count;
}
