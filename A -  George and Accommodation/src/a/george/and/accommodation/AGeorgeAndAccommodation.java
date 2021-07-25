package a.george.and.accommodation;

import java.util.Scanner;

public class AGeorgeAndAccommodation {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        
        int [][]rooms = new int[n][2];
        
        for(int i=0; i<n; i++)
        {
            rooms[i][0] = input.nextInt();
            rooms[i][1] = input.nextInt();
        }
        
        int count = 0;
        
        for(int i=0; i<n; i++)
        {
            if(rooms[i][1] - rooms[i][0] >= 2)
                count++;
        }
        
        System.out.println(count);
    }
}
