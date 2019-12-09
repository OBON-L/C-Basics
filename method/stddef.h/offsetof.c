#include <stdio.h>
#include <stddef.h>

#pragma pack(push, 1)
struct Packet {
	char pack1;
	short pack2;
} pkt;
#pragma pack(pop)

int main()
{
	printf("%d\n", offsetof(struct Packet, pack1)); // 0
	printf("%d\n", offsetof(struct Packet, pack2)); // 1

	printf("%d\n", sizeof(pkt)); // 3

	return 0;
}