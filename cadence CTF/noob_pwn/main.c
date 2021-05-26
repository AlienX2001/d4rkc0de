#include <stdio.h>
#include <sys/mman.h>
#include <unistd.h>



void init() {
	setvbuf(stdin , NULL , _IONBF , 0);
	setvbuf(stdout , NULL , _IONBF , 0);
	setvbuf(stderr , NULL , _IONBF , 0);
}

int main() {
	init();
	puts("Send me some code to execute:");
	void *data = mmap(0 , 256 , PROT_READ|PROT_WRITE|PROT_EXEC  , MAP_PRIVATE|MAP_ANONYMOUS , -1 , 0);
	
	for(int i=0 ; i<256 ; i++) {
		read(0 , &((char *)data)[i] , 1);
	}
#if 0
	asm("int3"
			:
			:);
#endif
	((void (*)(void)) data)();
}
