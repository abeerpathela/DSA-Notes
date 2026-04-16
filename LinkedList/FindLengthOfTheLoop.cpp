// class Solution {
// public:
//     int findLengthOfLoop(ListNode *head) {
//         ListNode* slow=head;
//         ListNode* fast=head;
//         while(fast!=NULL&&fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast){
//                 int track=1;
//                 ListNode* met=slow;
//                 fast=fast->next;
//                 while(fast!=met){
//                     fast=fast->next;
//                     track++;
//                 }
//                 return track;
//             }
//         }
//         return 0;
//     }
// }