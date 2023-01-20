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
    ListNode* deleteDuplicates(ListNode* head) {
        if( head == NULL)
        return head;

        /*
        create a dummy pointer at head
        temp moves across the list and if the value of next node is same
        temp points to the next node of the value
        */
        ListNode* temp = head;
        while(temp != NULL)
        {
            if((temp->next != NULL) && temp->val == temp->next->val)
            {
                temp ->next = temp->next->next;
            }
            else
            {
                temp = temp->next;
            }

        }
        return head;

    }
};
