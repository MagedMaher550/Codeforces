package a.i.wanna.be.the.guy;

import java.util.*;

public class AIWannaBeTheGuy {

public static ArrayList removeAndSort(ArrayList<Integer> subNums) 
{ 
    ArrayList<Integer> newList = new ArrayList<>(); 
    
    for (Integer e : subNums) 
    { 
        if (!newList.contains(e)) 
        { 
            newList.add(e); 
        } 
    } 
    
    Collections.sort(newList);
    return newList; 
}  
    
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        
        ArrayList<Integer> a = new ArrayList<>();
        
        ArrayList<Integer> b = new ArrayList<>();
        
        int p1 = input.nextInt();
        for(int i=0; i<p1; i++)
            a.add(input.nextInt());
        
        int p2 = input.nextInt();
        for(int i=0; i<p2; i++)
            a.add(input.nextInt());
            
        a.addAll(b);
        
        a = removeAndSort(a);
        
        if(a.size() == n)
            System.out.println("I become the guy.");
        
        else
            System.out.println("Oh, my keyboard!");
        
        
    }

}
