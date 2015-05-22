struct ListNode* removeElements(struct ListNode* head, int val) {

    while(head && head->val == val) {
    	head = head->next;
   	}
   	struct ListNode *node = head;
   	while(node && node->next) {
            if (node->next->val == val) {
                node->next = node->next->next;
            } else {
                node = node->next;
            }
   	}
   	return head;
}
/*
Runtime: 28 ms
*/