#include <stdio.h>
#include <unistd.h>	//for use "pid"
#include <signal.h>	//for use "signal" in previous programm
#include <sys/types.h>	//for use "pid_t"
#include <stdlib.h>	//for use "atoi"
#include <string.h>	//for use "strcmp"

int main(int argc, char* argv[])
{
	pid_t pid = atoi(argv[1]);	//turn "text" into "number"

	if (strcmp(argv[2] ,"SIGUSR1") == 0){
		kill(pid, SIGUSR1);	//send signal to our(PID) proccesses
	} else if (strcmp(argv[2], "SIGUSR2") == 0) {
		kill(pid, SIGUSR2);
	}

	return 0;
}
