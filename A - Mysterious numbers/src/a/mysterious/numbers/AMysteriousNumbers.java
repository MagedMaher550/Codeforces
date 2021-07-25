package a.mysterious.numbers;

import java.util.Scanner;

public class AMysteriousNumbers {

// take the first number from the riggt and add it and then take each number from the left and multiply it by ten and add it and then add all that to a.
    
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        
        int a = input.nextInt();
        int b = input.nextInt();
                
	int c = 0;
	while (b > 0)
        {
            int k = b % 10;
            c = c * 10 + k;
            b /= 10;
	}
        
	       System.out.println(a+c);
        
    }

}
