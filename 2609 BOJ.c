#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	int gcd, lcm;//�ִ����� �ּҰ����
	scanf("%d %d", &a, &b);
	if (a < b) { //a�� b�̻����� �����
		a = a + b; //�ٸ� ���� ���� ���� �� �� ��ȯ
		b = a - b;
		a = a - b;
	}
	for (int i = 1;;i++) { //�ּҰ���� ���ϱ�
		lcm = b * i;
		if (lcm % a == 0) break;
	}
	gcd = a * b / lcm; // (�ִ�����)*(�ּҰ����)==(�� ���� ��)
	printf("%d\n", gcd);
	printf("%d\n", lcm);
}