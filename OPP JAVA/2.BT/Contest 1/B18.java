
import java.util.Scanner;

public class B18{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char s = sc.nextLine().charAt(0);
        if(s >= 'A' && s <= 'Z') s+=32;
        else if(s >= 'a' && s <= 'z')s-=32;
        System.out.println(s);
    }
}