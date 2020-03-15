import java.util.*;
import java.io.*;

class pythagoras{
  public static void main(String[] args) {
    System.out.println("Enter the sides of the triangle");
    Scanner s1=new Scanner(System.in);
    int a=s1.nextInt();
    int b=s1.nextInt();
    int c=s1.nextInt();
    if(a>0&&b>0&&c>0){

    if(a*a+b*b==c*c)
    System.out.println("This is a pythogorean triplet with hypotenuse- "+c);
    else if(a*a+c*c==b*b)
    System.out.println("This is a pythogorean triplet with hypotenuse- "+b);
    else if(b*b+c*c==a*a)
    System.out.println("This is a pythogorean triplet with hypotenuse- "+a);
    else System.out.println("This is not a pythagorean triplet");}

    else System.out.println("Invalid Entries");
  }
}
