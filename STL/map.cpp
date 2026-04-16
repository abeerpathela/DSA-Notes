#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    map<string,int>m;
    m["Tv"]=100;
    m["Laptop"]=100;
    m["Headphones"]=50;
    m["Tablet"]=120;
    m["Watch"]=50;
    m.insert({"Camera",25});
    m.emplace("Earpodes",600);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"Count Of key Laptop:"<<m.count("Laptop")<<endl; // it returns the count of the key "Laptop" in the map 
    cout<<"Value of key Laptop:"<<m["Laptop"]<<endl;

    m.erase("Tv");

    // Find
    if(m.find("Camera")!=m.end()){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    
    cout<<m.size()<<endl;
    if(m.empty()){
        cout<<"The map is empty"<<endl;
    }
    else{
        cout<<"The map is not empty"<<endl;
    }
    return 0;
}