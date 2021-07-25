package a.little.pony.and.crystal.mine;

import java.util.Scanner;

public class ALittlePonyAndCrystalMine {

public static void print(int n)
{
    for(int i=0; i<n; i++)
        System.out.print("*");
}    
    
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int row , col , k;
        
	for(row=1; row<=n/2+1; row++)
	{
		for(k=n/2+1-row; k>0; k--)
                    System.out.print("*");
                
		for(col=1; col<=2*row-1; col++)
                    System.out.print("D");
                
		for(k=n/2+1-row; k>0; k--)
                    System.out.print("*");
            
                System.out.println("");
	}
        
	for(row=1; row<=n/2; row++)
	{
		for(k=1; k<=row; k++)
                    System.out.print("*");
                
		for(col=1; col<=(2*((n/2)-row)+1); col++)
                    System.out.print("D");
                
		for(k=1; k<=row; k++)
                    System.out.print("*");
            
                System.out.println("");
	}
        
    }
    
}
