import java.io.*;
class largest{
	public static void main(String args[]) throws IOException{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int a,b;
		System.out.print("Enter two numbers :");
		a=Integer.parseInt(br.readLine());
		b=Integer.parseInt(br.readLine());
		
		if(a==b)
		System.out.println("\nTwo numbers are equal");
		else if(a>b)
		System.out.println("\n"+a+" is greater");
		else
		System.out.println("\n"+b+" is greater");
	}
}