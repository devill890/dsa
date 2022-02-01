#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int graph1[N][N];
int vector<int>graph2[N];
bool vis[N];
void dfs(int vertex){
    cout<<vertex<<endl;
    vis[vertex]=true;
    for(int child:graph1[vertex]){
        cout<<"parent:->"<<vertex<<",child:->"<<child<<endl;
        if(vis[child]) continue;
        dfs(child);

    }

}
int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=0;i<n;++i){
        int v1,v2;
        cin>>v1>>v2;
        graph1[v1][v2]=1;
        graph1[v2][v2]=1;
        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1);
    }
}