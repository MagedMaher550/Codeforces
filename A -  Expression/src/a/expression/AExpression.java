package a.expression;

import java.util.Scanner;

public class AExpression {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        int c = input.nextInt();
        
        if(a==1&&c!=1)
            System.out.println((a+b)*c);
        
        else if(c==1&&a!=1)
            System.out.println((b+c)*a);
        
        else if(a==1&&c==1)
            System.out.println(a+b+c);
        
        else if(a!=1&&c!=1&&b!=1)
            System.out.println(a*b*c);
        
        else if(b==1)
	{
		if(a>c&&a!=1&&c!=1)
                    System.out.println((b+c)*a);
                else if(c>a&&a!=1&&c!=1)
                    System.out.println((b+a)*c);
                else if(a==c&&a!=1)
                    System.out.println((a+b)*c);	
	}
        
    }

}
