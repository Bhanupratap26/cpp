class Solution {
public:
int fact(int n) {
   if (n == 0 || n == 1)
   return 1;
   else
   return n * fact(n - 1);
}
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>m;

       int  n = nums.size();
       int comb;
        int ans = 0;
        for(int i =0 ; i<n ; i++)
        {
            m[nums[i]]++;
        }
        /*for(int i = 0; i<n ; i++)
        {
            for(int j = 0 ; j<n ; j++)
            {
            
               if(nums[i]==nums[j])
               {
                 m.erase(nums[j]);
               }
            }
        }*/
        int x = m.size();

        for(int i =0 ; i<x ; i++)
        {
            cout<<"m[nums[i]] -> "<<m[nums[i]]<<" i -> "<< i <<"  nums[i] -> "<<nums[i]<<endl;
            if(m[nums[i]] > 1)
            {
             
             comb = fact(m[nums[i]]) / (2 * fact(m[nums[i]]-2));
             ans = ans + comb;
            }
             cout<<"comb -> "<<comb<<endl;
            cout<<"ans ->  "<<ans<<endl;  
        }
                 
            //ans = ans + comb;
           
        
        return ans;
    
}
};



class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        int dum = 0;
        int unique;
        for(int i = 0; i<n; i++)
        {
            for(int j = i+1; j<n ; j++)
            {
                if(nums[i]==nums[j])
                {
                    break;
                }
                else
                {
                    unique = nums[i];
                    dum = dum + unique;

                }
            }
        }
        return dum;
        
    }
};