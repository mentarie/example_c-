package ujicoba_error_output;

import java.util.*;

public class Ujicoba_error_output {
    public static void main(String[] args) 
    {
        int panjang;
        int lebar;
        int luas; 
        //integer = max bit 
        
        Scanner input = new Scanner(System.in);
        System.out.println("Masukkan panjang: ");
        panjang = input.nextInt();
        
        System.out.println("Masukkan lebar: ");
        lebar = input.nextInt();
        
        luas = panjang * lebar;
        System.out.println("Luasnya adalah = " +luas);
    }
}
