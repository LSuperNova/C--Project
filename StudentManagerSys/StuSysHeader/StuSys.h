

#include "Manager.h"
#include "Analyst.h"


StuSys::StuSys(/* args */)
{
	
}

void StuSys::welcome(int delay)
{

	system("cls");
	printf("������������������������������������������������������������������������������������������������\n");Sleep(delay);
	printf("������������������������������������������������������������������������������������������������\n");Sleep(delay);
    printf("����������������������������  ��                                ��  ����������������������������\n");Sleep(delay);
	printf("����������������������������  ��      ѧ���ɼ����������ϵͳ    ��  ����������������������������\n");Sleep(delay);
    printf("����������������������������  ��                                ��  ����������������������������\n");Sleep(delay);
	printf("����������������������������                                ���������������������������\n");Sleep(delay);
	printf("����������������������������          ��������        ���������������������������\n");Sleep(delay);
    printf("����������������������������  ��          ��������        ��  ���������������������������\n");Sleep(delay);
	printf("����������������������������  ��                                ��  ���������������������������\n");Sleep(delay);
    printf("����������������������������  ��                                ��  ���������������������������\n");Sleep(delay);
	printf("����������������������������  ��          S.�ɼ�����ϵͳ        ��  ���������������������������\n");Sleep(delay);
    printf("����������������������������  ��                                ��  ���������������������������\n");Sleep(delay);
	printf("����������������������������  ��                                ��  ���������������������������\n");Sleep(delay);
    printf("����������������������������  ��          F.�ɼ�����ϵͳ        ��  ���������������������������\n");Sleep(delay);
	printf("����������������������������  ��                                ��  ���������������������������\n");Sleep(delay);
    printf("����������������������������  ��                                ��  ���������������������������\n");Sleep(delay);
	printf("����������������������������  ��          H.�鿴ʹ���ֲ�        ��  ���������������������������\n");Sleep(delay);
    printf("����������������������������  ��                                ��  ���������������������������\n");Sleep(delay);
	printf("����������������������������  ��                                ��  ���������������������������\n");Sleep(delay);
	printf("����������������������������  ��          0.�� ��  ϵ ͳ        ��  ���������������������������\n");Sleep(delay);
	printf("����������������������������  ��                                ��  ���������������������������\n");Sleep(delay);
	printf("������������������������������������������������������������������������������������������������\n");


}

void StuSys::menu()
{

	SetConsoleTitleA("ѧ����Ϣ�����ͷ���ϵͳ");
    system("mode con cols=96");

    welcome(20);
	int choice;
	Manager StuM;
	Analyst StuA;
	string username = "root";
	string password = "admin777";
	string user,pw;
	
	/* cout<<"���������Ա�˺�����\n";
	while(true)
	{
		cout<<"username:";
		cin>>user;
		cout<<"password:";
		cin>>pw;
		if(user == "root" && pw == "admin777")
		{
			cout<<"��¼�ɹ�!\n";
			break;
		}
		cout<<"�˺Ż��������!\n";
	} */

	// printf("����빦��\n");
	
	while(true)
	{
		//���ع��
		ShowCursor(false);

		welcome(0);

		choice = getch();
		switch (choice)
		{
		case 83:
		case 115:
			StuM.menu();
			welcome(20);
			break;
		case 70:
		case 102:
			StuA.menu();
			welcome(20);
			break;
		default:
			break;
		}
		if(choice==96||choice==48)
		{
			break;
		}
	}
	goodbye();

}

void StuSys::goodbye()
{
	SetTextGreen();
	printf("\n					   ��ӭ�´�ʹ��~\n");
	SetTextWhite();
    Sleep(3000);
}

StuSys::~StuSys()
{

}