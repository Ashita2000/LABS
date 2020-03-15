import java.io.*;
class circle{
	public static void main(String args[]) throws IOException
{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		//DataInputStream in=new DataInputStream(System.in);
		float r=0.0f;

			System.out.print("Enter radius of circle :");
			r=Float.parseFloat(br.readLine());
		
		
		System.out.println("Diameter of circle :"+2*r);
			
		System.out.println("Circumference of circle :"+3.1415*r*r);
		
	}
}