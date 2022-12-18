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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* p1 = list1;
        ListNode* p2 = list2;
        /*Taking this dummy node to return the answer
        3rd pointer at dummy node that will get ahead
        */
        ListNode* dummy = new ListNode(-1);
        ListNode* p3 = dummy;

        while(p1 != NULL && p2 != NULL)
        {
            if(p1->val <p2->val)
            {
                p3->next = p1;
                p1=p1->next;
            }
            else
            {
                p3->next = p2;
                p2 =p2->next;
            }
            p3= p3->next;
        }
        //if list2 gets to NULL or is empty
        while(p1 != NULL)
        {
            p3->next = p1;
            p1 = p1->next;
            p3 = p3->next;
        }
        //if list1 gets to NULL or is empty
        while(p2 != NULL)
        {
            p3->next = p2;
            p2 = p2->next;
            p3 = p3->next;
        }

        return dummy->next;
    }
};
