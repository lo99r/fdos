#pragma once
#ifndef VARS_H
#define VARS_H

#define da 1

#define _CRT_SECURE_NO_WARNINGS

//made in china

#include<stdio.h>//include "stdio.h"
#include<stdlib.h>
#include<conio.h>//include "conio.h"
#include<stdlib.h>//include "stdlib.h"
#include<math.h>//include "math.h"
#include<string.h>//include "string.h"
#include<windows.h>//include "windows.h"
#include<process.h>

typedef struct system//?
{
	struct Memory
	{
		struct Rem {
			int var[100];
			int count[100];
			char bin[100];
		} rem;

		struct Remdriveremembersystem {
			FILE* systempackagerfile;
		} remdriveremembersystem;
	} memory;

	struct Filer {
		int filetype;
		FILE* iwanteatstake;
		int iflevel;
		int ifcapture;
		struct Informationkeeps {
			char himsi[100][100];
			int ihmsi[100];
			char winusrname[100];
			char usrpwdinfdos[100];
		} informationkeeps;
	} file;
	struct directories {
		char directorynowcharacter[/*100 */MAX_PATH ];
		char structdirectory_character[100][MAX_PATH];
		int cight;
	}directory;
	struct io {
		int commandnumber[4];
		char commandcharacter[100];
	}io;
} system_1;

system_1 leftandright = { 0, };
char version[100] = { 0, };

//sscanf();
//"ui 0 0 0 0 0 0"

char packtextlist[100][100] = { 0, };

// = {0,};

/*int directorycatlimx(char i1[100], char ii[100][100]) {
	int i = 0;
	int j = 0;
	while(i1[i] && i < 100 && j < 100){
		if(i1[1] == '\\'){
			j += 1;
			i = 0;
			continue;
		}
	}
}*/

int noter(int caine) {
	if (caine == 1) {
		return 0;
	}
	else {
		return 1;
	}
}

static int directorycatlimx(char* i1, char ii[100][100]) {
	leftandright.file.informationkeeps.ihmsi[11] = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	while (1) {
		//returner = i1[k] && i < 100 && j < 100;
		//not
		//int nwenot = not;
		if (noter(i1[k] && i < 100 && j < 100)) {//\/
			ii[j + 1][0] = '\a';
			break;
		}
		if (i1[k] == '\\') {
			j += 1;
			i = 0;
			k++;
			continue;
		}
		ii[j][i] = i1[k];
		i++;
		k++;
	}
	leftandright.file.informationkeeps.ihmsi[11] = 1;
}

static int redirectorycatlimx(char ii[100][MAX_PATH], char i1[MAX_PATH]) {
	leftandright.file.informationkeeps.ihmsi[11] = 0;
	memset(i1, 0, MAX_PATH);
	int i = 0;
	int j = 0;
	int k = 0;
	while (1) {
		if (strcmp(ii[j], "\a") == 0/*ii[j + 1][0] == '\a' /* || ii[j + 1][i] == '\a'*/) {//멈춘 지정석
			printf("breaked becouse is ii[%d] == \\a\nverse: %s\n", j, ii[j]);
			break;
		}
		if (ii[j][i] == '\0') {
			//strcat(i1, "\\");
			i1[k] = '\\';
			j += 1;
			i = 0;
			k++;
			if (ii[j][i] == '\a' /* || ii[j + 1][i] == '\a'*/) {
				printf("breaked becouse is ii[%d][%d] == \\a\nverse: %c\n", j, i, ii[j][i]);
				break;
			}
			printf("loading(%d): %c\n", k, i1[k]);
			continue;
			//break;
		}
		//strcat(i1, ii[j][i]);
		i1[k] = ii[j][i];
		//i1[k + 1] = '\0';
		i++;
		k++;
	}
	/*int k = 0;
	while (ii[i][j] && k < 100) {
		if(ii[i][j])
	}*/
	leftandright.file.informationkeeps.ihmsi[11] = 1;
	return 0;
}

/*char directorynow(char i1[100], char ii[100][100]) { // 여기도 문제가 있습니다
	int i = 0;
	int j = 0;  // 어차피 스택 나가면 죽는 거 여기에 넣어 둘게요 

	while (i1[i] /*이거 0이면 어차피 끝나죠?*//*&& i < 100 && j < 100) {
		switch (i1[i]) {
			case '/': {
				j += 1;
				i = 0;

			}//걍 리셋해야되나요?

			default;{
			ii[j] = i1[i];
			i++; = i1[i];
			i++;
			}

			// 끝나면 실행될 로직을 여기에다가 작성하면 되겠네요떐
			j += 1;
			i = 0;
			ii[j] = '\a';

			return ii;
		}
}*/

int scaning() {
	if (leftandright.file.filetype == 0) {
		fscanf(leftandright.file.iwanteatstake, "%d %d %d %s", &leftandright.io.commandnumber[0], &leftandright.io.commandnumber[1], &leftandright.io.commandnumber[2], leftandright.io.commandcharacter);
	}
	else {
		sscanf(leftandright.memory.rem.bin, "%d %d %d %s", &leftandright.io.commandnumber[0], &leftandright.io.commandnumber[1], &leftandright.io.commandnumber[2], leftandright.io.commandcharacter);
	}
	return 0;
}

int logoff() {
	//system("start explorer.exe");
	//system("start devenv.exe");
	exit(0);
}

int programlog(char* enostram, char* inputstring) {
	strcat(enostram, ".log");
	FILE* log = fopen(enostram, "a+");
	fprintf(log, "%s", inputstring);
	fclose(log);
	return 0;
}

int startword() {
	printf("(c)creams lemoncoream for daramnyang operating shell 2023-2024\n크림즈 레몬코림 fdos %s\n", &version);
	return 0;
}

int command_cd() {
	leftandright.file.informationkeeps.ihmsi[11] = 0;
	MessageBox(NULL, TEXT("현재 디렉토리에서 다른 디렉토리로 이동하시겠습니까?"), TEXT("선택권 없음..."), MB_OK);
	//leftandright.directory.directorynowcharacter[leftandright.directory.cight];
	printf("옮길 디렉토리로 이동\n..는 뒤로갑니다.\n");
	scanf("%s", leftandright.file.informationkeeps.himsi[10]);
	if (strcmp(leftandright.file.informationkeeps.himsi[10], "..") == 0) {
		leftandright.directory.cight -= 1;
		int xount = 0;
		//srtcpy(leftandright.directory.directorynowcharacter[leftandright.directory.cight], "\0");
		//while(leftandright.directory.directorynowcharacter[leftandright.directory.cight][xount] == '\0')
		memset(leftandright.directory.structdirectory_character[leftandright.directory.cight], '\0', MAX_PATH);
		strcpy(leftandright.directory.structdirectory_character[leftandright.directory.cight], "\a");
		//redirectorycatlimx();
		//leftandright.directory.structdirectory_character[leftandright.directory.cight]
	}
	else if (strcmp(leftandright.file.informationkeeps.himsi[10], ".") == 0) {
		int ppp = 0;
	}
	else {
		//...
		strcpy(leftandright.directory.structdirectory_character[leftandright.directory.cight], leftandright.file.informationkeeps.himsi[10]);
	}
	leftandright.directory.cight++;
	leftandright.file.informationkeeps.ihmsi[11] = 1;
}

unsigned _stdcall toroop(void* arg) {
	while (1) {
		while (leftandright.file.informationkeeps.ihmsi[11]) {
			strcpy(leftandright.directory.structdirectory_character[leftandright.directory.cight], "*");
		}
	}
}

int shell() {
	startword();
	_beginthreadex(NULL, 0, toroop, 0, 0, NULL);
	while (1) {
		//scanf("%d %d %d %s", &leftandright.io.commandnumber[0], &leftandright.io.commandnumber[1], &leftandright.io.commandnumber[2], leftandright.io.commandcharacter);
		char commandinputer[100] = { 0, };
		int Panert = 0;
		scanf("%s", commandinputer); // 뒤에 들어가는거 뭐임/*leftandright.memory.remdriveremembersystem.systempackagerfile*/
		if (strcmp(commandinputer, "ver") == 0) {
			printf("fdos4.06 4.06.2\n");
		}
		if (strcmp(commandinputer, "dir") == 0) {
			redirectorycatlimx(leftandright.directory.structdirectory_character, leftandright.directory.directorynowcharacter);
			/*//DIR* setis = opendir();
			DIR            *dir_info;
			struct dirent  *dir_entry;

			//mkdir( "test_A"     , 0755);           // 실행 파일이 있는 곳에 생성
			//mkdir( "test_B"     , 0755);           // 실행 파일이 있는 곳에 생성

			dir_info = opendir( ".");              // 현재 디렉토리를 열기
			if ( NULL != dir_info)
			{
				while( dir_entry   = readdir( dir_info)){ // 디렉토리 안에 있는 모든 파일과 디렉토리 출력
					printf( "%s\n", dir_entry->d_name);
				}
				closedir( dir_info);
			}*/

			//코드를 윈도우 기준으로 짜드리도록 하죠
			//주석좀...
			//제가 모르는 거가 많아요

			HANDLE file_search_handle = INVALID_HANDLE_VALUE; // 윈도우의 대부분의 함수들은 HANDLE을 이용해야 사용 가능
			WIN32_FIND_DATAA file_list_data = { 0 }; // 대충 검색한 파일에 대해 찾은 정보가 저장됩니다🤔
			char search_bool = 0;
			char USA_B[MAX_PATH] = { 0, };

			strcpy(USA_B, leftandright.directory.directorynowcharacter);
			strcat(USA_B, "*");
			printf("\n현재 디렉토리: %s\n전툰입력값: %s\n", leftandright.directory.directorynowcharacter, USA_B);

			file_search_handle = FindFirstFileA(USA_B /* leftandright.directory.directorynowcharacter"*"는 파일 이름, 확장자 상관 없이 모든 파일을 검색한다는 뜻*/, /*"m:\\jojo\\*"*/
				&file_list_data /*포인터로 전달해주셔야 합니다*/); // 파일 검색에 사용할 HANDLE을 생성해주는 함수입니다

			if (file_search_handle != INVALID_HANDLE_VALUE) { // HANDLE이 정상적으로 생성되었다면 받아온 값은 INVALID_HANDLE_VALUE가 아닙니다
				search_bool = 1;
				while (search_bool) {
					printf("%s\n", file_list_data.cFileName); // 이건 뭐 알거라 생각하고
					search_bool = FindNextFileA(file_search_handle, &file_list_data); // 생성한 HANDLE을 그대로 이용하여 다음 파일을 검색합니다
					// 더 이상 파일이 남아있지 않을때는 반환값이 0이 되게 됩니다
				}

				FindClose(file_search_handle); // 보통 윈도우에서 HANDLE의 사용이 끝났을때는 CloseHandle을 써야 하지만
				// 파일을 찾을때 사용되는 HANDLE의 경우에는 특수한 녀석이기에 FindClose를 써줘야 합니다
				// -끝-
				//그런데 이 코드가 실행되는 위치를 정해야되잖아요 그래서 endirectorynow함수를 정의 한것이에요...

				// 이 shell 함수에선 endirectorynow를 호출하고 있지 않습니다만?\
                    //제말은 현재 위치를담은 변수

					// 이곳은 윈도우, 리눅스 기준으로 생각하면 낭패입니다
					// 저렇게 다 적어줘야 한다는 것이오

					// 그리고 잠시 endirectorynow로 가보시죠
			}
			else {
				int i = 0;
				while (1) {
					if (strcmp(leftandright.directory.structdirectory_character[i], "\a") == 0) {
						printf("[%d]%%\\a", i, leftandright.directory.structdirectory_character[i]);
					}
					if (i == 100) {
						break;
					}
					printf("[%d]%s\n", i, leftandright.directory.structdirectory_character[i]);
					i++;
				}
			}
		}
		if (strcmp(commandinputer, "release") == 0){
			printf("다람냥 운영환경 4.06 릴리즈\n4.05.0.01\n+ 코드를 윈도우 맞춤으로 재구성함\n\n4.05.0.02\n+ 부팅모드에서 모드를 입력할때 입력받고 종료하는것에서 반복하는것으로 바꿔서 사용자의 부담을 덜함\n\n4.05.0.03\n+ 릴리즈 노트 추가\n+ 쉘에서 나가는 명령어 추가\n+ 부팅 모드에서 나가는 명령어 추가\n\n4.06.0.01\n+ 릴리즈 노트에 개행문자 추가\n+ 치명적인 버그 수정\n\n4.06.0.02\n+ 릴리즈 노트 4.06.0.01 수정\n+ exit에서 필요한 개행문자 추가\n+ 부트모드에서 gui 타이틀 이름 추가\n+ 런모드 gui 타이틀 이름 축뤄\n- 불필요한 열림 삭제(릴리즈 노트, 완전히 나가기)\n\
				\n4.06.1\n+ cd 명령어 추가\n- 입력할때 뒤에 숫자 제거\n! 정식 출시\n\
				4.06.2\n+ cd.. 오류 고침\n+ \\n개행문자 dir 첫거 추가\n\
				\n버그제보: lookout1423@gmail.com\n");
			//system("start msedge.exe lookout1423@gmail.com");
		}
		if (strcmp(commandinputer, "cd") == 0) {
			command_cd();
		}
		if (strcmp(commandinputer, "exit") == 0) { // 잘못 끄셨는디?
			printf("본 프로그램을 종료합니다.\n");
			break;
		}
	}
	return 0;
}

int root(int i1, int i2, int i3, int i4, char i5[100]) {
	switch (i1) {
	case 0:
		printf("we are print developer command code list\n0 print it list\n 1 print opsion\n2 input at varible\n3 if A and B is equal?\n4 var add\n5 var readd\n6 var delete\n7 shutdown\n8 end code\n program command ver is it 1.0");
		break;
	case 1:
		printf("%s", i5);//4.05.0.03
		break;
	case 2:
		scanf("%d", &leftandright.memory.rem.var[i2]);
		break;
	case 3:
		leftandright.file.iflevel += 1;
		if (leftandright.memory.rem.var[i2] != leftandright.memory.rem.var[i3]) {
			leftandright.file.ifcapture = leftandright.file.iflevel;
			while (1) {
				if (leftandright.io.commandnumber[0] == 8) {
					if (leftandright.io.commandnumber[3] == leftandright.file.iflevel) {
						return 3;
					}
				}
				else {
					scaning();
				}
			}
		}
		break;
	case 4:
		leftandright.memory.rem.var[i2] = i3;
		break;

	case 5:
	case 6:
		printf("error: command4 or command5 is dead command. so you dont this command...");
		break;
	case 7: //logoff();
		break;
	case 8:;
		char stringlogs[2][100] = { "ifandlogs", "iglog: peace" };
		programlog(stringlogs[0], stringlogs[1]);
		break;
	}
	return 0;
}

int pop = 0;

void Polzit() {
	switch (pop) {
	case 1:
		printf("hhhhhhh");
		break;
	}
}

#endif