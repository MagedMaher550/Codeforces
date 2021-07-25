package a.team;

import java.util.Scanner;

public class ATeam {
    static int n;
    public static int numOfSol(int[][] arr)
    {
        int count = 0 , p , v , t;
        
        for (int i=0; i<n; i++) 
        {    
            if((arr[i][0] ==1 && arr[i][1]==1) || (arr[i][0]==1 && arr[i][2]==1) || (arr[i][1]==1 && arr[i][2]==1))
            {
                count++;
            }              
        }
        return count;
    }
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
         n = input.nextInt();
        int [][] problems = new int[n][3];

           for (int i = 0; i <n; i++)
          {
              for (int j = 0; j < 3; j++)
              {
                  problems[i][j] = input.nextInt();
              }
          }
           
        System.out.println(numOfSol(problems));
        
    }

}
