package membalik_bilangan;

import java.util.*;

public class Membalik_bilangan {
    public static void main(String[] args) 
    {
        int x;
        Scanner input = new Scanner (System.in);
        x = input.nextInt();
        
        while(x>0)
        { 
            System.out.print(x%10);
            x=(x-x%10)/10;
        }
    }
}
