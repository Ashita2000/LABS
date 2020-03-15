import java.util.Scanner;
class OddEven{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the number of elements to be inserted in array :");
		int n=sc.nextInt();

		int []a = new int[n];
		System.out.print("\nEnter "+n+" elements :");
		for(int i=0;i<n;i++)
			a[i]=sc.nextInt();

		int []odd=new int [n];
		int []even=new int [n];
		int o=0,e=0;

		for(int i=0;i<n;i++){
			if(a[i]%2==1)
				odd[o++]=a[i];
			else
				even[e++]=a[i];
		}

		System.out.println("\nOdd elements are");
		for(int i=0;i<o;i++)
			System.out.print(odd[i]+" ");

		System.out.println("\nEven elements are");
		for(int i=0;i<e;i++)
			System.out.print(even[i]+" ");
	}
}