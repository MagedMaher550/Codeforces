package a.gukiz.and.contest;

import java.util.Scanner;

public class AGukiZAndContest {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int []pos  = new int[n];
        int []Npos = new int[n];
        
        for(int i=0; i<n; i++)
            pos[i] = input.nextInt();
        
        int count;
        for(int i=0; i<n; i++)
        {
            count = 1;
            for(int j=0; j<n; j++)
            {
                if(i == j)
                    continue;
                
                if(pos[i] < pos[j])
                    count++;
                    
            }
            Npos[i] = count;
        }

        System.out.println("");
        
        for(int i=0; i<n; i++)
            System.out.print(Npos[i] + " ");
        
        System.out.println("");
    }

}
