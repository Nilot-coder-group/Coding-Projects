
import java.awt.*;
import java.applet.*;
import java.awt.event.*;
public class myapplet extends Applet implements ActionListener
{
	TextField t1=new TextField(10);
	TextField t2=new TextField(10);
	TextField t3=new TextField(10);
	Label l1=new Label("First Number= ");	
	Label l2=new Label("Second Number= ");
	Label l3=new Label("Result is = ");
	Button b1=new Button("Sum");

public void init()
	{
	add(l1);
	add(t1);
	add(l2);
	add(t2);
	add(l3);
	add(t3);
	add(b1);
	b1.addActionListener(this);
}
public void actionPerformed(ActionEvent e)
{
	int a=Integer.parseInt(t1.getText());
	int b=Integer.parseInt(t2.getText());
	int c=a+b;
	t3.setText(""+c);
}
}
	
	
	