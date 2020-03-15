#include<iostream>
using namespace std;

void display(int arr[],int n)
{
    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}


void upheapify(int *a,int n){
    int par= n/2;
    while((a[n]>a[par]) && par>=1){
        swap(a[n],a[par]);
        n=par;
        par= n/2;
    }
}

void downHeapfy(int *a,int ind=0, int n=0){
    //int ind=0;
    if(a[ind]>=a[2*ind] && a[ind]>=a[2*ind+1])
        return;
    if(a[ind]<a[2*ind]){
        swap(a[ind],a[2*ind]);
        downHeapfy(a,2*ind,n);
    }
    else{
        if(a[ind]<a[2*ind+1]){
        swap(a[ind],a[2*ind+1]);
        downHeapfy(a,2*ind+1,n);
    }
    }
}

void delMod(int *a,int ind, int n){
    swap(a[ind],a[n]);
    downHeapfy(a,n-1);

}

void heapSort(int *a,int n){
    for(int i=2;i<=n;i++)
        upheapify(a,i);

    for(int i=n;i<=n;i--)
        delMod(a,0,n);
}

int main(){
    int *arr,n;
    cout<<"\nEnter the size array : "<<endl;
    cin>>n;
    arr=new int[n+1];
    arr[0]=-1;
    cout<<"\nEnter the array."<<endl;
    for(int i=1;i<=n;i++)
        cin>>arr[i];

    cout<<"\nEntered array is :\n";
    display(arr,n);

    heapSort(arr,n);

    cout<<"\nSorted array is :\n";
    display(arr,n);

    return 0;
}
