#include <stdio.h>
#include <string.h>

int main(void) {
	//�迭�� 20���� ������ ��������, ������ ���̴� 3
	char str[20] = "YSY";

	//������ ���̸� ���ϴ� �Լ�
	int length = strlen(str);
	printf("%d \n", length);

	//���ڿ� ���� strcpy(������ ���, ������ ���ڿ�)
	char copy_str[15];
	strcpy(copy_str, str);
	printf("%s \n", copy_str);

	//���ڿ� �����̱� strcat(������ ���, ������ ���ڿ�)
	strcat(copy_str, "BLY");
	printf("%s \n", copy_str);

	//���ڿ��� ������ ���ϱ� strcmp(�񱳴��1, �񱳴��2)
	if (strcmp(str, "YSY") == 0)
		printf("�缭���Դϴ�. \n");
	else printf("�缭���� �ƴմϴ�.\n");

	//����1 ���ڿ��� ���� ���ϱ�
	char str2[30] = "samgyetang";

	int length2 = strlen(str2);
	printf("������� ���̴� %d\n", length2);
	
	//����2 copy_str2�� "iceshu" ����ֱ�(�����ϱ�)
	char copy_str2[30];
	strcpy(copy_str2, "iceshu");
	printf("������ ���ڿ��� %s \n", copy_str2);

	//����3 copy_str2�� "delicious" �����̱�
	strcat(copy_str2, "delicious");
	printf("������ ���ڿ��� %s \n", copy_str2);

	//����4 "BMW"�� "benz"�� �� ���ڿ��� ���� �ٸ����� �Ǻ�
	if (strcmp("BMW", "benz") == 0)
		printf("�� ���ڿ��� �����ϴ�.\n");
	else printf("�� ���ڿ��� �����ʽ��ϴ�.\n");

}