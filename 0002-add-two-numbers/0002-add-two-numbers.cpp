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
    void insertAtEnd(ListNode* &head, ListNode* &tail, int value)
    {
        ListNode* newNode = new ListNode(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode* first = l1;
        ListNode* second = l2;
        ListNode* ans = NULL;
        ListNode* tail = NULL;
        int carry = 0;
        while (first != NULL || second != NULL || carry != 0)
        {
            int sum = carry;
            if (first != NULL)
            {
                sum += first->val;
                first = first->next;
            }
            if (second != NULL)
            {
                sum += second->val;
                second = second->next;
            }
            carry = sum / 10;
            insertAtEnd(ans, tail, sum % 10);
        }
        return ans;
    }
};