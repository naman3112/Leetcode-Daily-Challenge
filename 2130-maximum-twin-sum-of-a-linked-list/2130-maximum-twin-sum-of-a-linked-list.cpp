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
     ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        

        ListNode* first=head; ListNode* second=head->next;
        ListNode* temp=head; int i=0; 
         
        while(temp!=NULL ){
          if(i==0){
                    first->next=NULL;
                        i++;
                }
                    
            temp=second->next;
            second->next=first;
            first=second;
           second=temp;
               
        }
        return first;
        
    }
    
    int pairSum(ListNode* head) {
        if(head==NULL){
            return -1;
        }
        ListNode* temph=head;
        ListNode* slow = head;
        ListNode* fast=head;
        
        if(fast->next->next==NULL){
            return (head->val + head->next->val);
        }
        
        // int lenoflist=0;
        // while(temph!=NULL){
        //     temph=temph->next;
        //     lenoflist++;
        // }
        // temph=head;
        // int h =0;
        // lenoflist/=2;
        // while(h<lenoflist){
        //     h++;
        //     temph=temph->next;
        // }
        // ListNode *head2=temph->next;
        // cout<<"head-----2 "<<head2->val;
        // temph->next=NULL;
        
    fast=fast->next->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode *head2=slow->next;
        slow->next=NULL;
        cout<<"head -2 "<<head2->val<<endl;
            
      ListNode* rev2=reverseList(head2);
        temph=head;
        int sum=0;
        while(rev2!=NULL && temph!=NULL){
            sum=max(sum,rev2->val + temph->val);
            rev2=rev2->next;
            temph=temph->next;
        }
        
        return sum;
    
    
    }
};