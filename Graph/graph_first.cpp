
#include <iostream>
using namespace std;
#include<map>
#include<list>
class graph
{
    public:
    map <int, list<int> > adj;

    void create_graph(int u, int v, bool type)
    {
       adj[u].push_back(v);
       if(type == 0)
       {
        adj[v].push_back(u);
       }
    }

    void print_graph()
    {
       for(auto i : adj)
       {
        cout<<i.first<<"->";
        for(auto j : i.second)
        {
            cout<<j<<" ";
        }
        cout<<endl;
       }
    }
};
int main()
{
    int n;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;
    int m;
    cout<<"Enter the number of edges"<<endl;
    cin>>m;

    graph g;
    for(int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u;
        cin>>v;
        g.create_graph(u,v,0);
    }
    g.print_graph();

   
}
