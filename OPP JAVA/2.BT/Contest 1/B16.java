
import java.util.Scanner;

public class B16{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char s = sc.nextLine().charAt(0);
        
        if( s == 'z' || s == 'Z')System.out.println('a');
        else if(s >= 'a' && s <= 'z') System.out.println((char)(s+1));
        else System.out.println((char)(s+33));
        
    }
}