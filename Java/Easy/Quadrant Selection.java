import java.util.*;
class Quadrant {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
      final int quadrantOne = 1;
      final int quadrantTwo = 2;
      final int quadrantThree = 3;
      final int quadrantFour = 4;
   
      int x = sc.nextInt();
      int y = sc.nextInt();
      
      if(x>=0 && y>=0){
          System.out.println(quadrantOne);
      }else if(x<=0 && y>=0){
          System.out.println(quadrantTwo);
      }else if(x<=0 && y<=0){
          System.out.println(quadrantThree);
      }else{
          System.out.println(quadrantFour);
      }
      
      
    }
}