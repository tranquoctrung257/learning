import java.util.Scanner;
public class E{
	public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int a = sc.nextInt(), b = sc.nextInt(),c = sc.nextInt();
            if(a == 0){
                if(b == 0 && c == 0)System.out.println("VO SO NGHIEM");
                else if(b == 0 && c != 0){
                    System.out.println("VO NGHIEM");
                }
                else{
                    System.out.printf("%.2f",(double)-c/b);
                }
            }
            else{
                int delta = b * b - 4 * a * c;
                if(delta < 0)System.out.println("VO NGHIEM");
                else if(delta == 0) System.out.printf("%.2f",(double)-b/(2*a));
                else{
                    double x1 = (-b - Math.sqrt(delta)/2*a);
                    double x2 = (-b + Math.sqrt(delta)/2*a);
                    System.out.printf("%.2f %.2f",x1,x2);
                }
            }
	}
}