#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>

#define _CRT_SECURE_NO_WARNINGS
#define ENTER 13
#define EXIT 27

int Lang = 1;
int Sword_Num = 0;
int Probability;
int Behavior;
int Enhance_var;
int Money = 5000;
int GetMoneyCount = 0;
int AmountSword_var;
char Input;
char* Sword = "��������";
void Percentage();
void Color(int c);
void Korean();
void Korean_game();
void Enhance();
void SwordToNum();
void SwordAmount();

int main(void)
{
	srand(time(NULL));
	system("mode con cols=50 lines=25");
	
	Language:
	while (1)
	{
		printf("########## Choose a langauge ##########\n");
		printf("               1.Korean                \n");
		printf("               2.English(Developing)   \n");
		printf("               3.Chinese(Devleoping)\n > ");
		Color(2); scanf_s("%d", &Lang);
		Color(7);
		switch (Lang)
		{
		case 1:
			puts("�� �ѱ���� �����Ǿ����ϴ�.");
			Korean();
			break;
		case 2:
			puts("That language is still under development.");
			continue;
		case 3:
			puts("That language is still under development.");
			continue;
		default: 
			puts("Please choose another number."); goto Language;
			break;
		}
		break;
	}

	return 0;
}

void Color(int c)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void Korean()
{
	Sleep(2000);
	system("cls");
	puts("������\n�� ������ �ְܼ������� �Ѱ谡 ���� �� ������\n�� ���۹��� ���� ����,������ �����մϴ�.\n������ E-mail: nine0725@naver.com");
	Sleep(5000);
	system("cls");
	while (1)
	{
		for (int i = 15; i > 0; i--)
		{
			if (_kbhit())
			{
				Input = _getch();
				switch (Input)
				{
					case ENTER: Color(7); Korean_game();
					case EXIT: Color(7); exit(1);
				}
			}
			puts("########## �� ��ȭ�ϱ� ##########\n\n\n\n���� �Ϸ��� Enter\n\n�������� ESC");
			Color(i);
			Sleep(200);
			system("cls");
		}
	}
}

void Korean_game()
{
	while (1)
	{
		SwordAmount();
		Enhance();
		int Percentage_var = rand() % 100 + 1;
		Percentage();
		printf("���� ��: %s \n\n", Sword);
		puts("1. �� ��ȭ�ϱ� \n");
		puts("2. �� �Ǹ��ϱ� \n");
		puts("3. �� �ޱ�(1ȸ��)\n");
		printf("�� ��ȭ Ȯ��: %d \n", Probability);
		printf("�� ��ȭ ���: %d�� \n", Enhance_var);
		printf("�� ����: %d�� \n", AmountSword_var);
		printf("���� ������ �ִ� ��: %d�� \n > ", Money);
		Color(2);
		scanf_s("%d", &Behavior);
		Color(7);
		if (Behavior == 1)
		{
			if (Money > 0)
			{
				Money -= Enhance_var;
				if (Percentage_var <= Probability)
				{
					puts("��ȭ ����");
					Sleep(700);
					Sword_Num++;
					SwordToNum();
					system("cls");
					continue;
				}
				else
				{
					puts("��ȭ ����");
					Sleep(700);
					Sword_Num = 0;
					SwordToNum();
					system("cls");
					continue;
				}
			}
			if (Money <= 0)
			{
				puts("���� ���ݾƿ�!");
				Sleep(700);
				system("cls");
				continue;
			}
		}
		if (Behavior == 2)
		{
			Money += AmountSword_var;
			puts("���� ������ ���� �����߽��ϴ�.");
			Sleep(700);
			Sword_Num = 0;
			SwordToNum();
			system("cls");
			continue;
		}
		if (GetMoneyCount == 0)
		{
			if (Behavior == 3)
			{
				puts("�� 5000���� �����߽��ϴ�.");
				Sleep(700);
				Money += 5000;
				GetMoneyCount++;
				system("cls");
				continue;
			}
		}
		else {
			puts("�̹� �ѹ� ���� �޾��ݾ�!!!");
			Sleep(700);
			system("cls");
			continue;
		}
	}

}

void Percentage()
{
	switch (Sword_Num)
	{
		case 0: Probability = 100; break;
		case 1: Probability = 97; break;
		case 2: Probability = 95; break;
		case 3: Probability = 90; break;
		case 4: Probability = 87; break;
		case 5: Probability = 71; break;
		case 6: Probability = 68; break;
		case 7: Probability = 63; break;
		case 8: Probability = 58; break;
		case 9: Probability = 55; break;
		case 10: Probability = 63; break;
		case 11: Probability = 50; break;
		case 12: Probability = 37; break;
		case 13: Probability = 40; break;
		case 14: Probability = 35; break;
		case 15: Probability = 19; break;
		case 16: Probability = 18; break;
		case 17: Probability = 5; break;
		case 18: Probability = 4; break;
		case 19: Probability = 3; break;
		case 20: Probability = 23; break;
		case 21: Probability = 10; break;
		case 22: Probability = 9; break;
	}
}

void Enhance()
{
	if (Sword_Num <= 7)
		Enhance_var = 500;
	else if (Sword_Num <= 14)
		Enhance_var = 1000;
	else if (Sword_Num <= 21)
		Enhance_var = 5000;
	else
		Enhance_var = 10000;
}

void SwordToNum()
{
	switch (Sword_Num)
	{
		case 0: Sword = "��������"; break;
		case 1: Sword = "���� �ܴ��� ��������"; break;
		case 2: Sword = "�ܴ��� ��������"; break;
		case 3: Sword = "������ ���"; break;
		case 4: Sword = "�׳� ���"; break;
		case 5: Sword = "���� �ܴ��� ���"; break;
		case 6: Sword = "�ܴ��� ���"; break;
		case 7: Sword = "�콼 ��"; break;
		case 8: Sword = "������ ö��"; break;
		case 9: Sword = "�׳� ö��"; break;
		case 10: Sword = "�ܴ��� ö��"; break;
		case 11: Sword = "�ݹ� �μ����� Ȳ�� ��"; break;
		case 12: Sword = "������ ���̾� ��"; break;
		case 13: Sword = "�׳� ���̾� ��"; break;
		case 14: Sword = "�ܴ��� ���̾� ��"; break;
		case 15: Sword = "õ���� ��"; break;
		case 16: Sword = "�Ǹ��� ��"; break;
		case 17: Sword = "����Į����"; break;
		case 18: Sword = "������ ��"; break;
		case 19: Sword = "��ƿ���� ��"; break;
		case 20: Sword = "Į��庼��"; break;
		case 21: Sword = "ĿŸ��"; break;
		case 22: Sword = "���� ��"; break;
		case 23: Sword = "�������� ��"; break;
	}
}

void SwordAmount()
{
	if (Sword_Num == 0) {
		AmountSword_var = 0;
	}
	else if (Sword_Num <= 4) {
		AmountSword_var = 500;
	}
	else if (Sword_Num <= 9) {
		AmountSword_var = 5000;
	}
	else if (Sword_Num <= 13) {
		AmountSword_var = 10000;
	}
	else if (Sword_Num <= 17) {
		AmountSword_var = 50000;
	}
	else if (Sword_Num <= 20) {
		AmountSword_var = 100000;
	}
	else {
		AmountSword_var = 1000000;
	}
}