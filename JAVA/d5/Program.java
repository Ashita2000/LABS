class Parent
{


public void showp()
{
System.out.println("this is parent class");

}
}
class Child extends Parent
{


public void showc()
{
System.out.println("this is child class");
}
}
class Program
{
public static void main(String args[])
{
Parent p=new Parent();
Child c=new Child();
p.showp();
c.showc();
c.showp();
}
}