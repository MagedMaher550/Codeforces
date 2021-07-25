package a.beautiful.year;

import java.util.Scanner;

public class ABeautifulYear {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        
        int a , b , c , d;
        
        for(n=n+1; n<9100; n++)
        {
            a = n%10;
            b = (n/10)%10;
            c = (n/100)%10;
            d = (n/1000)%10;
            
            if(a!=b && a!=c  && a!=d && b!=c && b!=d && c!=d)
            {
                System.out.println(n);
                break;
            }
                
        }
        
    }

}
