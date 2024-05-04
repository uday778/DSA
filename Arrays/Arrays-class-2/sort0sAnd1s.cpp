#include<iostream>
using namespace std;
void sortZeroOne(int arr[],int n){
    int countZero=0;
    int countOne=0;
    // step 0's and 1's 
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            countZero++;
        }
        if(arr[i]== 1){
            countOne++;
        }
    }
    // //step  2 -> place all to two zero's first
    // int i;
    // for( i=0;i<countZero;i++){
    //     arr[i]=0;
    // };
    // for(int j=i;j<n;j++){
    //     arr[j]=1;
    // };


    //eeasy way
    int index=0;
    while(countZero--){
        arr[index]=0;
        index++;
    }
    while(countOne--){
        arr[index]=1;
        index++;
    }
}
int main()
{
    //counting
    //2 pointer approach
    //sort() 


    int arr[]={
        0,1,1,0,0,1,0,1,0,1,1,0,0,1
    };
    int n=14;
    sortZeroOne(arr,n);
    // printing the array
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    

    return 0;
}