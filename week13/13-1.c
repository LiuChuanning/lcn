#include"my.h"
void sigtoutine (int duno)
{
	switch(duno)
	{
		case 1:
			printf("Get a signal SIGHUP\n");
			break;
		case 2:
			printf("Get a signal SIGHUP\n");
			break;
		case 3:
			printf("Get a signal SIGHUP\n");
			break;
	}

}

int main()
{
	printf("process id is %d\n",getpid());
	signal(SIGHUP,sigtoutine);
	signal(SIGINT,sigtoutine);
	signal(SIGQUIT,sigtoutine);
	while(1);
	
}
