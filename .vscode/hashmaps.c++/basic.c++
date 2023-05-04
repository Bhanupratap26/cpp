#include<bits/stdc++.h>
using namespace std;

int main()
{

    //creation
    unordered_map<string,int>m;

    //insertion

    //Method 1
    pair<string,int>pair1 = make_pair("singh",3);
    m.insert(pair1);

    //Method 2
    pair<string,int>pair2("pratap",2);
    m.insert(pair2);


    //Method 3
    m["bhanu"] = 1;

    //output method
    //method1
    cout<<"method1"<<endl;
    cout<<m["bhanu"]<<endl;
    cout<<m["pratap"]<<endl;
    cout<<m["unknown_key"]<<endl;

    //Method2
    cout<<"method2"<<endl;
    cout<<m.at("singh")<<endl;
    cout<<m.at("pratap")<<endl;

    cout<<m.at("unknown_key")<<endl;

    //size
    cout<<"size -> "<<m.size()<<endl;

    /*count function is use to know the presence of any specific key
    count returns 0 for absent and 1 for denorm_absent
    */ 

   //to check the presence
   cout<<" is rio present ,0 for no"<<m.count("rio")<<endl;
   cout<<"pratap is present, 1 for true"<<m.count("pratap")<<endl;

   //erase
   // m.erase("pratap");
   //cout<<m.size()<<endl;

   cout<<"map traverse"<<endl;
   // iterator
   unordered_map<string,int> :: iterator it = m.begin();
   while(it != m.end())
   {
    cout<<it->first<<" "<<it->second<<endl;
    it++; 
    //cout<<"key prinnt in random order"<<endl;
   }
   /*
   map -> print elements in order log(n)
   unordered -> print in random order constant time
   */
  m.erase("pratap");
  cout<<"traversing 2 afte deleting an element"<<endl;
   unordered_map<string,int> :: iterator ik = m.begin();
   while(ik != m.end())
   {
    cout<<ik->first<<" "<<ik->second<<endl;
    ik++; 
    //cout<<"key prinnt in random order"<<endl;
   }


   //traversing the complete map
    //"Item Frequency"<< endl;
   for (auto p : m)
      cout << p.first <<" : "<< p.second << endl;


    return 0;

}