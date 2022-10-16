#include<iostream>
#include<list>
#include<queue>
using namespace std;

class Graph{

    int V;
    list<int>* l;
public:
    
    Graph(int v){
        V=v;
        l = new list<int>[V];
    }

    void addEdge(int i,int j,bool undir=true){
        l[i].push_back(j);
        if(undir){
            l[j].push_back(i);
        }
    }

    void printAjList(){

        for(int i=0;i<V;i++){
            cout<<i<<"-->";
            for(int ele:l[i]){
                cout<<ele<<",";
            }
            cout<<endl;
        }

    }

    void bfs(int source){
        
        queue<int> q;
        bool *visited = new bool[V]{false};

        q.push(source);
        visited[source] = true;

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            cout<<node<<endl;

            for(auto nbr:l[node]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
    }

    void dfsHelpher(int node,vector<int>& vis,vector<int>& dfsres){
        cout<<node<<" ";
        vis[node] = 1;
        for(auto it:l[node]){
            if(!vis[it]){
                dfsHelpher(it,vis,dfsres);
            }
        }
    }


    void dfs(int V){

        vector<int> dfsres;
        vector<int> vis(V+1,0);

        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfsHelpher(i,vis,dfsres);
            }
        }

       

    }




};


int main()
{
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(2,4);
    g.addEdge(3,4);

    g.bfs(1);

    return 0;
}