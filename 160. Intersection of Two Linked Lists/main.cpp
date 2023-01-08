/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL)
        return NULL;
        /*
        we put 2 dummy nodes on headA and headB
        then traverse from headA and headB
        when either of the dummy node reach NULL
        we put it on the other head
        EX:
        if a reaches NULL then a is at headB
        similarly if b reaches NULL then b is at headA
        when both of them are changed
        they will have to traverse same before reaching the same address
        and that is the interaction point
        */

        ListNode* a = headA;
        ListNode* b = headB;

        while(a != b)
        {
            a = a == NULL? headB: a->next;
            b = b == NULL? headA: b->next;
        }
        return a;
    }
};
