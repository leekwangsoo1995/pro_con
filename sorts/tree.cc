#include<cstdio>
#define MAX 10000
#define NIL -1

struct Node {int parent,left,right;};

Node T[MAX];
int n,D[MAX],H[MAX];

int main(){
    int v,l,r,root=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++)T[i].parent = NIL;

    for(int i=0;i<n;i++){
        scanf("%d %d %d",&v,&l,&r);
        T[v].left = l;
        T[v].right = r;
        if( l != NIL )T[l].parent = v;
        if( r != NIL )T[r].parent = v;
    }

    for(int i = 0;i < n;i++ )if(T[i].parent == NIL)root = i;

    //setDepth(root,o);
    //setHeight(root);
    
    //for(int i=0;i<n;i++)print(i);

    return 0;
}


