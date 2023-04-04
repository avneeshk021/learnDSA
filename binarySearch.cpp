#include<iostream>
using namespace std;
int binarySearch(int arr[],int size ,int key)
{
    int start=0;
    int end=size-1;

    int mid =(start + end)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        //Go to Right side
        if(key>arr[mid])
        {
start=mid+1;
        }
        else
        {
end = mid-1;
        }
        mid=(start+end)/2;
    }
return -1;
}
int main()
{
    int even[6]={2,4,6,8,10,12};
    int odd[5]={3,4,6,8,9};

int evenindex = binarySearch(even,6,12);

cout<<"evenIndex of 12 is : "<<evenindex<<endl;
int oddindex = binarySearch(odd,5,12);
cout<<"oddIndex of 9 is : "<<oddindex<<endl;


    return 0;
}