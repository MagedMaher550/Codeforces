package b.buttons;

import java.util.Scanner;

public class BButtons {

    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        
        int j = 1 , k = 0;
        
        /*
            Every iteration gets the posibilities of each sequence except the last one, that's why i'm adding these posibilities to n.
        */
        
        for(int i=1; i<n; i++)
        {
            k += i*(n-j);
            j++;
        }
        
        System.out.println(k+n);
    }

}
