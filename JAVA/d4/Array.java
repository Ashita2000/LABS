import java.util.Scanner;
class Array{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the number of elements to be inserted in array :");
		int n=sc.nextInt();
		int pos=0;

		int []a = new int[100];
		System.out.print("\nEnter "+n+" elements :");
		for(int i=0;i<n;i++)
			a[i]=sc.nextInt();

		System.out.println("\nChoose one from following :");
		System.out.println("1.Display array\n2.Insert an element an element in array\n3.Delete an elemrnt from array\n4.Exit");
		int choice=sc.nextInt();

		while(choice!=4){
			switch(choice){
				case 1:
					System.out.println("\nArray is :\n");
					for(int i=0;i<n;i++)
							System.out.print(a[i]+" ");
							
					break;

				case 2:
					System.out.print("\nEnter the positon where you want insert element :");
					pos=sc.nextInt();
					pos--;

					if(pos>n || pos <0)
						System.out.print("\nInvalid position");
					else{
					System.out.print("\nEnter the element you want to insert :");
					int element=sc.nextInt();
					n++;
					//1 2 3 4 5 *
					for(int i=n-2;i>=pos;i--){
						a[i+1]=a[i];
						}
					a[pos]=element;

					
					System.out.println("\nElement inserted");
					}
					break;

				case 3:

					System.out.println("\nArray is :\n");
					for(int i=0;i<n;i++)
							System.out.print(a[i]+" ");
							
					System.out.print("\nEnter the positon from where you want to delete element :");
					pos=sc.nextInt();
					pos--;
					if(pos>n-1 || pos <0)
						System.out.print("\nInvalid position");
					else{
					//1 2 3 4 5 *
					for(int i=pos;i<n;i++){
						a[i]=a[i+1];
						}
					n--;

					System.out.println("\nElement deleted");
					}
					break;

				case 4:
					break;

				default:
					System.out.println("Enter a valid option");
			}
		System.out.println("\nChoose one from following :");
		System.out.println("1.Display array\n2.Insert an element an element in array\n3.Delete an elemrnt from array\n4.Exit");
		choice=sc.nextInt();
		}

		}
}