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
			//%10 ȡ����ǰ���ĸ�λ
			int gw= num%10;
			//���Ϊ1ͳ��1��
			if(gw==1){
				count++;
			}
			// /=10  ��Сһλ
			num/=10;
			//�����ǰ����Ϊ0-ȡ��һλ��
			//�����ǰ��Ϊ0-�˳�ѭ��-�˳�����-����1�ĸ���
			if(num==0){
				return count;
			}
		}
	}
}
}
