// Vector 
#include <iostream>
#include<vector>    // header file for vector 
using namespace std;
int main()
{
    vector<int>a;   // declaration of vector
    // Another methods of vector declaration 
    vector<int> b={1,2,3,4,5};
    vector <int> c(3,10);
    vector <int> d(c);
    // methods of vector 
    cout<<a.size()<<endl;   // size of vector 
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;  

    cout<<a[1]<<endl<<a.at(1)<<endl;

    cout<<a.front()<<endl<<a.back()<<endl;

    // a.erase(a.begin()+1);
    a.erase(a.begin(),a.begin()+2);

    // Loop in vectors 
    cout<<"Start of a:"<<endl;
    for(int val : a ){
        cout<<val<<endl;
    }
    cout<<"End"<<endl;

    // insert 
    b.insert(b.begin()+2,100);

    cout<<"Start of b:"<<endl;
    for(int val : b ){
        cout<<val<<endl;
    }
    cout<<"End"<<endl;

    cout<<*(b.end()-1)<<endl;

    // b.clear();

    // cout<<"Start of b:"<<endl;
    // for(int val : b ){
    //     cout<<val<<endl;
    // }
    // cout<<"End"<<endl;

    if(b.empty()==true){
        cout<<"The vector is empty"<<endl;
    }
    else{
        cout<<"The vector is not empty"<<endl;
    }

    // Applying forward loop in vector 
    vector<int>::iterator i;
    for(i=b.begin();i!=b.end();i++){
        cout<<*(i)<<endl;
    }

    // Applying backward loop in vector 
    vector <int>:: iterator j;
    for(auto j=b.rbegin(); j!=b.rend(); j++){
        cout<<*(j)<<endl;
    }

    return 0;
}