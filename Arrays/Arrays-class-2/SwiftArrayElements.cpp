#include<iostream>
using namespace std;
void swiftright(int arr[],int n){
    //step 1 create temp variable add last value
    int temp=arr[n-1];

    //step 2
    //swift arr[i]=arr[i-1]
    for(int i=n-1;i>=1;i--){
        arr[i]=arr[i-1];
    }

    // step 3 cppy temp value into 0 index
    arr[0]=temp;

}


void swiftleft(int arr[],int n){
    //step 1 create temp variable add last value
    int temp=arr[0];

    //step 2
    //swift arr[i]=arr[i-1]
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }

    // step 3 cppy temp value into 0 index
    arr[n-1]=temp;

}
int main()
{
    int arr[]={
        10,20,30,40,50,60
    };
    int n=6;
    // swiftright(arr,n);
    swiftleft(arr,n);
    //print array 
    for(int i=0 ; i<n ; i++){
        cout<<arr[i];
    }
    return 0;
}