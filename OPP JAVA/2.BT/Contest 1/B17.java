
import java.util.Scanner;

public class B17{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char s = sc.nextLine().charAt(0);
        if(s >= 'A' && s <= 'Z')System.out.println("UPPER");
        else if(s >= 'a' && s <= 'z')System.out.println("LOWER");
        else if(s >= '0' && s <= '9')System.out.println("DIGIT");
        else System.out.println("SPECIAL");
    }
}