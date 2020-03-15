interface i1{
	int var1=1;
	public void show1();
}

interface i2{
	public void show2();
}

class c implements i1,i2{
	public void show1(){
		System.out.println("var1 ="+var1);
	}
	public void show2(){
		System.out.println("Function of Interface 2");
	}
}

public class MultipleInheritance {
	public static void main(String[] args) {
		c obj=new c();
		c.show2();
		c.show1();
	}
}