#include <stdio.h>
#include <unistd.h>	//for use "getpid"
#include <signal.h>	//for use "signal"

char* lines[] = {
	"called DEFAULT",
	"called SIGUSR1",
	"called SIGUSR2"
};

int i = 0;
void switcher(int sigusr){
        switch (sigusr){
                case SIGUSR1:
			 i = 1;
		break;
		case SIGUSR2:
			 i = 2;
		break;
                default:
			 i = 0;
        }
}

int main(void){
	printf("PID for use in next programm = %d\n",getpid());
	signal(SIGUSR1,switcher);
	signal(SIGUSR2,switcher);
	while (1){
		char* line = lines[i];
		printf("%s\n", line);
		sleep(5);
	}

	return 0;
}
