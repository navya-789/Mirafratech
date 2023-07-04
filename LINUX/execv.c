#include <stdio.h>
#include <unistd.h>

int main() 
{
    pid_t pid;
    pid = fork();
    if (pid == 0) 
	{
		char *argv[]={"ls","-l"};

//        	char *program_path = "/path/to/your/program";
	        execv("/bin/ls",argv);
	        perror("execv");
	        return 1;
    	}
 else 
	{
	        printf("Parent Process\n");	
	}

    return 0;
}

