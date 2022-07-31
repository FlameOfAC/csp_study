#include<iostream>
#include<queue>
using namespace std;
const int N=1000;
struct node{
    int next,to;
    int w;
}edge[N<<1];
int head[N];
int tot=0;
void init(){
    memset(head,-1,sizeof(head));
    tot=0;
}
void add(int u,int v){
    edge[tot].to=v;
    edge[tot].next=head[u];
    head[u]=tot++;

}
int in[N];
void tupx(int n){
    queue<int>q;
    for(int i=1;i<=n;i++){
        if(in[i]==0)q.push(i);
    }
    while(q.empty()==0){
        int u=q.front();
        cout<<u<<endl;
        q.pop();
        for(int i=head[u];i!=-1;i=edge[i].next){
            int v=edge[i].to;
            in[v]--;
            //dis[v]=max(dis[v],edge[i].w+dis[u]);
            if(in[v]==0){
                q.push(v);
            }
        }
    }
}
int main(){
    cout<<"hello world"<<endl;
    int n,m;
    cin>>n>>m;
    init();
    for(int i=1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        in[v]++;
    }
    return 0;
}
/*
有向无环图/DAG
最长上升子序列

1 3 4 2 6 7 2 3 4 5 6

(x[i]-x[j]+y[i]-y[j])


int x[N],y[N];


选一个入度为0的点 使起相连的点入度-1



1>2 
2>3 

1 2 3

1 1
2 2
3 3
4 4
5 5
6 6

5 6
5 5

1 2 3 4
1 5 6 7
1 2 2 

for(int i=1;i<=n;i++)
for(int j=1;j<i;j++){
    if(a[i]>a[j])dp[i]=max(dp[i],dp[j]+1);
}




int dis[N];
int vis[N];
int spfa(int u){
    queue<int>q;
    q.push(u);
    vis[u]=1;
    dis[u]=0;
    while(q.empty()==0){
        u=q.front();
        q.pop();
        for(int i=0;;){
            int v,w;
            if(dis[v]>dis[u]+w){
                dis[v]=dis[u]+w;
                if(vis[v]==0){
                    q.push(v);
                    vis[v]=1;
                }
            }
        }
    }
    return 0;
}
int main(){
    
}


7-3 1

2     3
7 8 9 3
spfa

spfa   bfs
queue  

vis[]


*/