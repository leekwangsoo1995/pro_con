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

int main(){
    int key,n,i;
    int size = 0;
    char com[20];
    int coms[20];
    int np=0,nd=0;
    scanf("%d",&n);
    init();

    for(i=0;i<n;i++){
        scanf("%s%d",com,coms);
	    std::cout << com[0] << endl;
	    std::cout << coms[0] << endl;
	    std::cout << &key << endl;
        if(com[0] == 'i'){

        }
    }

    std::cout << endl;
	std::cout << nil << endl;
	std::cout << nil->next << endl;
	std::cout << nil->prev << endl;

}

