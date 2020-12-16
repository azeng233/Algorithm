public class shaixuanfa {
	public static void  main(String args[]){
	  int i = 0;
	  int a[] = new int [101];
	  for(i = 2; i <=100; i ++){
		  a[i] = i;
	  }
	  for (i = 2; i < 10; i ++){
	    for(int j = i + 1; j <= 100; j ++){
	       if(a[j] != 0 && a[i] != 0)
	         if(a[j] % a[i] == 0) {
	           a[j] = 0;
	         }
	      }
	  }
	  System.out.printf("下面开始打印素数:\n");
	  for(i=2;i<=100;i++){
	    if( a[i] != 0 )
	      System.out.printf("%d ",a[i]);
	  }
	}
}
