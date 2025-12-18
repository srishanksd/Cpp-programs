#include<bits/stdc++.h>
using namespace std;

void insertion(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while (j>0&&arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }       
    }
}
int main(){
    int arr[5]={5,4,3,2,1};
    int n=5;
    insertion(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}