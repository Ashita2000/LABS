import java.util.Scanner;

class circle{
	private float r,d,c,a;
	final float PI=3.14159f;

	public void getData(float input){
		r=input;
	}

	public void print(){
		d=2*r;
		c=2*PI*r;
		a=PI*r*r;
		System.out.println("\nRadius :"+r);
		System.out.println("Diameter :"+d);
		System.out.println("Circumference :"+c);
		System.out.println("Area :"+a);
	}
}

class Prog2{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		circle c=new circle();
		System.out.print("Enter the radius of circle :");
		float input=sc.nextFloat();
		c.getData(input);
		c.print();

	}
}