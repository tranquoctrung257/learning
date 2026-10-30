
import java.util.Scanner;

public class B2{
    
    public static boolean nt(int n){
        for(int i = 2;i<= Math.sqrt(n);i++){
            if(n % i ==0){
                return false;
            }
        }
        return n >1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] m = new int[n];
        for(int i = 0; i < n;i++){
            m[i] = sc.nextInt();
        }
        long tong = 0;
        int dem = 0;
        for(int i = 0; i < n;i++){
            if(nt(m[i])){
                tong+=m[i];
                dem++;
            }
        }
        System.out.printf("%.3f",(double)tong/dem);
//          System.out.println(nt(3));
        
        
    }
}