package a.brain.s.photo;

import java.util.Scanner;

public class ABrainSPhoto {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        
        char color[][] = new char[n][m];
        boolean x = true;
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                color[i][j] = input.next().charAt(0);
                if(color[i][j] == 'C' || color[i][j] == 'Y' || color[i][j] == 'M')
                    x = false;
            }
        }
        
        if(x)
            System.out.println("#Black&White");
        else
            System.out.println("#Color");
    }

}
