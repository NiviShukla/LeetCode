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
    void deleteNode(ListNode* node) {

        //edge case if node is the last element of the list
        if(node->next == NULL)
        node = NULL;
        /*
        As we cannot access the head or can move backward
        we are changing the value of node to next node and
        connecting it to the next to next node
        Ex:4->5->1->9 node is 5
        then we change 5 to 1
        == 4->1->1->9
        and connect this to 9
        == 4->1->9
        i.e. deleting the 1
        */
        int temp = node->next->val;
        node->val = temp;
        node->next = node->next->next;
    }
};
