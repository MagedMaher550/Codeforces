package a.watermelon;

import java.util.Scanner;

public class AWatermelon {

    public static void main(String[] args) {
	
        Scanner input = new Scanner(System.in);
        int w = input.nextInt();
        
	if((w%2==0)&&(w>2))
            System.out.println("YES");
        
	else
            System.out.println("NO");
    }

}
