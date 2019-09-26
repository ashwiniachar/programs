package ashwini;

	import java.io.*;
	import java.util.Scanner;
	public class Hackathon{

		public static void main(String[] args) {
			// TODO Auto-generated method stub
	String str;
	int count=0;
	
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter a string");
	str=sc.nextLine();
	int[] a;
	a=new int[100];
	for(int j=0;j<=9;j++)
	{
		a[j]=j;	
	}

	
	for(int i=0;i<str.length()-1;i++)
	{
		for(int j=0;j<=9;j++)
		{
		int r=i+1;
			char w=str.charAt(i);
			char m=str.charAt(r);
			
			int q=Character.getNumericValue(w);
			if(q==a[j]&&m!='9'&&m!='8'&&m!='7'&&m!='6'&&m!='5'&&m!='4'&&m!='3'&&m!='2'&&m!='1'&&m!='0')
			{
			count=count+1;
			}
			
		}
	}
	for(int i=0;i<=9;i++)
	{
		char e1=str.charAt(str.length()-1);
	int e=Character.getNumericValue(e1);
	if(e==a[i])
	{
	count=count+1;	
	}
	}	
	System.out.println("numbers="+count);	
		
		}
}



