//package sorting;

import java.util.Scanner;

class MergeSort{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);

		System.out.print("Enter size of array :");
		int n;
		n=sc.nextInt();
		int []a=new int [n];

		System.out.print("\n Enter "+n+" elements :");
		for(int i=0;i<n;i++){
			a[i]=sc.nextInt();
		}
		
		sort(a,0,n-1);
		System.out.println("\nSorted array is :");
		
		for(int i:a)
			System.out.print(i+" -> ");
		

	}

	static void sort(int []a,int l,int h){
		if(l>=h)
			return;
		int mid=(l+h)/2;
		sort(a,l,mid);
		sort(a,mid+1,h);

		merge(a,l,mid,h);
	}

	static void merge(int []a,int l,int mid,int h){
		int temp[]=new int [100];
		int i,j,k;
		i=k=0;
		j=mid+1;

		while(i<=mid && j<=h){
			if(a[l]<a[j])
				temp[k++]=a[i++];
			else temp[k++]=a[j++];
		}

		while(i<=mid)
			temp[k++]=a[i++];

		while(j<=h)
			temp[k++]=a[j++];

		for(k=0;k<(h-l+1);k++ )
			a[k]=temp[k];
	}

	
}