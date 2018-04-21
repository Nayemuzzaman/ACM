#include<iostream>

using namespace std;

int main(){
    int size,i,j,temp;
       cin>>size;
    int arr[size];


    cout<<"Enter element of array ";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Now sorting mechanism is working \n";

    for(i=0;i<size;i++){

        for(j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"selection sort output\n";
    for(i=0;i<size; i++){
        cout<<arr[i]<<" ";
    }
}
