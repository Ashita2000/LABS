class c1{
	public static void main(String[] args) {
		System.out.println(3+4+"5");
		System.out.println("5"+3+4);
	}
}

public class test{


	public static void main(String[] args) {

		c1 c=new c1();
		
		int x=1,y=2;
		System.out.println(x +"  "+y);
		swap(x,y);
		System.out.println(x +"  "+y);

		System.out.println(3+4+"5");
		System.out.println("5"+3+4);
	}

	public static void swap(int x,int y){
		x=x+y;
		y=x-y;
		x=x-y;}
	
}