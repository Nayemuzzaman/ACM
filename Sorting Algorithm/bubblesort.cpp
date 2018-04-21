#include<iostream>

using namespace std;
void bubbleSort(int [],int);

int main(){
    int i,j,temp,size;
    cout<<"please given Array size ";
    cin>>size;
    int arr[size];

    cout<<"Input Array: ";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }

    bubbleSort(arr,size);

    cout<<"output of bubble sort: "
     for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}
//Bubble sort mechanism
void bubbleSort(int arr[],int n){
    int i,j,temp;
    //bubble sort working process
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
        }
    }
}
