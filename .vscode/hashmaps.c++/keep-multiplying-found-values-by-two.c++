#include<bits/stdc++.h>
using namespace std;

/*
 class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n = nums.size();
        int max =0 ;
        for(int i = 0; i<n ; i++)
        {
            if(nums[i]>max)
            {
                max = nums[i];
            }

        }
        while(original<=max)
        {
             for(int i = 0; i<n ; i++)
        {
            if(nums[i] == original)
            {
                original = original*2;
            }

        }
          
        }
        return original;
    }
};*/

int main()
{
    vector<int>nums;
    nums.push_back(5);
     nums.push_back(3);
      nums.push_back(6);
       nums.push_back(1);
        nums.push_back(12);
        
       // int ans = findFinalValue(nums,3);
        
        int n = nums.size();
        int max =0 ;
       int original = 3;
        for(int i = 0; i<n ; i++)
        {
            if(nums[i]>max)
            {
                max = nums[i];
            }

        }
        while(original<=max)
        {
             for(int i = 0; i<n ; i++)
        {
            if(nums[i] == original)
            {
                original = original*2;
            }

        }
          
        }
         cout<<original;
        
}

class Solution {
public:
    bool found(vector<int>& nums, int original)
    {
        int m;
        int n = nums.size();
        for(int i =0 ; i<n ;i++)
        {
               if(nums[i] == original)
        {
            m = 1;
            break;
        }
        else
        {
            m = 0;
        }
    }
    return m;
    }
     
    
    int findFinalValue(vector<int>& nums, int original) {
        
        if(found(nums,original) == true)
        {
            while(found(nums,original)==true)
            {
                original = original*2;

            }
        }
        else
        {
            return original;
        }
        return 0;
    }
};