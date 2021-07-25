package a.magnets;

import java.util.Scanner;

public class AMagnets {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        long n = input.nextLong();
        int mag[] = new int[(int)n];
        
        for(int i=0; i<n; i++)
            mag[i] = input.nextInt();
        
        int ans = 0;
        
        for(int i=0; i<n-1; i++)
            if(mag[i] != mag[i+1])
                ans++;
     
        System.out.println(ans+1);
    }

}
