package p3;
import p2.*;

class Usep1Andp2{
	public static void main(String[] args) {
		//Protected1 p=new Protected1();
		Derived d=new Derived();
		//SamePackage sp=new SamePackage();
		Protected2 p2=new Protected2();
		NotDerived nd=new NotDerived();
	}
}