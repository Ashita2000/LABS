import java.util.Scanner;

class Shape{
	public void aboutShape(){
		System.out.println("This is shape");
	}
}

class Circle{
	double r;
	public Circle(){
		r=0;
	}
	public Circle(double rad){
		r=rad;
	}
	public void about(){
		System.out.println("This is circular Shape");
	}
}

class Rectangle extends Shape{
	double l,b;
	public Rectangle(){l=b=0.0;}
	public Rectangle(double len,double bre)
	{
		l=len;
		b=bre;
	}

	public void aboutR(){
		System.out.println("This is Rectangular shape");	
	}
}

class Square extends Rectangle{
	public Square(){super();}
	public Square(double len)
	{
		super(len,len);
	}

	public void aboutS(){
		System.out.println("Square is a Rectangle");	
	}
}

class Program3{
	public static void main(String[] args) {
		Square s=new Square(3);
		s.aboutShape();
		s.aboutR();
		s.aboutS();
	}
}
