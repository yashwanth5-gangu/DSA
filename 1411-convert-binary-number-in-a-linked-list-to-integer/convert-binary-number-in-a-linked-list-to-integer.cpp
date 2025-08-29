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
    int getDecimalValue(ListNode* head) {
        ListNode * temp=head;
        vector<int>ans;
        while(temp!=nullptr){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int ans1=0;
        int j=0;
        for(int i=ans.size()-1;i>=0;i--){
            ans1+=ans[i]*pow(2,j);
            j++;
        }
        return ans1;
    }
};