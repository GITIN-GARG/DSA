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
    int length(ListNode* head)
    {
        int count = 0;
        while (head != NULL)
        {
            count++;
            head = head->next;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        int lenA = length(headA);
        int lenB = length(headB);
        while (lenA > lenB)
        {
            headA = headA->next;
            lenA--;
        }
        while (lenB > lenA)
        {
            headB = headB->next;
            lenB--;
        }
        while (headA != NULL && headB != NULL)
        {
            if (headA == headB)
            {
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};