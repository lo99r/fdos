#include "vars.h"

int main(int argc, char* argv[2]) {
	system("color 1f");
	FILE* dotoperating = fopen("version.tmy", "ab+");
	fread(version, sizeof(char), 100, dotoperating);
	char arg[50] = { 0 };

	while(1){
		if (argc == 1)
		{
			//printf("error: i cant boot fdos, there is no option at here");
			system("title fdos boot mode seleting");
			printf("no argument detected, please enter boot mode\n"); // �ϴ��� �ӽ÷� �����صδ�
			scanf("%s", arg);
		}
		else
		{
			strcpy(arg, argv[1]);
		}

		if (strcmp(arg, "setup") == 0) {//�⺻ ����� ����
			system("title fdos user setting");
			//system("echo �̰� �� ���丮: %%userprofile%%");
			//system("setx fdosstarter \"%%userprofile%%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\""); // ��� �ּ�ó��
			//printf("����� �������� ��������(������)�� �Է��ϼ���.\n");//�� �������� ��ǻ�� ��Ʈ���� ���ؼ� �������� ����� �������� ���°�
			//char windowsusername[100] = {0};
			//scanf("%s", leftandright.file.informationkeeps.himsi[0]);
			printf("����� �� ���α׷��� ���� ����� ��й�ȣ�� �Է��ϼ���.\n");
			//char userpasswordinfdos[100] = {0};
			scanf("%s", leftandright.file.informationkeeps.himsi[1]);
			FILE* informationuser = fopen("info.2", "wb+");
			fwrite(leftandright.file.informationkeeps.himsi, sizeof(char), 10000, informationuser);
			fclose(informationuser);
		}
		else if (strcmp(arg, "run") == 0) {
			system("title F-DOS 4.06");
			FILE* informationuser = fopen("info.2", "ab+");
			fread(leftandright.file.informationkeeps.himsi, sizeof(char), 10000, informationuser);
			printf("����� ������ ��й�ȣ�� �Է��ϼ���.\n");
			char passwordinput[100] = { 0 };
			scanf("%s", passwordinput);
			if (strcmp(passwordinput, leftandright.file.informationkeeps.himsi[1]) == 0) {
				printf("��й�ȣ�� �½��ϴ�. ���� ���� �����ϰڽ��ϴ�.\n");
				system("echo �Ѱ�\npause > nul");
				system("cls");
				shell();
			}
		}
		else if (strcmp(arg, "exit") == 0) {
			logoff();
		}
	}
}