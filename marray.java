import java.io.*;
class marray
{
	public static void main(String[] args)throws IOException
	{
		BufferedReader data=new BufferedReader(new InputStreamReader(System.in));
		int i,j;
		int [][] no=new int[3][3];
		System.out.println("Enter the elements=");
		for(i=0;i<3;i++)
			
			for (j=0;j<3;j++) 
				
				no[i][j]=Integer.parseInt(data.readLine());

			System.out.println("Entered matrix is=");
			for(i=0;i<3;i++)
			{
				for (j=0;j<3;j++)
				{
					System.out.print(no[i][j]+"  ");
				}
					System.out.println("");	
			}

	}
}