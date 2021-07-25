package a.next.round;

import java.util.Scanner;

public class ANextRound {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        
        int []arr = new int[n];
        
        for(int i=0; i<n; i++)
            arr[i] = input.nextInt();
        
        int x = arr[k-1] , count = 0;
        
        for(int i=0; i<n; i++)
        {
            if(arr[i] >= x && arr[i]>0)
                count++;
            else
                break;
        }
        
        System.out.println(count);
        
    }

}
