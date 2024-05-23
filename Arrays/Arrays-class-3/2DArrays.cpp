#include <iostream>
#include <limits>
#include <vector>
#include <limits.h>
using namespace std;
void printArray(int arr[3][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
}
void colwiseprint(int arr[3][4], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[j][i] << "  ";
        }
        cout << endl;
    }
}
bool   findTarget(int arr[3][4], int row, int col, int target)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                // return true
                return true;
            }
        }
    }
    // when it reached to this line
    // all elements is checked
    /// target nahi mila
    // return false
    return false;
}

int findmax(int arr[3][4],int row, int col){
    int maxans=INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j]>maxans){
                maxans=arr[i][j];
            }
        }
    }
    return maxans;
}
int findmin(int arr[3][4],int row, int col){
    int minans=INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j]<minans){
                minans=arr[i][j];
            }
        }
    }
    return minans;
}
void rowwiseSum(int arr[3][4],int row,int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
}
void colwiseSum(int arr[3][4],int row,int col){
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum=sum+arr[j][i];
        }
        cout<<sum<<endl;
    }
}
void transpose(int arr[4][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=1;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}
int main()
{
    // create 2D array
    // int arr[3][4];

    // initialize
    //  int arr[3][4]={
    //      {1,2,3,4},
    //      {5,6,7,8},
    //      {9,10,11,12},
    //  };

    // int brr[]={1,2,3,4};
    // int crr[3][]={
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12},
    // };
    // int drr[][4]={
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12},
    // };

    // int arr[3][4]={
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12},
    // };
    // int row=3;
    // int col=4;
    // printArray(arr,row,col);
    // colwiseprint(arr,row,col);

    // input
    //  int arr[3][3];
    //  int row=3;
    //  int col=3;
    //  for (int i = 0; i < row; i++)
    //  {
    //      /* code */
    //      for(int j=0;j<col;j++){
    //          cout<<"Enter the input for row index"<<i<<"column index"<<j<<endl;
    //          cin>>arr[i][j];
    //      }
    //  }






    // int arr[4][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 70, 8},
    //     {9, 10, 11, 12},
    //     {13,14,15,16},
    // };
    // int row = 4;
    // int col = 4;
    // cout<<"printing before transpose"<<endl;
    // printArray(arr,row,col);
    // cout<<"doing transpose"<<endl;
    // transpose(arr,row,col);
    // cout<<"printing after transpose"<<endl;
    // printArray(arr,row,col);




    // rowwiseSum(arr,row,col);
    // colwiseSum(arr,row,col);
    // cout<<"printing the max no : "<<findmax(arr,row,col)<<endl;
    // cout<<"printing the min no : "<<findmin(arr,row,col)<<endl;
    // int target = 11;
    // cout << "found or not  : "<<findTarget(arr, row, col, target) << endl;



// /2D vectors 
    // int arr[5];
    // vector<int>arr;
    // // vector<int>arr(5);
    // // vector<int>arr(5,101);
    // cout<<" Sizes of vector"<<v.size();

    // cout<<endl<<"printing vector"<<endl;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;


    //@D Vector array
    // vector<vector<int>>arr(5,vector<int>(10,0));
    // //row size -> arr.sizze();
    // for(int i=0;i<arr.size();i++){
    //     for(int j=0;j<arr[i].size();j++){
    //         cout<<arr[i][j]<<"  ";
    //     }
    //     cout<<endl;
    // }


//jagged array
vector<vector<int>>brr;
vector<int>vec1(10,0);
vector<int>vec2(5,1);
vector<int>vec3(7,0);
vector<int>vec4(20,1);

brr.push_back(vec1);
brr.push_back(vec2);
brr.push_back(vec3);
brr.push_back(vec4);
for(int i=0;i<brr.size();i++){
        for(int j=0;j<brr[i].size();j++){
            cout<<brr[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}