/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int length=0;
    struct ListNode* curr= head;
    while( curr!= NULL){
        length++;
        curr=curr->next;
    }
    int trav=length-n-1;
    int i=0;
    curr=head; 
    if (trav == -1) {
        head = head->next;
        free(curr);
        return head;
    }
    while (i < trav) {
        curr = curr->next;
        i++;
    }
    struct ListNode* temp = curr->next;
    curr->next = curr->next->next;
    free(temp);
    return head;
}