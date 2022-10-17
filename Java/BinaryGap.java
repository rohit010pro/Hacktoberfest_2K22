import java.util.*;

class BinaryGap {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();

        BinaryGap obj=new BinaryGap();
        System.out.println(obj.solution(n));
    }
    public int solution(int N) {

        String binaryString = Integer.toBinaryString(N);
   

        int longestBinaryGap = 0;
        List onesList = new ArrayList();
   
        for(int i=0; i<binaryString.length(); i++) {
          if(binaryString.charAt(i) == '0') continue;
          onesList.add(i);
        }

    for(int i=0; i<onesList.size() - 1; i++) {
      //subtract 1 so that don't count 1's next to each other as having any gap
      int indicesDiff = (int)onesList.get(i+1) - (int)onesList.get(i) - 1;;
     
      longestBinaryGap = Math.max(longestBinaryGap, indicesDiff);
    }
    return longestBinaryGap;
  }
}
