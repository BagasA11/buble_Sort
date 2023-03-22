// judul: buble sort
//author: bagas
#include<iostream>
using namespace std;
// kamus global
int n = 3;

void input(int arr[], int i){
int x = 0;
while(x<i){
    cout<<"masukkan data ke-"<<x+1<<" ";cin>>arr[x];
    cout<<endl<<"========="<<endl;
    x++;
}
}

void out(int arr[], int i){
int x = 0;
while(x<i){
    cout<<x+1<<". "<<arr[x]<<endl;
    x++;
}

}

void swapper(int &x, int &y){
int z; // temp variable
z = x;
x = y;
y = z;
//cout<<x<<" "<<y;
}


void buble(int ar[], int N){
int i = 0;
int k = 1;
while(i<N){
    int j = 0;

    while(j<N-k){

        if(ar[j]>ar[j+1]){
            swapper(ar[j], ar[j+1]);
        }
        j++;
    }
    k++;
    i++;
}

}

int main(){
cout<<"masukkan jumlah data : ";cin>>n;
int nilai[n];
input(nilai, n);
buble(nilai, n);
out(nilai, n);
}
