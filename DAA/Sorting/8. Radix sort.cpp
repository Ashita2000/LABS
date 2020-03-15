#include<bits/stdc++.h>
using namespace std;

/*int getmax(int a[], int n)
{
  int max = a[0];
  for (int x=1; x<n; x++)
    if (a[x] > max)
      max = a[x];
  return max;
}*/

// radix used is 10
void CountSort(int a[], int n, int exp)
{
  int result[n], i, count[10] = {0};

  for (i =0; i <n; i++)
    count[(a[i] / exp) % 10]++;


  for (i =1; i<10; i++)
    count[i] += count[i-1];

  // Resultant output array
  for (i =n-1; i>= 0; i--)
  {
    result[count[(a[i] / exp) % 10] - 1] = a[i];
    count[(a[i] / exp) % 10]--;
  }
  for (i =0; i <n; i++)
    a[i] = result[i];
}

void radixsort(int a[], int n)
{
  int exp, i;
  //i = getmax(a, n);
  i=*max_element(a,a+n);
  for (exp = 1; i/exp > 0; exp *= 10)
    CountSort(a, n, exp);
}

int main()
{
  int n;
  cout<<" Enter the number of elements to be sorted: ";
  cin>>n;
    int a[n];

  cout<<"\n Enter the "<<n<<" elements: ";
  for(int i =0; i <n; i++)
  {
    cin>>a[i];
  }
    radixsort(a, n);

  cout<<"\nSorted array:\n";
  for (int i = 0; i < n; i++)
    cout<<a[i]<<" -> ";
  return 0;
}
