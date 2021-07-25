package a.young.physicist;

import java.util.Scanner;

public class AYoungPhysicist {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        
        int [][]arr = new int[n][3];
        int a , b , c;
        a = b = c = 0;
        
        for(int i=0; i<n; i++)
            for(int j=0; j<3; j++)
                arr[i][j] = input.nextInt();
        
        for(int i=0; i<n; i++)
        {
            a += arr[i][0];
            b += arr[i][1];
            c += arr[i][2];
        }
        
        if(a == 0 && b == 0 && c == 0)
            System.out.println("YES");
        else
            System.out.println("NO");

    }

}
