
import java.util.Scanner;

public class B0{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        
        for(int i = 1; i <= n; i++){
            System.out.print(i + " ");
        }
        System.out.println("");
        
        int lap = n;
        while(lap >= 0){
            System.out.print(lap+ " ");
            lap--;
        }
        System.out.println("");
        
        for(int i = 0; i <= n; i ++){
            if(i % 2 == 0){
                System.out.print(i + " ");
            }
        }
        System.out.println("");
        
        int lap1 = 0;
        while(lap1<=n){
            if(lap1 % 2 != 0){
                    System.out.print(lap1 + " ");
                }
            lap1++;
        }
        System.out.println("");
        
        for(int i = 0; i<= n;i++){
            if(i % 4 == 0){
                System.out.print(i + " ");
            }
        }
        
        System.out.println(" ");
        
        for(int i = 0; i < n; i++){
            System.out.print((char)(97+i) + " ");
        }
        
        System.out.println("");
        
        for(int i = 122-n;i <= 122;i++){
            System.out.print((char)i + " ");
        }
    }
}