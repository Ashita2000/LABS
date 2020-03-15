import java.io.*;
import java.util.*;
class PascalTriangle{
	public static void main (String[] args) throws IOException{ 
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the number of row of pascal triangle :");
		int n =sc.nextInt();

int []a=new int[n];
a[0]=0;
a[1]=1;
int []b=new int[n];
int [] temp;
 
for (int i = 0; i < n; i++)
{ 
	for(int k=n-i;k>1;k--)
		System.out.print(" ");
	// No of terms in row equal to line number 
	for (int j = 0; j <= i; j++) 
	{ 
	// First and last
	if (i == j || j == 0) 
		b[j] = 1; 
	else // Other values 
		b[j] = a[j-1] + a[j]; 
	System.out.print(b[j]+" "); 
	} 
	System.out.println(""); 

	temp=a;
	a=b;
	b=temp;
} 
} 
} 
