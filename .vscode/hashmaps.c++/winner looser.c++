/**
 * @param {number[][]} matches
 * @return {number[][]}
 */
var findWinners = function(matches) {
    var list = {}
    for(var t=0;t<matches.length;t++){
        for(var y = 0;y<matches[t].length;y++){
            if(matches[t][y] in list){
                if(y==0){
                    list[matches[t][y]].w+=1
                }else{
                    list[matches[t][y]].l+=1
                }
            }else{
                if(y==0){
                    list[matches[t][y]]={w:1,l:0}
                }else{
                    list[matches[t][y]]={w:0,l:1}
                }
            }
        
        }
    }
    console.log(list)
};



class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int n = matches.size();
         unordered_map<int,int> s;
         vector<int>list;
        for(int i=0;i<n;i++)
        {
           int a = matches[i][0];
            for(int j = 0 ; j<n ; j++)
            {
               if(a==matches[j][1])
               {
                   s[matches[i][0]]++;

               }
               else
               {
                   
               }
               
            }
        }      


    }
};


class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int n = matches.size();
         unordered_map<int,int> s;
         vector<int>list;
        for(int i=0;i<n;i++)
        {
           int a = matches[i][0];
           s[matches[i][0]] = 0;
           //cout<<"  a = matches[i][0] ->  "<<a;
            for(int j = 0 ; j<n ; j++)
            {
               // cout<<"   mat[j][1] -> "<<matches[j][1]<<endl;
               if(a==matches[j][1])
               {
                   s[matches[i][0]]++;

               }
              /* else
               {
                  s[matches[i][0]] = 0; 
               }*/
           // cout<<"again";
               
           }
            s[matches[i][1]]++;
        }      

        for(auto p : s)
        {
            cout<<p.first<<"  -> "<<p.second<<endl;
        }

        vector<vector<int>> C;
        return C;


    }
};