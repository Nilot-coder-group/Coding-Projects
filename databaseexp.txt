import java.sql.*;

public class databaseexp{
public static void main(String args[]){
int roll;
String name;
try{
Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
Connection conn=DriverManager.getConnection("jdbc:odbc:Abhijeet","","");
Statement st=conn.createStatement();
String query="select * from reg";
ResultSet rs=st.executeQuery(query);
while(rs.next()){
roll=rs.getInt(1);
name=rs.getString(2);
System.out.println(roll+" "+name);
}
conn.close();
}
catch(Exception e)
{
System.out.println(e.getMessage());
}
}
}