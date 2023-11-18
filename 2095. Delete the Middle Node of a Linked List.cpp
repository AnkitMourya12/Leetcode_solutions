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
int count(ListNode* head)
{
    ListNode* temp=head;
    int c=0;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    return c;
}

    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL||head->next==NULL)
        {
            return NULL;
        }
        
        int n=count(head);
       

        ListNode* t1=head;
         ListNode* t2=head;
         int k=0;
         while(n/2>k)
         {
            
             t2=t2->next;
              //t1=t1->next;
             k++;
         }
         int i=0;
         while(i<n/2-1)
         {
             t1=t1->next;
             i++;
         }
         t1->next=t2->next;
        

         return head;


    }
};
