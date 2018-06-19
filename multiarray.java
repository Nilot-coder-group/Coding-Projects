import java.io.*;
class multiarray
{
	public static void main(String[] args) throws IOException
	{
			BufferedReader data = new BufferedReader(new InputStreamReader(System.in));
			int i,j;
			int[][] a = new int[3][3];
			int[][] b = new int[3][3];
			int[][] c = new int[3][3];
			System.out.println("enter the first matrix elements");
			for(i=0;i<3;i++)
			
				for(j=0;j<3;j++)
				
					a[i][j]=Integer.parseInt(data.readLine());
				System.out.println("enter the second matrix elements");
				for(i=0;i<3;i++)
			
				for(j=0;j<3;j++)
				
					b[i][j]=Integer.parseInt(data.readLine());
				for(i=0;i<3;i++)
				{			
				for(j=0;j<3;j++)
				{				
					c[i][j]=a[i][j]+b[i][j];
				}
			}

				    System.out.println("the addition matrix is: ");
				    for(i=0;i<3;i++)
				    {
				    	for(j=0;j<3;j++)
				    	{
				    		System.out.print(c[i][j] + " ");

				    	}
				    	System.out.println("");
				    }

				
			
	}
}