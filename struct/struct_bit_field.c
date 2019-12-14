#include <stdio.h>

struct Flags {
	union {
		struct {
			unsigned short a : 2;
			unsigned short b : 5;
			unsigned short c : 6;
			unsigned short d : 3;
		};
		unsigned short e;
	};
};

int main()
{
	struct Flags f1 = { 0, };

	f1.a = 3; // 3 = 11
	f1.b = 64; // 64 = 1000000
	f1.c = 50; // 50 = 110010
	f1.d = 6; // 6 = 110

	printf("%u\n", f1.e); // 55555 = 110 110010 00000 11

	return 0;
}