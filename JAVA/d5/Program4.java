class Area{
	public void area(double l,double b){
		System.out.println("Area of triangle is "+ l*b/2);
	}


public void area(double r){
		System.out.println("Area of circle is "+ 3.14159*r*r);
	}
}

class Program4{
	public static void main(String[] args) {
		Area a=new Area();
		a.area(3,5);
		a.area(1.2);
	}
}