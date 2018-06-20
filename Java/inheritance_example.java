import java.io.*;
class A
{
int a,b,c;
	public void display()
	{
		c = a+b;
		System.out.println("the sum is equal to: " + c);
	}
}
class B extends A
{
int a,b,c;
	public void display_b()
	{
		c = a+b;
		System.out.println("the sum is equal to: " + c);
	}
}
class inheritance_example
{
	public static void main(String args[])
	{
		A ob1 = new A();
		B ob2 = new B();
		ob1.a=5;
		ob1.b=6;
		ob1.display();
		ob2.a=11;
		ob2.b=15;
		ob2.display_b();
	}
}