#include<iostream>
using namespace std;
void bubblesort(int n,int arr[]){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
              swap(arr[j],arr[j+1]);
            }
        }
    }
  
}
int main(){ 
    int n,arr[50];
    cout<<"enter the size of array=";
    cin>>n;
    cout<<"enter the element of array=";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubblesort(n,arr);
    cout<<"sorted array is=";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}