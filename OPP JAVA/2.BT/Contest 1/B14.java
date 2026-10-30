import java.util.Scanner;

public class B14{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		double d1= sc.nextDouble(),d2= sc.nextDouble(),d3= sc.nextDouble(),d4= sc.nextDouble();
		double dtb = (d1 + d2 + d3 * 2 + d4 * 3)/7;
		if(dtb >= 8){
			System.out.println("GIOI");
		}
		else if(dtb<8 && dtb>=6.5 ){ // có thể không thêm đk dtb<8 vì đk trên đã bắt được cái điều kiện này rồi nên có cx đc mà ko có cũng không sao
			System.out.println("KHA");
		}
		else if(dtb<6.5 && dtb>=5 ){
			System.out.println("TRUNG BINH");
		}
		else System.out.println("YEU");

	}
}