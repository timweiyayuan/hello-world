#include <stdio.h>
int main(void) {

public static void main(String[] args) {
		int num1Count1=f(13);
		int num1Count2=f(999);
		System.out.println(num1Count1);
		System.out.println(num1Count2);
	
	}
	private static int f(int i) {
		int count=0;
		for(int num=1;num<=i;num++){
			int countNum1= countNum1(num);
			count+=countNum1;
		}
		return count;
	}
	private static int countNum1(int num) {
		int count=0;
		while (true) {
			//%10 取出当前数的个位
			int gw= num%10;
			//如果为1统计1次
			if(gw==1){
				count++;
			}
			// /=10  缩小一位
			num/=10;
			//如果当前数不为0-取下一位数
			//如果当前数为0-退出循环-退出方法-返回1的个数
			if(num==0){
				return count;
			}
		}
	}
}
}
