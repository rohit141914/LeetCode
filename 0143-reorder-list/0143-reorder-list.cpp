class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) {
            return;
        }

        vector<ListNode*> nodes;
        ListNode* curr = head;
        while (curr) {
            nodes.push_back(curr);
            curr = curr->next;
        }
        int n = nodes.size();
        for (int i = 0; i < n / 2; ++i) {
            nodes[i]->next = nodes[n - i - 1];
            if (i + 1 < n / 2) {
                nodes[n - i - 1]->next = nodes[i + 1];
            } else {
                nodes[n - i - 1]->next = (n % 2 == 0) ? nullptr : nodes[n / 2];
            }
        }
        if (n % 2 == 1) {
            nodes[n / 2]->next = nullptr;
        }
    }
};
