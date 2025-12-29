struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode node;
    node.next = head;
    struct ListNode* prev = &node;

    while (head != NULL && head->next != NULL) {
        struct ListNode* first = head;
        struct ListNode* second = head->next;
        prev->next = second;
        first->next = second->next;
        second->next = first;
        prev = first;
        head = first->next;
    }
    return node.next;
}

