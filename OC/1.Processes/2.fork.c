/*
	создаёт копии самой себя и выводит идентификатор текущего и родительского процесса (видно, что идентификаторы меняются)
*/
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	printf("PPID: %d\n",getppid());
        printf("PID: %d\n",getpid());
	if (fork() == 0) {
		printf("PID: %d\n",getpid());
	} else {
		printf("PPID: %d\n",getpid());
	}
	return 0;
}
