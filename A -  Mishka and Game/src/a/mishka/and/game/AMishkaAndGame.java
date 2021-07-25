package a.mishka.and.game;

import java.util.Scanner;

public class AMishkaAndGame {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int [][]round = new int[n][2];
        
        int Mishka =0 , Chris = 0;
        
        for(int i=0; i<n; i++)
        {
            round[i][0] = input.nextInt();
            round[i][1] = input.nextInt();
            
            if(round[i][0] > round[i][1])
                Mishka++;
            
            else if(round[i][0] < round[i][1])
                Chris++;
        }
                
        if(Mishka > Chris)
            System.out.println("Mishka");
        
        else if(Mishka < Chris)
            System.out.println("Chris");
        
        else
            System.out.println("Friendship is magic!^^");

    }

}
