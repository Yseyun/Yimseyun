/*#define _CRT_SECURE_NO_WARNINGS    // strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>    // strcpy �Լ��� ����� ��� ����

typedef struct _Person {   // ����ü �̸��� _Person
	char name[20];            // ����ü ��� 1
	int age;                  // ����ü ��� 2
	char address[100];        // ����ü ��� 3
} Person;                  // typedef�� ����Ͽ� ����ü ��Ī�� Person���� ����

int main()
{
	Person p2;    // ����ü ��Ī Person���� ���� ����

	// ������ ����ü ����� �����Ͽ� �� �Ҵ�
	strcpy(p2.name, "ȫ�浿");
	p2.age = 30;
	strcpy(p2.address, "����� ��걸 �ѳ���");

	// ������ ����ü ����� �����Ͽ� �� ���
	printf("�̸�: %s\n", p2.name);       // �̸�: ȫ�浿
	printf("����: %d\n", p2.age);        // ����: 30
	printf("�ּ�: %s\n", p2.address);    // �ּ�: ����� ��걸 �ѳ���

	return 0;
}*/