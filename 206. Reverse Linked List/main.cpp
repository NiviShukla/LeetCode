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
        //cheking if head is null or single node
        if(head == NULL || head->next == NULL)
        return head;

        ListNode* curr = head;
        ListNode* prev = NULL;
        /*
        we take a pointer temp to keep the address of next node so it is not lost
        EX:1->2->3->4
        curr = 1,prev = NULL,temp = 2
        then curr->next=NULL,prev = 1,curr=2
        now curr=2,prev=1,temp = 3
        then curr->next=1,prev=2,curr=3
        */

        while(curr != NULL)
        {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev= curr;
            curr= temp;
        }
        return prev;
    }
};
