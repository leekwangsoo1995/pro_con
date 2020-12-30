#include<iostream>
using namespace std;
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