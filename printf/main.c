#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a;
	printf("请输入学生的分数：");
	scanf("%f",&a);
	printf("学生的分数为：%.2f",a);  
	return 0;
}
