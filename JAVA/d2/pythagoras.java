import java.io.*;
class pythagoras{
	public static void main(String args[]) throws IOException{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int a,b,c;
		System.out.println("Sides of triangle :");
		System.out.println("Enter Hypotaneous :");
		a=Integer.parseInt(br.readLine());
		System.out.println("Enter base and perpendicular:");
		b=Integer.parseInt(br.readLine());
		c=Integer.parseInt(br.readLine());

		if(a*a==b*b+c*c)		
		System.out.println("Given triplet is a pythagoras triplet");
		else
		System.out.println("Given triplet is not a pythagoras triplet");
	}
}