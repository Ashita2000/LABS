package p2;
import p1.Protected1;

public class Protected2 extends Protected1{
	int varDefault3=8;
	public int varPublic3=9;
	protected int varProtected3=10;
	private int varPrivate3=11;
	public Protected2(){
		System.out.println("Inside Protected2 Class constructor");
		System.out.println("varDefault3 :"+varDefault3);
		System.out.println("varPublic3 :"+varPublic3);
		System.out.println("varProtected3 :"+varProtected3);
		System.out.println("varProtected3 :"+varProtected3);
		System.out.println("Ending of Protected2 Class constructor");
	}
}

class NotDerived{
	public NotDerived(){
		System.out.println("Inside Protected Class constructor");
		System.out.println("Ending of Protected Class constructor");
	}
}