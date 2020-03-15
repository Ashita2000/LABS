import java.io.*;
class 3.PascalTriangle{
	public static void main (String[] args) throws IOException{ 
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.print("Enter the number of row of pascal triangle");
		int n = Integer.parseInt(br.readLine()); 


int[][] arr = new int[n][n]; 


for (int i = 0; i < n; i++)
{ 
	for(int k=n-i;k>1;k--)
		System.out.print(" ");
	
	for (int j = 0; j <= i; j++) 
	{ 
	
	if (i == j || j == 0) 
		arr[i][j] = 1; 
	else 
		arr[i][j] = arr[i-1][j-1] + arr[i-1][j]; 
	System.out.print(arr[i][j]+" "); 
	} 
	System.out.println(""); 
} 
} 
} 
