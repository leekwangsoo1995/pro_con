#include<cstdio>
#include<cstdlib>
#include<cstring>
#include <iostream>
using namespace std;

struct Node{
    int key;
    Node *next,*prev;
};

Node *nil;
void init(){
    nil = (Node *)malloc(sizeof(Node));
    nil->next = nil;
    nil->prev = nil;
}

void insert(int key){
    Node *x = (Node *)malloc(sizeof(Node));
    x->key = key;
    //番兵の直後に要素を追加いたしやす
    x->next = nil->next;
    std::cout << nil << endl;
    std::cout << nil->next << endl;
    std::cout << nil->next->prev << endl;
    nil->next->prev = x;
    nil->next = x;
    x->prev = nil;
}

Node* listSearch(int key){
    Node *cur = nil->next;
    while(cur != nil && cur->key != key){
        cur = cur->next;
    }
    return cur;
}

void deleteNode(Node *t){
    if(t == nil) return;
    t->prev->next = t->next;
    t->next->prev = t->prev;
    free(t);
}

void deleteFirst(){
    deleteNode(nil->next);
}

void printList(){
    Node *cur = nil->next;
    int isf = 0;
    while(1){
        if(cur == nil)break;
        if(isf++ > 0)printf(" ");
        printf("%d",cur->key);
        cur = cur->next;
    }
    printf("¥n");
}

void deleteLast(){
    deleteNode(nil->prev);
}

void deleteKey(int key){
    deleteNode(listSearch(key));
}

int main(){
    int key,n,i;
    int size = 0;
    char com[20];
    int np=0,nd=0;
    scanf("%d",&n);
    init();

    for(i=0;i<n;i++){
        scanf("%s%d",com,&key);
        if(com[0] == 'i'){
            insert(key);
            np++;
            size++;
        }else if(com[0] == 'd'){
            if(strlen(com)>6){
                if(com[6] == 'F')deleteFirst();
                else if(com[6]== 'L')deleteLast();
            }else{
                deleteKey(key);nd++;
            }
            size--;
        }
    }

    printList();
    return 0;
    
    std::cout << endl;
	/*std::cout << nil << endl;
	std::cout << nil->next << endl;
	std::cout << nil->prev << endl;*/

}

