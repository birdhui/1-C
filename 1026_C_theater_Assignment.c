// 배열 선언_극장 예약 시스템_Renewal
// 1201~1202
// 1 로그인 : ID/PW 받아서 맞으면 로그인 성공 / 틀리면 ID값 다시 받기 (3번까지)
// 2 회원가입 : 회원이 아니면 ID/PW 새로 만들기 / 틀리면 ID값 다시 받기 (3번까지)
// 3 종료 : 지정한 종료 문자를 누르면 종료되게 만들기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 11
#define NUM 3

void login_file();		// 파일 저장 로그인 시도
void login();									// 로그인 함수 선언
void theater_print(int seats[][10]);			// 좌석 출력 함수 선언
void theater_reservation(int seats[][10]);		// 좌석 예약 함수 선언
int seats[10][10] = { 0 };						// 배열 전역 변수

int main()
{
	login_file();
	login();
	theater_print(seats);
	theater_reservation(seats);
	
	return 0;
}



struct login {
	char id[11];
	int pw;
};

// 로그인 함수
void login()
{
	struct login list[NUM];
	int i, result = 0, pw1, pw2;
	char ans, id1[SIZE] = { 0 }, id2[SIZE] = { 0 }, idd[SIZE] = "sehui";
	// char 배열 [11]인 이유 : 한글은 2바이트 차지, 영어는 1바이트 차지

	while (1) {
		printf("안녕하세요 영화 예약 홈페이지입니다.\n");
		printf("회원이십니까? (예:y 아니오:n 비회원:e): ");			// e누르면 전체 종료를 할 수 없어 임시로 비회원으로 만듦 ㅠ
		scanf("%c", &ans);

		for (i = 0; i < 1; i++) {
			if (ans == 'y') {
				printf("아이디를 입력해주세요: ");
				scanf("%s", id1);
				printf("비밀번호를 입력해주세요: ");
				scanf("%d", &pw1);

				for (i = 0; i < SIZE; i++) {
					if (idd[i] == id1[i] && pw1 == 1234) {
						printf("로그인이 완료되었습니다.\n");
						break;
					}

					else if (idd[i] != id1[i] && pw1 != 1234) {
						for (i = 0; i < NUM; i++) {
							printf("틀렸습니다. 아이디와 비밀번호를 다시 입력해주세요. (3번 중 %d시도)\n", i + 1);
							printf("\n");
							printf("아이디를 입력해주세요: ");
							scanf("%s", id1);
							printf("비밀번호를 입력해주세요: ");
							scanf("%d", &pw1);
						}
					}
				}
			}


			/*
			for (i = 0; i < SIZE; i++) {
				if (idd[i] == id1[i]) {
					printf("비밀번호를 입력해주세요: ");
					scanf("%d", &pw1);

					if (pw1 == 1234) {
						printf("로그인 성공!\n");
					}
				}

				else if (id1[i] != 0 && pw1 != 0) {
					printf("틀렸습니다. 아이디와 비밀번호를 다시 입력해주세요.\n");
					printf("\n");
				}
			}
			break;
		}
		*/

			else if (ans == 'n') {
				printf("회원가입을 진행합니다. \n");

				for (i = 0; i < SIZE; i++) {
					printf("ID를 입력해주세요(영어 소문자, 5자까지만 가능): ");
					scanf("%s", list[i].id);
					printf("PW를 입력해주세요: ");
					scanf("%d", &list[i].pw);
					printf("가입이 완료되었습니다. 로그인을 시도합니다. (3번 중 %d시도)\n", i + 1);
					printf("아이디를 입력해주세요: ");
					scanf("%s", id2);
					printf("비밀번호를 입력해주세요 : ");
					scanf("%d", &pw2);
					printf("\n");

					if (list[i].id == id2[i] && list[i].pw == pw2) {
						printf("로그인이 완료되었습니다.\n\n");
						break;
					}

					if (list[i].id != id2[i] && list[i].pw != pw2) {
						for (i = 0; i < NUM; i++) {
							printf("아이디와 비밀번호가 틀렸습니다. 다시 시도해주세요.(3번 중 %d시도)\n", i + 1);
							printf("아이디를 입력해주세요: ");
							scanf("%s", id2);
							printf("비밀번호를 입력해주세요 : ");
							scanf("%d", &pw2);
						}
					}
				}
				printf("로그인 횟수를 초과했습니다. 프로그램을 종료합니다.\n");
				break;
			}

			else if (ans == 'e') {								// 'e'이면 프로그램 종료
				printf("영화 예약 시스템을 종료합니다.\n");
				printf("비회원으로 예약을 진행합니다.\n\n");
			}
		}
		break;
	}
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
				else if (seats[ans3 / 10][ans3 % 10 - 1 ])					// 선택 좌석의 배열 값이 1이라면 = 이미 예약된 자리
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