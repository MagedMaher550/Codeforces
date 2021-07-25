package a.chunga.changa;

import java.util.Scanner;

public class AChungaChanga {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        long x = input.nextLong();
        long y = input.nextLong();
        long z = input.nextLong();
        long tmpX , tmpY , count = 0;
        
        if(x < z && y < z && x+y < z)
            System.out.println(0 + " " + 0);
        
        else if(x%z == 0 || y%z == 0)
        {
            System.out.print(x/z + y/z + " ");
            System.out.println(count);
        }
        
        else
        {
            tmpX = x;
            tmpY = y;
            
            if(x%z >= y%z)
            {
                if( (y-(z - tmpX%z)) / z == y / z)
                {
                    x += z - tmpX%z;
                    y -= z - tmpX%z;
                    count += z - tmpX%z;
                }
            }
            
            else
            {
                if( (x- (z - tmpY%z)) / z == x / z )
                {
                    y += z - tmpY%z;
                    x -= z - tmpY%z;
                    count += z - tmpY%z;
                }
            }
            
            System.out.print(x/z + y/z + " ");
            System.out.println(count);            
        }
            
        
    }
    
}
