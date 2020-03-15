import java.util.Scanner;
class TriangularMatrix{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the order of (n*n) sqaure matrix :");
		int n=sc.nextInt();

		int [][]a = new int[n][n];
		for(int i=0;i<n;i++)
			a[i]=new int[n];

		System.out.println("\nEnter the elements of matrix in row-major order :");
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++){
			a[i][j]=sc.nextInt();
			;
		}

		System.out.println("\nEntered Matrix is :\n");
					for(int i=0;i<n;i++){
						for(int j=0;j<n;j++){
							
								System.out.print(a[i][j]+" ");
							}
							System.out.println("");	
						}

		System.out.println("\nChoose one from following :");
		System.out.println("1.Display Upper triangular matrix\n2.Display Lower triangular matrix\n3. Exit");
		int choice=sc.nextInt();

		do{
			switch(choice){
				case 1:
					System.out.println("\nUpper Triangular Matrix is :\n");
					for(int i=0;i<n;i++){
						for(int j=0;j<n;j++){
							if(i>j)
								System.out.print("0 ");
							else
								System.out.print(a[i][j]+" ");
							}
							System.out.println("");	
						}
					break;
				case 2:
					System.out.println("\nLower Triangular Matrix is :\n");
					for(int i=0;i<n;i++){
						for(int j=0;j<n;j++){
							if(i<j)
								System.out.print("0 ");
							else
								System.out.print(a[i][j]+" ");
							}
							System.out.println("");	
						}
					break;

				case 3:
					break;

				default:
					System.out.println("Enter a valid option");
			}
			System.out.println("\nChoose one from following :");
		System.out.println("1.Display Upper triangular matrix\n2.Display Lower triangular matrix\n3. Exit");
		choice=sc.nextInt();
		}while(choice!=3);

		
	}
}
