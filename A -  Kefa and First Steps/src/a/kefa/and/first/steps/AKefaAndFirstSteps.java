package a.kefa.and.first.steps;

import java.util.Scanner;

public class AKefaAndFirstSteps {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        long n = input.nextLong();
        long arr[] = new long[(int)n];
        
        int max , len;
        max = len = 1;
        
        for(int i=0; i<n; i++)
            arr[i] = input.nextLong();
        
        for(int i=1; i<n; i++)
        {
            if(arr[i] >= arr[i-1])
                len++;
            else
            {
                if(max < len)
                    max = len;
                len = 1;
            }
        }
        
        if(max < len)
            max = len;
        
        System.out.println(max);
    }

}
