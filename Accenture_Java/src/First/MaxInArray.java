package First;

import java.util.ArrayList;
import java.util.Scanner;

public class MaxInArray {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		ArrayList<Integer> list=new ArrayList<>();
		int n=sc.nextInt();
		while(n-->0)
			list.add(sc.nextInt());
		int i=0,m=list.get(i);
		for(int k=0;k<list.size();k++)
		{
			if(m<list.get(k))
			{
				i=k;m=list.get(i);
			}
		}
		System.out.println(m);System.out.println();
		System.out.println(i);
		
		
	}

}
