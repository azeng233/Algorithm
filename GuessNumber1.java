import java.util.*;

public class GuessNumber1 {
	public static void main(String[] args) {
		int maxNum=100,minNum=1;
		Random random = new Random();
		int guessNumber = random.nextInt(100)+1;  //产生的数字的区间是[1,100]
		System.out.printf("随机产生的随机数为:%d\n",guessNumber); //guessNumber是一个不会改变的数字，只会产生这一次
		int yourGuess = random.nextInt(100)+1;
		System.out.printf("随机产生的猜测数字为:%d\n",yourGuess);
		System.out.println("第一次猜测的区间是在[1,100]");
		while(guessNumber != yourGuess) {
			
			if(yourGuess > guessNumber) {
 	            maxNum = yourGuess;
				System.out.printf("猜测的数字偏大,下一次猜测的区间为[%d,%d]\n",minNum,maxNum);
				yourGuess = random.nextInt(maxNum - minNum + 1) + minNum;
			}
			
			else if(yourGuess < guessNumber){
			    minNum = yourGuess;  
				System.out.printf("猜测的数字偏小,下一次猜测的区间为[%d,%d]\n",minNum,maxNum);
				yourGuess = random.nextInt(maxNum - minNum + 1) + minNum;
			}
			
		}
		System.out.printf("\n猜对啦!");
	}
}
