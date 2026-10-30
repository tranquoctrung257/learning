
import java.util.Scanner;

public class B0{
    public static boolean ngto(int n){
        for(int i = 2; i <= (int)Math.sqrt(n);i++){
            if(n % i == 0){
                return false;
            }
        }
        return n > 1;
        // câu lệnh bên dưới cùng nghĩa với phần câu lệnh ở trên
//      if(n > 1) return true;
//      else return false;      
    }
    
    public static int tcs(int n){
        int tong = 0;
        while(n > 0){
            tong += n % 10;
            n /= 10;
        }
        return tong;
    }
    
    public static int tcsc(int n){
        int tong = 0;
        while(n > 0){
            int r = n % 10;
            if(r % 2 == 0)
                tong += r;
            n/=10;
        }
        return tong;
    }
    
    public static int tcsnt(int n){
        int tong = 0;
        while(n > 0){
            int r = n % 10;
            if(ngto(r))
                tong += r;
            n/=10;
        }
        return tong;       
    }
    
    public static int rev(int n){
        int s = 0;
        while(n > 0){
            s = s * 10 + n % 10;
            n /= 10;
        }
        return s;
    }
    
    public static int soLuongUocNt(int n){
        int cnt = 0;
        for(int i = 2; i <= Math.sqrt(n);i++){
            if(n % i == 0){
                cnt ++;
                while(n % i == 0){
                    n/=i;
                }
               
            }
        
        }
        if(n != 1) cnt ++;
        return cnt;
    }

    public static int uocSoNtoLn(int n){
        int res = 1;
        for(int i = 2; i <= Math.sqrt(n);i++){
            if(n % i == 0){
                res = i;
                while(n % i == 0){
                    n/=i;
                }
               
            }
        
        }
        if(n != 1) res = n;
        return res;
    }    
    
//    ít nhất 1 số 6 gặp số 6 thì kết luận là true
//    toàn bộ là số 6 ==> chứng minh sai trước  nếu gặp số khác 6 return true luôn 
    public static boolean ham8(int n){
        while(n > 0){
            int r = n % 10;
            if(r == 6) return true;
            n/=10;
        }
        return false;
    }
    public static boolean ham9(int n){
        if(tcs(n) % 8 == 0) return true;
        return false;
    }
    
    public static int gt(int n){
        int tong = 1;
        for(int i = 1; i <= n;i++)
            tong *= i;
        return tong;
    }
    
    public static int ham10(int n){
        int t = 0;
        while(n>0){
            int r = n %10;
            t+= gt(r);
            n/=10;
        }
        return t;
    }
    public static boolean ham11(int n){
        int lastDigit = n % 10;
        while(n > 10){
            if(n != lastDigit) return false;
            n/=10;
        }
        return true;
    }
    
    public static boolean ham12(int n){
        int lastDigit = n % 10;
        while(n >0){
            if(n % 10 > lastDigit)return false;
            n/= 10;
        }
        return true;
    }
    
    public static int soLuongChuSo(int n){
        int cnt = 0;
        while(n > 0){
            cnt++;
            n/=10;
        }
        return cnt;
    }
    
    public static int ham13(int n){
        int m = soLuongChuSo(n);
        int sum = 0;
        while(n >0){
//            int m = soLuongChuSo(n); không được đặt m ở trong đây được vì n thay đổi
            sum += (int)Math.pow(n % 10,m);
            n/=10;
        }
        return sum;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

//        hàm 1
        if(ngto(n)) System.out.println("1");
        else System.out.println("0");
        
//      hàm 2
        System.out.println(tcs(n));
        
//        hàm 3
        System.out.println((n));
        
//        hàm 4
        System.out.println(tcsnt(n));
        
//        hàm 5
        System.out.println(rev(n));
        
//        hàm 6
        System.out.println(soLuongUocNt(n));
        
//        hàm 7
        System.out.println(uocSoNtoLn(n));
        
//        hàm 8
        if(ham8(n))System.out.println("1");
        else System.out.println("0");
        
//        hàm 9
        if(ham9(n)) System.out.println("1");
        else System.out.println("0");
        
//        hàm 10
        System.out.println(ham10(n));
        
//        hàm 11
        if(ham11(n)) System.out.println("1");
        else System.out.println("0");
        
//        hàm 12
        if(ham12(n)) System.out.println("1");
        else System.out.println("0");
        
//        hàm 13
        System.out.println(ham13(n));
    }
}