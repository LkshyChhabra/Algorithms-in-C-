class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(!head)   return NULL;
        if(!head->next) return NULL;
        int count = 0;
        ListNode *temp = head;
        while(temp)
        {
            temp = temp->next;
            ++count;
        }
        count = count/2;
        temp = head;
        while(--count)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};
