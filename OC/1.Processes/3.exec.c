/*
	реализация программы их пункта 2 с помощью создания процесса с новым кодом (вызов exec)
*/
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	char *args[]={NULL};
	execvp("./fork",args);
	return 0;
}
