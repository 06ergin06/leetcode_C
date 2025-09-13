#include <stdio.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode *middleNode(struct ListNode *head) {
    int len = 0;
    struct ListNode *cur = head;
    while (cur != NULL) {
        cur = cur->next;
        len++;
    }
    len = (len / 2);
    for (int i = 0; i < len; i++) {
        head = head->next;
    }
    return head;
}