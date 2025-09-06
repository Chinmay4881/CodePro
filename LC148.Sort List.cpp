class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int>nova;
        ListNode *current = head;
        while(current){
            nova.push_back(current -> val);
            current =current->next;
        }
        sort(nova.begin(),nova.end());
        current =head;
        int i=0;
        while(current){
            current ->val= nova[i++];
            current =current ->next;
        }

return head;
    }
};
