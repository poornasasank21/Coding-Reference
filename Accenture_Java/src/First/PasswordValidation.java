package First;

import java.util.Iterator;
import java.util.Scanner;

public class PasswordValidation {
	static int check(char str[],int n)
	{
		if(n<4)return 0;
		if(str[0]>='0' && str[0]<='9')return 0;
		boolean num=false,cap=false,sl=true;
		for (int i = 0; i < str.length; i++) {
			if(str[i]>= 'A' && str[i]<='Z')cap=true;
			if(str[i]>='0' && str[i]<='9')num=true;
			if(str[i]==' ' || str[i]=='/')sl=false;
		}
		if(num && cap && sl)return 1;
		return 0;
	}
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		char str[]=new char[s.length()];
		for (int i = 0; i < str.length; i++) {
			str[i]=s.charAt(i);
		}
		System.out.println(check(str,s.length()));
		sc.close();
	}

}
