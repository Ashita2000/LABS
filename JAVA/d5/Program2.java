class Rectangle
{
double l,b;
public Rectangle(){}
public Rectangle(double len,double bre)
{
l=len;
b=bre;
}
public void perimeter()
{
System.out.println("Perimeter is :"+2*(l+b));
}
public void area()
{
System.out.println("Area is :"+l*b);
}
}
class Square extends Rectangle
{
public Square()
{
l=b=0.0;
}
public Square(double len)
{
super(len,len);
}
}
class Program2
{
public static void main(String args[])
{
Rectangle r=new Rectangle(3.0,4.0);
r.perimeter();
r.area();
Square s=new Square(7.0);
s.perimeter();
s.area();
}
}