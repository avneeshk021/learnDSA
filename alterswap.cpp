//swap alternate element in a array

#include<iostream>
using namespace std;
void swapalter(int arr[], int n)
{
    int i=1;
    while (i<n)

    {
        int temp =arr[i];
        arr[i] =arr [i-1];
        arr[i-1] = temp;
        i =i+2;
    }
    
}
void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // delete [] arr;
}

    int main()
{
    int arr[6]={1,2,3,4,5,6};
    int brr[5]={2,3,4,5,6};
    swapalter(arr,6);
    swapalter(brr,5);
    printArray(arr,6);
    printArray(brr,5);

    return 0;
    
 }