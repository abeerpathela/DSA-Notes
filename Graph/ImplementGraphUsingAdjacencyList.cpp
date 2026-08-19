// Implement graph using Adjacency List 

#include <iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Graph{
    public:
    unordered_map<int,vector<int>> adjList;
    // directions ke liye 
    // 0 for undirected edge 
    // 1 for directed edge 
    void addEdge(int u, int v, bool direction){
        if(direction == 1){
            // iska matlab ye hai ki ek node u -> v tak ja rhi hai 
            adjList[u].push_back(v);
        }
        else{
            // iska matlab ye hai ki ek node u -> v tak ja rha hai aur v -> u tak bhi node ja rhi hai 
            adjList[u].push_back(v); // u -> v
            adjList[v].push_back(u); // v -> u 
        }
    }
    
    void printAdjacencyList(){
        for(auto i : adjList){
            // yaha pe i ek recor bnke ayega jisme key mei node ki value store hai aur value mei vector<int> store kiya hua hai 
            cout<<i.first<<": ";
            cout<<"{ ";
            for(auto j: i.second){
                cout<<j;
            }
            cout<<" }";
        }
    }
};

int main()
{
    Graph g;
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(2,3,1);
    g.addEdge(3,4,1);
    
    g.printAdjacencyList();
    return 0;
}