#include<iostream>
using namespace std;
int A[100],tmp[100];
//quickソートは、partitionを再帰関数を使ってpartitionしまくると完成する。

int partition(int A[],int n,int p,int r){
    int x,i,j,t;
    x = A[n - 1];
    i = p;
    for(j = 0; j<r;j++){
        if(A[j] < x){
            i++;
            t=A[i];
            A[i] = A[j];
            A[j] = t;
        }
    }
    t = A[i +1];
    A[i + 1] = A[r];
    A[r] = t;
    return i + 1;
}
void quickSort(int A[],int n,int p,int r){
    if(p<r){
        int q = partition(A,n,p,r);
        quickSort(A,n,p,q-1);
        quickSort(A,n,q+1,r);
    }

}

int main(){
    int n,q;
    cin >> n;
    for(int i=0;i<n;i++)cin >> A[i];
    quickSort(A,n,0,n-1);
    
    for(int i=0;i<n;i++){
        if(i == q){
            cout << "[ ";
        }
        cout << A[i] ;
        if(i == q){
            cout << " ]";
        }
    }
}

/*
#define MAX 50000
#define SENTINEL 200000
int L[MAX/2+2],R[MAX/2+2];
int cnt;
//mergesortは再帰関数を使い、分割→統治をして、ソートを行う。
//再帰関数は先に分割が行われていく。教科書の図を参考に。

void merge(int A[],int n ,int left,int mid,int right){
    int n1 = mid - left;
    int n2 = right - mid;
    for(int i = 0;i<n1;i++)L[i] = A[left + i];
    for(int i = 0;i<n2;i++)R[i] = A[mid + i];
    L[n1] = R[n2] = SENTINEL;
    int i=0,j=0;
    for(int k=left;k<right;k++){
        cnt++;
        if(L[i] <= R[j]){
            A[k] = L[i++];
        }else{
            A[k] = R[j++];
        }
    }
}

void mergeSort(int A[],int n ,int left,int right){
    if(left+1 < right){
        int mid = (left + right) / 2;
        mergeSort(A,n,left,mid);
        mergeSort(A,n,mid,right);
        merge(A,n,left,mid,right);
    }
}

int main(){
    int A[MAX],n,i;
    cnt = 0;
    cin >> n;
    for(int i=0;i<n;i++)cin >> A[i];
    mergeSort(A,n,0,n);
    for(int i=0;i<n;i++)cout << A[i] << endl;
    cout << cnt;
}
*/