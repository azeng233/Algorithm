import java.util.*;

public class GuessNumber1 {
	public static void main(String[] args) {
		int maxNum=100,minNum=1;
		Random random = new Random();
		int guessNumber = random.nextInt(100)+1;  //���������ֵ�������[1,100]
		System.out.printf("��������������Ϊ:%d\n",guessNumber); //guessNumber��һ������ı�����֣�ֻ�������һ��
		int yourGuess = random.nextInt(100)+1;
		System.out.printf("��������Ĳ²�����Ϊ:%d\n",yourGuess);
		System.out.println("��һ�β²����������[1,100]");
		while(guessNumber != yourGuess) {
			
			if(yourGuess > guessNumber) {
 	            maxNum = yourGuess;
				System.out.printf("�²������ƫ��,��һ�β²������Ϊ[%d,%d]\n",minNum,maxNum);
				yourGuess = random.nextInt(maxNum - minNum + 1) + minNum;
			}
			
			else if(yourGuess < guessNumber){
			    minNum = yourGuess;  
				System.out.printf("�²������ƫС,��һ�β²������Ϊ[%d,%d]\n",minNum,maxNum);
				yourGuess = random.nextInt(maxNum - minNum + 1) + minNum;
			}
			
		}
		System.out.printf("\n�¶���!");
	}
}
