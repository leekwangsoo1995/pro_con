#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
using namespace std;

//理解までに時間がかかったポイント
//key以外は全てポインタであるという事実を忘れなければ早く理解できる。

struct Node{
    int key;
    Node *right,*left,*parent;
};

Node *root,*NIL;

void insert(int k){
    Node *y = NIL;
    Node *x = root;
    Node *z;

    z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while(x != NIL){
        y = x;
        if(z->key < x->key){
            x = x->left;
        }else{
            x = x->right;
        }
    }

    z->parent = y;
    if(y == NIL){
        root = z;
    }else{
        if(z->key < y->key){
            y->left = z;
        }else{
            y->right = z;
        }
    }
}

void inorder(Node *u){
    if( u==NIL)return;
    inorder(u->left);
    printf(" %d",u->key);
    inorder(u->right);
}

void preorder(Node *u){
    if(u==NIL)return;
    printf(" %d",u->key);
    preorder(u->left);
    preorder(u->right);
}

Node * find(Node *u,int k){
    while(u != NIL && k != u->key){
        if(k > u->key)u = u->left;
        else u = u->right;
    }
    return u;
}

int main(){
    int n,i,x;
    string com;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        cin >> com;
        if(com[0] == 'f'){
            scanf("%d",&x);
            Node *t = find(root,x);
            if(t != NIL)printf("yes");
            else printf("No");
        }else if(com == "insert"){
            scanf("%d",&x);
            insert(x);
        }else if(com == "print"){
            inorder(root);
            printf("wawawa");
            preorder(root);
            printf("wawawa");
        }
    }

    return 0;
}