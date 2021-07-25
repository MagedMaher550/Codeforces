package a.nauuo.and.votes;

import java.util.Scanner;

public class ANauuoAndVotes {
    
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int x = input.nextInt(); //+
        int y = input.nextInt(); //-
        int z = input.nextInt(); //?        
        
        if(x > y+z)
            System.out.println("+");
        else if(y > x+z)
            System.out.println("-");
        else if(x == y && z == 0)
            System.out.println(0);
        else
            System.out.println("?");
    }
    
}
