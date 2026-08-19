// Implement graph with weighted edges using adjacency List 
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Graph{
    public:
    unordered_map<int,vector<pair<int,int>> > adjList;
    void addEdge(int u, int v, int wt, bool direction){
        if(direction == 1 ){
            // u -> v
            adjList[u].push_back(make_pair(v,wt));
        }
        else{
            // u -> v
            // v -> u 
            adjList[u].push_back(make_pair(v,wt));
            adjList[v].push_back(make_pair(u,wt));
        }
    }
    void printAdjacencyList(){
        for(auto i: adjList){
            cout<<i.first<<" : ";
            cout<<"{";
            for(auto j: i.second){
                cout<<" ( "<<j.first<<","<<j.second<<") , ";
            }
            cout<<"}"<<endl;
        }
    }
};

int main(){
    Graph g;
    g.addEdge(0,1,10,1);
    g.addEdge(1,2,20,1);
    g.addEdge(2,3,30,1);
    g.addEdge(3,4,40,1);
    g.printAdjacencyList();
    
    return 0;
}