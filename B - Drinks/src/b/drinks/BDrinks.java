package b.drinks;

import java.util.Scanner;

public class BDrinks {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = 0;
        
        int[] arr = new int[n];
        
        for(int i=0; i<n; i++)
        {
            arr[i] = input.nextInt();
            k += arr[i];
        }
        
        System.out.println((double)k/n);
  
    }

}
