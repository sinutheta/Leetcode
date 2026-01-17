/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 #define newnode (struct ListNode*)malloc(sizeof(struct ListNode))
struct ListNode *addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

    struct ListNode *l3=NULL,*t,*a;
    int carry=0,sum;
    
    while(l1!=NULL || l2!=NULL ||carry)
    {
      sum=carry;
      if(l1!=NULL)
      {
        sum+=l1->val;
        l1=l1->next;
      }

      if(l2!=NULL)
      {
        sum+=l2->val;
        l2=l2->next;
      }

      t=newnode;
      carry=sum/10;
      sum=sum%10;
      t->val=sum;
      t->next=NULL;
      if(l3==NULL)
      {
        l3=t;
        a=l3;
      }
      else
      {   
       a->next=t;
       a=t;    
      }  
    }
    return l3;
}