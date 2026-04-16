#include<iostream>
using namespace std;
// int findUniqueElement(int a[],int size){
//     for(int i=0; i<size; i++){
//         int element=a[i];
//         int count_element=0;
//         for(int j=0; j<size; j++){
//             if(a[j]==element){
//                 count_element++;
//             }
//         }
//         if(count_element==1){
//             return element;
//         }
//     }
//     return -1;
// };
int findUniqueElement(int a[],int size){        // Good approach
    int ans=0;
    for(int i=0; i<size; i++){
        ans=ans^a[i];
    }
    return ans;
}
int main(){
    int a[]={2,3,5,4,5,3,4};
    int size=sizeof(a)/sizeof(int);
    int answer=findUniqueElement(a,size);
    if(answer==0){
        cout<<"There is no element found in the array that is unique"<<endl;
    }
    else{
        cout<<"The element which is unique is -> "<<answer<<endl;
    }
    return 0;
}