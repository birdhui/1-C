// 포인터는 특정 데이터가 저장된 메모리의 주소를 저장하는 변수
// 다른 곳의 주소 그 자체를 가르킴
// 프로그램의 어떠한 위치에서 시행되더라도 특정한 주소를 그대로 이용하기 때문에
// 값이 즉시 변경된다는 특징을 가지고 있음
// -> C언어의 가장 큰 특징이자 장점

#include <stdio.h>

int main()
{
	int x = 0x12345678;
	unsigned char* xp = (char*)&x;
	// x의 주소값을 char형으로 반환

	printf("바이트순서: %x %x %x %x\n", xp[0], xp[1], xp[2], xp[3]);
	// xp의 배열을 출력

	if (xp[0] == 'Ctrl-R DC2')
		printf("해당 CPU는 빅엔디언입니다.\n");
	else if (xp[0] == 'x')
		printf("해당 CPU는 리틀 엔디언입니다.\n");

	return 0;
}