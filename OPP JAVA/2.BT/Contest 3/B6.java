
import java.util.Scanner;

public class B6{
    
    public static boolean nt(int n){
        for(int i = 2; i <= (int)Math.sqrt(n);i++){
            if(n % i == 0) return false;
        }
        return n > 1;
    }
    
//    public static boolean csnt(int n){
//        while(n > 0){
//            int r = n%10;
//            if(r != 2 && r != 3 && r != 5 && r != 7){return false;}
//            n/=10;
//        }
//        return true;
//    }
//    
//        public static boolean tcsnt(int n){
//        int tong = 0;
//        while(n > 0){
//            tong += n%10;
//            n/=10;
//        }
//        return nt(tong);
//    }
    
//    2 hàm này giống nhau có thể tích hợp nó vào nhau để tránh chạy quá thời gian được
    public static boolean check(int n){
        int sum = 0;
        while(n > 0){
            int r = n%10;
            sum += r;
            if(r != 2 && r != 3 && r != 5 && r != 7){return false;}
            n/=10;
        }
        if(nt(sum)) return true;
        return false;   
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt(), b = sc.nextInt();
        int cnt = 0;
        // a && b && c 
//        - nếu có 1 cái sai return false
//        đưa cái đễ sai nhất lên đầu , nếu gặp thằng sai thì ko cần kiểm tra nữa
// điều kiệm phải hiếm, mà điều kiện hiếm là điều kiện ít khi xẩy ra
// nhưng mà điều kiện quan trọng là thời gian xử lý hàm
// check 32 số
// nt 168 số

        for(int i = a; i <= b;i++){
            if(check(i) && nt(i)){
                cnt++;
            }
        }
        System.out.println(cnt);
    }
}