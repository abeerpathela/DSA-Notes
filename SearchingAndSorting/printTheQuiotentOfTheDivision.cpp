#include<iostream>
#include<vector>
using namespace std;
int getQuoitent(int dividend,int divisor){
    if(dividend<0 || divisor<=0){
        return -1;
    }
    int start=0;
    int end=dividend;
    int answer=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if((long)mid*divisor==dividend){
            return mid;
        }
        else if(dividend>(long)mid*divisor){
            answer=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return answer;
}
int main(){
    int dividend;
    cout<<"Enter dividend: ";
    cin>>dividend;
    int divisor;
    cout<<"Enter divisor: ";
    cin>>divisor;
    int answer=getQuoitent(dividend,divisor);
    if(answer==-1){
        cout<<"No negivitive or zero inputs are allowed! "<<endl;
    }
    else{
        cout<<answer<<endl;
    }
    return 0;
}