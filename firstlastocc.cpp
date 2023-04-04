#include<iostream>
using namespace std;

int firstoccc(int arr[] ,int n, int k)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

int a=-1;
  

    while(s<=e)
    {
        if(arr[mid]==k)
        {
            a=mid;
            e=mid-1;
        }
        else if(k>arr[mid])//right
        {
s=mid+1;
        }
        else if(k<arr[mid])
        {
          e=mid-1;
        }
        mid=s+(e-s)/2;
    }

return a;

}
int lastocc(int arr[] ,int n, int k)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    int a=-1;

    while(s<=e)
    {
        if(arr[mid]==k)
        {
            a=mid;
            s=mid+1;
        }
        else if(k>arr[mid])//right
        {
s=mid+1;
        }
        else if(k<arr[mid])
        {
e=mid-1;
        }
        mid=s+(e-s)/2;
    }
return a;

}


int main()
{
    int even[10]={1,2,3,3,5,6};
    int lastoccc[10]={1,2,3,3,5,6};
    cout<<"First Occurence of 3 is"<<firstocc(even,5,3)<<endl;
     cout<<"Last Occurence of 3 is"<<lastocc(lastoccc,5,3)<<endl;
    return 0;
}