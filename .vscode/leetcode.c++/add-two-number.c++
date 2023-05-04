/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

void insert_at_tail(ListNode*tail,int d)
{
    ListNode*temp = nullptr;
    temp -> val = d;
    tail -> next = temp;
    tail = temp; 
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int>s1;
        stack<int>s2;
         stack<int>s3;
        ListNode*t1 = l1;
        ListNode*t2 = l2;
        while(t1!=nullptr)
        {
            cout<<"t1 -> "<<t1->val<<endl;
            s1.push(t1 -> val);
            t1 = t1 -> next;
        }

        while(t2!=nullptr)
        {
             cout<<"t2 -> "<<t2->val<<endl;
            s2.push(t2 -> val);
            t2 = t2 -> next;
        }
         
         int sum = 0 , rem = 0;
        while(!s1.empty()&&!s2.empty())
        {
            int sum = s1.top() + s2.top() + rem;
           
            s3.push(sum%10);
            rem = sum/10;


            cout<<" sum -> "<<sum<<endl;
            // int a = m + n; 
             s1.pop();
                s2.pop();
            
        }

        while(!s1.empty())
        {
            s3.push(s1.top());
            s1.pop();
        }

        while(!s2.empty())
        {
            s3.push(s2.top());
            s2.pop();
        }

         ListNode*it = nullptr;
        /*ListNode*item  = s3.top();
        ListNode*it = nullptr;
        item -> next = it;
        s3.pop();*/

        while(!s3.empty())
        {
            
            cout<<s3.top()<<endl;
            s3.pop();
        }

        ListNode* node1 = new ListNode(s3.top());
        ListNode* head = node1;
        ListNode* tail = node1;
        s3.pop();

        while(!s3.empty())
        {
            insert_at_tail(tail,s3.top());
            s3.pop();
        }


        return head;

    }
};