#include<bits/stdc++.h>
using namespace std;

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void qsort(int a[],int l,int u)
{
    int pivot=a[l],next_pvt,left=l,right=u;

    while(l<u)
    {
        while(a[u] >= pivot && (l<u))
            u--;
        if(l!=u)
        {
            a[l]=a[u];
            l++;
        }

        while(a[l] <= pivot && (l<u))
            l++;
        if(l!=u)
        {
            a[u]=a[l];
            u--;
        }
    }

    a[l]=pivot;
    next_pvt=l;
    l=left;
    u=right;

    if(l<next_pvt)
        qsort(a,l,next_pvt-1);
    if(u>next_pvt)
        qsort(a,next_pvt+1,u);
}
int main()
{
    int *arr,n;
    cout<<"\nEnter the size array : "<<endl;
    cin>>n;
    arr=new int[n];
    cout<<"\nEnter the array."<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"\nEntered array is :\n";
    display(arr,n);

    //q sort
    qsort(arr,0,n-1);


    cout<<"\n\nSorted array is (using quick sort) :\n";
    display(arr,n);

    return 0;
}
