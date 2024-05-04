#include<iostream>
using namespace std;

int main()
{
    // int arr[]={10,20,30};
    // int n=3;
    // for(int i=0; i<n; i++){
    //     for(int j=0;j<n;j++){
    //         cout<<arr[i]<<"  "<<arr[j]<<endl;
    //     }
    // }

    int arr[]={1,2,3,4};
    int n=4;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int l=0; l<n; l++){
                cout<<arr[i]<<" "<<arr[j] <<" "<<arr[l]<<endl;
            }
        }
    }
    return 0;
}