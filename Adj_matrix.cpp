#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,m;
    //Nodes and edges
    cin>>n>>m;
    //declare adj matrix 
    int adj[n+1][n+1];
    cout<<("Enter the Graph edges less than %d n and %d m",n,m)<<endl;
    for(int i=0;i<m;i++)
    {   
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;


    }
    //print matrix using two for loops




}
