
import java.util.Scanner;

public class B13{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        
        int nam = n / 365;
        int tuan = (n - (nam * 365)) / 7;
        int ngay = (n - ((nam * 365) + (tuan * 7)));
        System.out.println(nam + " " + tuan + " " + ngay);
        
        
    }
}