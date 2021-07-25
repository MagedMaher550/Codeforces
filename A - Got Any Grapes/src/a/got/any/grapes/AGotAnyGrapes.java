package a.got.any.grapes;

import java.util.Scanner;

public class AGotAnyGrapes {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int y = input.nextInt();
        int z = input.nextInt();
        int a = input.nextInt();
        int b = input.nextInt();
        int c = input.nextInt();
        
        int aDash = a-x;
        
        if(aDash < 0)
            System.out.println("NO");
        
        else
        {
            int ab = aDash + b;
            int abDash = ab - y;
            
            if(abDash < 0)
                System.out.println("NO");
            
            else
            {
                int abc = abDash + c;
                
                if(abc < z)
                    System.out.println("NO");
                else
                    System.out.println("YES");
            }
        }
        
        System.out.println();
    }

}
