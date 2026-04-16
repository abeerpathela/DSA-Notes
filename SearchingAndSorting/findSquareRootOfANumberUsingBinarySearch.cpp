// square root of a number using binary search 
#include <iostream>
#include<vector>
using namespace std;
bool checkValidAnswer(long long int mid, int target){
    long long square=mid*mid;
    if(square==target){
        return true;
    }
    else{
        return false;
    }
}
int mySqrt(int x){
    int target=x;
    // STEP-1 define search space 
    int start=0;
    int end=target;
    long long int mid;
    int answer=-1;
    // STEP-2 check mid
    while(start<=end){
        mid=(start)+(end-start)/2;
        long long square=mid*mid;
        if(checkValidAnswer(mid,target)){
            return mid;
        }
        if(square>target){
            end=mid-1;
        }
        if(square<target){
            // store and compute 
            answer=mid;
            // going to the right of the array 
            start=mid+1;
        }
        
    }
    return answer;
}
int main()
{
    cout<<"Square root of 16 is "<<mySqrt(16)<<endl;
    return 0;
}