﻿// 주석 - 코드로 인식되지 않는다.

int main()
{
	// int : 자료형 (크기 단위, byte) 즉, Data Type 이다.
		// 정수형 : char(1), short(2), int(4), long(4), long long(8)
		// 실수형 : float(4), double(8)
	// i : 변수명

	int i = 0; // 1. 정수표현 방식을 따른다 2. 크기는 4byte이다.
	
	// 1바이트로 양수만 표현
	// 256 가지 -> 0 ~ 255
	unsigned char c = 0;		
	c = 0;
	//c = 255;
	c = -1;

	// 1 바이트로 양수, 음수 둘다 표현
	// -128 ~ 0 ~ 127
	char c1 = 0;
	return 0;
}