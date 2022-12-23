// 배열 선언_극장 예약 시스템_Renewal
// 1202~1223
// 1 로그인 : ID/PW 받아서 맞으면 로그인 성공 / 틀리면 ID값 다시 받기 (3번까지)
// 2 회원가입 : 회원이 아니면 ID/PW 새로 만들기(원하는 명 수까지) / 틀리면 ID값 다시 받기 (3번까지)
// 3 종료 : 지정해 놓은 종료 문자를 누르면 비회원으로 전환되게 만들기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 로그인을 위한 구조체
typedef struct login {
	char id[10];
	char pwd[10];
}Login;

// 회원가입을 위한 구조체
typedef struct member {
	char id[10];
	char pwd[10];
}Member;

int member(Member* m, int* size);				// 구조체 포인터를 이용한 회원가입 함수
int login(Login* c);					// 구조체 포인터를 이용한 로그인 함수
void theater_print(int seats[][10]);			// 좌석 출력 함수
void theater_reservation(int seats[][10]);		// 좌석 예약 함수
int seats[10][10] = { 0 };						// 배열 전역 변수

int main()
{
	Login y_log = { "sehui", "tpgml6817" };	// 지정해놓은 아이디와 비밀번호 값
	Member m_log;	// 회원가입 구조체 변수

	char ans;	// 회원이십니까 물음에 대한 답을 답을 문자형 변수
	int i = 0, mem_ans;

	while (1) {
		printf("안녕하세요 영화 예약 시스템입니다.\n");
		printf("회원이십니까? (예:y 아니오:n 비회원:e): ");
		scanf("%c", &ans);

		if (ans == 'y') {
			i = login(&y_log);
		}
		else if (ans == 'n') {
			printf("회원가입을 진행합니다.\n");
			printf("몇 분의 회원가입이 필요하십니까?(예. 1명: 1, 2명: 2): ");
			scanf("%d", &mem_ans);

			member(&m_log, &mem_ans);
		}
		else if (ans == 'e') {
			printf("로그인 시스템을 종료합니다.\n");
			printf("비회원으로 전환됩니다.\n");
		}
		theater_print(seats);
		theater_reservation(seats);
	}

	return 0;
}

int login(Login* c)
{
	int count = 0;
	char id[10] = { 0 }, pwd[10] = { 0 };

	printf("아이디를 입력해주세요: ");
	scanf("%s", &id);
	printf("비밀번호를 입력해주세요: ");
	scanf("%s", pwd);

	for (int i = 0; i < 10; i++) {
		if ((strcmp(c[i].id, id) == 0) && (strcmp(c[i].pwd, pwd) == 0)) {
			printf("로그인이 완료되었습니다.\n");
			break;
		}
		else if ((strcmp(c[i].id, id) != 0) || (strcmp(c[i].pwd, pwd) != 0)) {
			printf("아이디와 비밀번호가 틀렸습니다.\n");
			printf("아이디를 다시 입력해주세요: ");
			scanf("%s", id);
			printf("비밀번호를 다시 입력해주세요: ");
			scanf("%s", pwd);
			count++;
			if ((strcmp(c->id, id) == 0) && (strcmp(c->pwd, pwd) == 0)) {
				printf("로그인이 완료되었습니다.\n");
				break;
			}
			else if (count >= 3) {
				printf("3번의 로그인 시도 횟수를 초과했습니다.\n");
				printf("비회원으로 전환됩니다.\n");
				break;
			}
		}
	}
	return 0;
}

int member(Member* m, int* size)
{
	int i, count = 0;
	char id[10] = { 0 }, pwd[10] = { 0 };

	for (i = 0; i < *size; i++) {
		printf("새로 등록하실 아이디를 입력해주세요: ");
		scanf("%s", m[i].id);
		printf("새로 등록하실 비밀번호를 입력해주세요: ");
		scanf("%s", m[i].pwd);
		printf("%s님의 가입이 완료되었습니다.\n\n", m[i].id);
	}

	for (i = 0; i < 10; i++) {
		printf("아이디를 입력해주세요: ");
		scanf("%s", id);
		printf("비밀번호를 입력해주세요: ");
		scanf("%s", pwd);

		if ((strcmp(m[i].id, id) == 0) && (strcmp(m[i].pwd, pwd) == 0)) {
			printf("로그인이 완료되었습니다.\n");
			break;
		}
		else if ((strcmp(m[i].id, id) != 0) || (strcmp(m[i].pwd, pwd) != 0)) {
			printf("아이디와 비밀번호가 틀렸습니다.\n");
			printf("아이디를 다시 입력해주세요: ");
			scanf("%s", id);
			printf("비밀번호를 다시 입력해주세요: ");
			scanf("%s", pwd);
			++count;
			if ((strcmp(m->id, id) == 0) && (strcmp(m->pwd, pwd) == 0)) {
				printf("로그인이 완료되었습니다.\n");
				break;
			}
			else if (count >= 3) {
				printf("3번의 로그인 시도 횟수를 초과했습니다.\n");
				printf("비회원으로 전환됩니다.\n");
				break;
			}
		}
	}
	return 0;
}

// 좌석 출력 함수
void theater_print(int seats[][10])
{
	int i, j;
	printf("------------------------------------------\n");
	printf("   1   2   3   4   5   6   7   8   9   10 \n");
	printf("   11  12  13  14  15  16  17  18  19  20 \n");
	printf("   21  22  23  24  25  26  27  28  29  30 \n");
	printf("   31  32  33  34  35  36  37  38  39  40 \n");
	printf("   41  42  43  44  45  46  47  48  49  50 \n");
	printf("   51  52  53  54  55  56  57  58  59  60 \n");
	printf("   61  62  63  64  65  66  67  68  69  70 \n");
	printf("   71  72  73  74  75  76  77  78  79  80 \n");
	printf("   81  82  83  84  85  86  87  88  89  90 \n");
	printf("   91  92  93  94  95  96  97  98  99  100 \n");
	printf("------------------------------------------\n");

	// 현재 좌석 예약 상태 출력
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			printf("   %d", seats[i][j]);
		}
		printf("\n");
	}
}

// 좌석 예약 함수
void theater_reservation(int seats[][10])
{
	int i, ans2, ans3;
	char ans;

	// 입력값이 'y'이면
	while (1) {
		printf("안녕하세요 영화 예매를 도와주는 시스템입니다.\n");
		printf("좌석을 예약하시겠습니까? (y 또는 n): ");
		scanf(" %c", &ans);

		if (ans == 'y') {													// 예약 인원수 입력
			printf("예약 인원수를 입력해주세요: ");
			scanf("%d", &ans2);

			for (i = 0; i < ans2; i++) {									// 인원수 만큼 좌석 예약 메세지 출력
				printf("몇 번째 좌석을 예약하시겠습니까? : ");
				scanf("%d", &ans3);

				if (ans3 <= 0 || ans3 > 100) {								// 입력된 좌석이 지정 좌석 수를 넘는지 아닌지 검사
					i--;
					continue;
				}
				// 1 ~ 100 좌석 = 배열[0 ~ 9][0 ~ 9]
				if (seats[ans3 / 10][ans3 % 10 - 1] == 0) {					// 선택한 좌석의 2차원 배열의 값이 0이라면,
					seats[ans3 / 10][ans3 % 10 - 1] = 1;					// 맞는 위치의 배열에 1을 대입
					printf("예약이 완료되었습니다.\n");
				}
				else if (seats[ans3 / 10][ans3 % 10 - 1])					// 선택 좌석의 배열 값이 1이라면 = 이미 예약된 자리
					printf("이미 예약된 자리입니다.\n");
			}
		}
		else if (ans == 'n') {												// 'n'이면 프로그램 종료
			printf("영화 예약 시스템을 종료합니다.\n");
			break;
		}
		theater_print(seats);												// 좌석 상태 출력 함수 호출
	}
}