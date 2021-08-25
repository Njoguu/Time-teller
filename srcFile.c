# include <stdio.h>
# include <time.h> // --> imports time library


char name[10];

main (){
	
//	accept user's name as input

	printf("Welcome user, What is your name:");
	scanf("%s", name);
	
	
//	Reads the current time and see the time of the day

	time_t t;
    t = time(NULL);
    struct tm tm;
	tm = *localtime(&t);
	
	
//	prints the time of the day
	if (tm.tm_hour >= 0 , tm.tm_hour < 12){
		printf("Good morning %s \n", name);
		printf("Current time is %d:%d", tm.tm_hour,tm.tm_min);
	}
	else if(tm.tm_hour >= 12 , tm.tm_hour < 15){
		printf("Good afternoon %s \n", name);	
		printf("Current time is %d:%d", tm.tm_hour,tm.tm_min);
	}	
	else if(tm.tm_hour >=15 , tm.tm_hour < 19){
		printf("Good evening %s \n", name);
		printf("Current time is %d:%d", tm.tm_hour,tm.tm_min);
	}
	else{
		printf("Good night %s \n", name);
		printf("Current time is %d:%d", tm.tm_hour,tm.tm_min);
	}

	return 0;
}

