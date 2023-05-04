#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;

    node(int d)
    {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};


node* build_tree(node* root)
{

   cout<<"Enter the data :"<<endl;
   int data;
   cin>>data;
   root = new node(data);

   if(data == -1)
   {
    return NULL;
   }

   cout<<"Enter data for inserting in left of "<< data << endl;
   root -> left = build_tree(root->left);

   cout<<"Enter the data in right of"<<data<<endl;
   root -> right = build_tree(root -> right);
   return root;
}

void level_order_traversal(node*root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node*temp = q.front();
        cout<<temp->data<<" "<<endl;
         q.pop();


        if(temp = NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
      else
      {
       // cout<<temp -> data<<" ";
          if(temp -> left)
        {
            q.push(temp -> left);
        }

         if(temp -> right)
        {
            q.push(temp -> right);

        }
      }
        
        
    }
}


int main()
{
    node*root = NULL;

    //creating a tree
    root = build_tree(root);

    cout<<"print tree in level order"<<endl;
    level_order_traversal(root);1
    





    return 0;
}