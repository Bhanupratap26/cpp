 class Solution {
public:
    
     bool found(string, int original)
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
             return m;
    }
   
    bool  founds(char t[],char s[],int m , int n )
                 
    {     
       if (m == 0)
        return true;
    if (n == 0)
        return false;

    if (t[m - 1] == str2[n - 1])
        return founds(str1, str2, m - 1, n - 1);
 
    
    return founds(str1, str2, m, n - 1);
        
        
    }
    
    
    
    int minimumScore(string s, string t){
        int count = 0;
         int m = t.size();
        int n =s.size();
       
        
        if(founds(s,t,m,n)== false)
        {
            
        while(t.size()!=0)
        {
            for(int i =0 ; i<t.size(); i++)
            {
                if(found(s,t[i]) == false)
                {
                    s.erase(i);
                    count++;
                }
            }
        }
                int minimumScore(string s, string t) {

            
        }
        else
        {
            return count;
        }
        
        
        return count;
        
        
    }
};