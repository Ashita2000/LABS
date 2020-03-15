package p1;

public class Protected1{
	int varDefault=0;
	public int varPublic=1;
	protected int varProtected=2;
	private int varPrivate=3;
	public Protected1(){
		System.out.println("Inside Protected1 Class constructor");
		System.out.println("varDefault :"+varDefault);
		System.out.println("varPublic :"+varPublic);
		System.out.println("varProtected :"+varProtected);
		System.out.println("varPrivate :"+varPrivate);
		System.out.println("Ending of Protected1 Class constructor");
	}
}

class Derived extends Protected1{
	public Derived(){
		System.out.println("Inside Derived Class constructor");
		System.out.println("varDefault :"+varDefault);
		System.out.println("varPublic :"+varPublic);
		System.out.println("varProtected :"+varProtected);
		System.out.println("Ending of Derived Class constructor");
	}
}

class SamePackage{
	int varDefault2=4;
	public int varPublic2=5;
	protected int varProtected2=6;
	private int varPrivate2=7;
	public SamePackage(){
		System.out.println("Inside SamePackage Class constructor");
		System.out.println("varDefault2 :"+varDefault2);
		System.out.println("varPublic2 :"+varPublic2);
		System.out.println("varProtected2 :"+varProtected2);
		System.out.println("varPrivate2 :"+varPrivate2);
		System.out.println("Ending of SamePackage Class constructor");
	}
}