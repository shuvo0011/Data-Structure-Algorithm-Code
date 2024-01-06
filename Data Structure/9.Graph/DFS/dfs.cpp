#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int> g[N];

bool visit[N];

void dfs(int vertex){
    //section-1:
    //Take action on vertex after entering the vertex
    cout<<vertex<<endl;

    //if(visit[vertex]) return;

    visit[vertex] = true;

    for(int child : g[vertex]){
        cout<< "par"<< vertex <<" child "<< child<<endl;
        if(visit[child]) continue;
        //section-2:
        //Take action on child before entering the child node
        dfs(child);
        //section-3:
        //Take action on child after exiting child node
    }
    //section-4:
    //Take action on vertex before exiting the vertex
}


int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<9;++i){
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1);
}
