import java.util.Scanner;

public class B2_8 {

    public static boolean nt(long n) {
        for(int i = 2;i<=Math.sqrt(n);i++){
            if(n%i == 0){
                return false;
            }
        }
        return n>1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // số có đúng 3 ước có dạng n = p^2
        // 1 <= p^2 <= n
        // 1 <= p <= sqrt(n)

        // ví dụ n = 150 thì n sẽ chạy từ 1 đến 12 các số nguyên tố là 4 9 25 49 121 đây là những số có 3 ước 
        long n = sc.nextLong();

        for(int i = 1; i <= Math.sqrt(n);i++){
            if(nt(i)){
                System.out.println(1l *i * i + " ");
            }
        }
    }
}