package a.pashmak.and.garden;

import java.util.Scanner;

public class APashmakAndGarden {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int x1 = input.nextInt();
        int y1 = input.nextInt();
        int x2 = input.nextInt();
        int y2 = input.nextInt();
        
        if(x1 != x2 && y1 != y2 && Math.abs((double)(y2-y1)) != Math.abs((double)(x2-x1)))
            System.out.println(-1);
        
        else if(x1 == x2)
            System.out.print((x1+y2-y1) + " " + y1 + " " + (x2+y2-y1) + " " + y2 +  "\n");
        
        else if(y1 == y2)
            System.out.print(x1 + " " + (y1+x2-x1) + " " + x2 + " " + (y2+x2-x1) + "\n");

        else if(Math.abs((double)(x2-x1)) == Math.abs((double)(y2-y1)))
            System.out.print(x1 + " " + y2 + " " + x2 + " " + y1 + "\n");
    }

}
