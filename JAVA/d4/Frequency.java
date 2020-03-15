import java.util.Scanner;
class Frequency{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the number of elements to be inserted in array :");
		int n=sc.nextInt();

		int []a = new int[n];
		int []count=new int[10];
		for(int i=0;i<10;i++)
			count[i]=0;

		System.out.print("\nEnter "+n+" elements (0 to 9) :");
		for(int i=0;i<n;i++){
			a[i]=sc.nextInt();
			count[a[i]]++;
		}

		System.out.println("\nFrequency of numbers :");
		System.out.println("Number  Frequency");

		for(int i=0;i<10;i++)
			if(count[i]!=0)      //Number  Frequency
			System.out.println(i+"     : "+count[i]);

	}
}
