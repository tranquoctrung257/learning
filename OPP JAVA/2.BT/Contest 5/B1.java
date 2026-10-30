import java.util.Scanner;

public class B1{
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n;i++){
            a[i] = sc.nextInt();
        }
        int c = 0, le = 0, tongChan = 0, tongLe = 0;
        for(int i = 0; i < n; i++){
            if(a[i] % 2 == 0){
                c++;
                tongChan+=a[i];
            }
            else{
                le++;
                tongLe+=a[i];
            }
        }

        System.out.println(c);
        System.out.println(le);
        System.out.println(tongChan);
        System.out.println(tongLe);
        

    }
}