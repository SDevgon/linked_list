class Solution {
public:
    int numComponents(ListNode* head, vector<int>& G) {
        if(!head)
            return 0;
        unordered_set<int> map;
        for(auto ch:G)
            map.insert(ch);
        ListNode* temp= head;
        int count= 0;
        while(temp)
        {
            if(map.count(temp->val))
               { count++;
                   while(temp && map.count(temp->val) &&temp->next)
                         temp=temp->next;
               }
            temp=temp->next;
            
        }
    return count;
                         
    }
};
