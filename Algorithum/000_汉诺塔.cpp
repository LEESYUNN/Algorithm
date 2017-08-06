#include <iostream>
#include <cstdio>

using namespace std;

void hannoi(int n, char A, char B, char C) // ��A�������ԲȦת�Ƶ�C�����桾A --> C����
{
	if (n == 1) {

		// N == 1 ʱ �� A -> C �ƶ�
		cout << "�ƶ�ԲȦ" << n << "����" << A << "��" << C << endl; 
	}
	else{
		// N ��= 1 ʱ  �� N-1���� -> ��ǰ�Ŀ��� 
		hannoi(n - 1, A, C, B); // ��N-1��Բ����������ƶ�������ǰ��û���κ�Բ���Ĺ����̣�ͨ��B��C���ڴ˺��������е���λ�õĻ�������ʵ�ְ�N-1��Բ����A�̵�B�̵�ת�ơ�A--B����
		
		cout << "�ƶ�ԲȦ" << n << "����" << A << "��" << C << endl;

		hannoi(n - 1, B, A, C); // ��N-1��Բ�� �� ������ -> Ŀ���̣�ģ��1��2�Ĳ���������ʵ�֣���ͨ��A��B���ڴ˺���������λ�õĻ�������ʵ��N-1��Բ����B�̵�C�̵�ת�ơ�B--C����
	}
}
/*
int main_hannuo()
{
	int n = 0;

	cin >> n;

	hannoi(n, 'a', 'b', 'c');

	// system("pause");
	return 0;
}

*/