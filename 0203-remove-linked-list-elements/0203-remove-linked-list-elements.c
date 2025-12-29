struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode node;
    node.next = head;
    struct ListNode* curr = &node;

    while (curr->next != NULL) {
        if (curr->next->val == val) {
            struct ListNode* temp = curr->next;
            curr->next = curr->next->next;
            free(temp);
        } else {
            curr = curr->next;
        }
    }
return node.next;
}
