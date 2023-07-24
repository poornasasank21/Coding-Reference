package First;

import java.util.Scanner;

public class String_Word_Reverse {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		//System.out.println("hi");
		String s="hi this is java program";
		String ans="";
		int l=s.length(),r=s.length();r--;l--;
		while(l>=0)
		{
			if(l==0)
			{
				for(int i=l;i<=r;i++)ans+=s.charAt(i);
			}
			if(s.charAt(l)!=' ')
			{
				l--;
			}
			else 
			{
				l++;
				for(int i=l;i<=r;i++)ans+=s.charAt(i);
				ans+=' ';
				l=l-2;r=l;
			}
		}
		System.out.println(ans);
	}


}
