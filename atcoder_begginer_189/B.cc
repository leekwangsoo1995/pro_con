#include<iostream>
using namespace std;


int n,x;
int num[1000];
int per[1000];
double amount;
double tot_amount;

int main(){
    cin >> n;
    cin >> x;

    amount = 0;
    tot_amount = 0;
    for(int i=0;i<n;i++){
        cin >> num[i];
        cin >> per[i];
    }

    for(int i=0;i<n;i++){
        if(per[i] == 0){
            amount = 0;
        }else{
            amount = (double)num[i] * ((double)per[i] / 100);
        }
        tot_amount = (double)amount + tot_amount;
        if((double)x < tot_amount){
            i = i +1; 
            cout << i;
            return 0;
        }
    }

    cout << "-1";

    return 0;

}