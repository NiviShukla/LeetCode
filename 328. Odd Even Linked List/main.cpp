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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL)
        return head;

        ListNode* end = head;
        /*
        counting the jump to reach the end
        Ex:1->2->3->4->5
        count = 4
        */
        int count = 0;
        while(end->next != NULL)
        {
            end = end->next;
            count++;
        }
        /*
        Checking if count is odd or even
        count&1 gives it as '&' is 'bitwise AND'
        to perform that much number of operations
        */
        count = count&1?(count/2) +1:count/2;
        ListNode* temp = head;
        /*
        swapping the end->next to temp->next
        temp->next jumsp to odd index
        end->next->next is the last node of list now
        */
        while(count--)
        {
            end->next =temp->next;
            temp->next = temp->next->next;
            end->next->next = NULL;
            temp = temp->next;
            end = end->next;
        }
        return head;
    }
};
