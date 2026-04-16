    #include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;
    int getMissingNumber(vector<int>&arr){
        int size=arr.size();
        int start=0;
        int end=size-1;
        int answer=size;
        int mid;
        while(start<=end){
            mid=(start+end)/2;
            if(arr[mid]==mid){
                start=mid+1;
            }
            else{
                answer=mid;
                end=mid-1;
            }
        }
        return answer;
    }
    int findMissingNumber(vector<int>&arr){
        vector<int>temp=arr;
        sort(temp.begin(),temp.end());
        int ans=getMissingNumber(temp);
        return ans;
    }
    int main(){
        vector<int>arr={0,1,2,3,4};
        int answer=findMissingNumber(arr);
        cout<<"Missing number: "<<answer<<endl;
        return 0;
    }