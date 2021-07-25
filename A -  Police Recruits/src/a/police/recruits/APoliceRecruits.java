package a.police.recruits;

import java.util.Scanner;

public class APoliceRecruits {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int events[] = new int[n];
        
        int pCount = 0 , cCount = 0;
        for(int i=0; i<n; i++)
        {
            events[i] = input.nextInt();
            
            if(events[i] == -1)
            {
                if(pCount >0)
                    pCount--;
                else
                    cCount++;
            }
            else
                pCount += events[i];
        }
        System.out.println(cCount);
    }

}
