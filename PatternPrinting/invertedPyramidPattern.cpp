// inverted pyramid pattern 
#include <iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=1; i<=n; i++){
        int spaces=i;
        int stars=(2*n)-((2*i)-1);
        cout<<string(spaces,' ')<<string(stars,'*')<<endl;
    }
    return 0;
}