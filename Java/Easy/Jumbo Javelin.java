import java.util.*;
class Javelin{

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int number = sc.nextInt();
        
        int Javelin[] = new int[number];
        int steel = 0;
        
        for (int i = 0; i < number; i++) {
            Javelin[i]= sc.nextInt();
        }
        
        
        for (int i = 0; i < number; i++) {
            steel = steel+Javelin[i];
        }
        
        int output = steel-(number-1);
        System.out.println(output);
                
      
    }
}