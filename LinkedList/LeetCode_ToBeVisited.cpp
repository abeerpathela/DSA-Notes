// 328 

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
    ListNode* InsertAtTail(ListNode* head,ListNode* tail,ListNode* toBeInserted){
        if(head==NULL && tail==NULL){
            head=toBeInserted;
            tail=toBeInserted;
        }
        else{
            tail->next=toBeInserted;
            tail=toBeInserted;
        }
        return head;
    };

    ListNode* combine(ListNode* evenHead,ListNode* evenTail,ListNode* oddHead,ListNode* oddTail){
    ListNode* newHead=NULL;
        if(oddHead!=NULL){
            newHead=oddHead;
            if(evenHead!=NULL){
                oddTail->next=evenHead;
            }
            else{
                oddTail->next=NULL;
            }
        }
        else{
            newHead=evenHead;
        }
        return newHead;
    };

    ListNode* oddEvenList(ListNode* head) {
       ListNode* oddHead=NULL;
       ListNode* oddTail=NULL;

       ListNode* evenHead=NULL;
       ListNode* evenTail=NULL;

       ListNode* temp=head;
       while(temp!=NULL){
        if(temp->val%2==0){
            InsertAtTail(evenHead,evenTail,temp);
        }
        else if(temp->val%2!=0){
            InsertAtTail(oddHead,oddTail,temp);
        }
        temp=temp->next;
       }

         ListNode* newHead=NULL;
        if(oddHead!=NULL){
            newHead=oddHead;
            if(evenHead!=NULL){
                oddTail->next=evenHead;
            }
            else{
                oddTail->next=NULL;
            }
        }
        else{
            newHead=evenHead;
        }
        return newHead;

    }
};

// 19 

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
    int sizeOfLL(ListNode* head){
        int size=0;
        ListNode* temp=head;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        return size;
    };

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=sizeOfLL(head);
        int position;
        position=(size-n)+1;
        if(position==1){
            ListNode* toDelete=head;
            head=head->next;
            delete toDelete;
            return head;
        }
        ListNode* previous=NULL;
        ListNode* current=head;
        ListNode* forward=NULL;
        int Cposition=1;
        while(Cposition<position){
            forward=current->next;
            previous=current;
            current=forward;
            Cposition++;
        }
        ListNode* toDelete=current;
        previous->next=toDelete->next;
        delete current;
        return head;    
    }
};

// 160

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp=headA;
        ListNode* temp2=headB;
        while(temp!=temp2){
            {
            if(temp==NULL){
                temp=headB;
            }
            else{
                temp=temp->next;
            }
            };
            {
                if(temp2==NULL){
                    temp2=headA;
                }
                else{
                    temp2=temp2->next;
                }
            };
        };
        return temp;
    }
};