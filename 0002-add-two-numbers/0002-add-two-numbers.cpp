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
string suml1(ListNode* l1){
    ListNode* mover=l1;
    string s="";
    while(mover!=nullptr){
        s+=to_string(mover->val);
        mover=mover->next;
    }
    reverse(s.begin(),s.end());
        return  s;
}
string suml2(ListNode* l2){
    ListNode* mover=l2;
    string s="";
    while(mover!=nullptr){
        s+=to_string(mover->val);
        mover=mover->next;
    }
    reverse(s.begin(),s.end());
       return s;
}
ListNode* stringToList(string s) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for (char ch : s) {
        ListNode* node = new ListNode(ch - '0');

        if (head == nullptr) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }

    return head;
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string a=suml1(l1);
        string b=suml2(l2);
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string result;
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        result += char((sum % 10) + '0');
       carry = sum / 10;
    }
    // reverse(result.begin(), result.end());
    
    return stringToList(result);
    }
};