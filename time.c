#include <stdio.h>
#include <time.h>

int main() {
	time_t actual_time = time(NULL);
	if (actual_time != -1) {
		printf("%ld\n", actual_time);
		struct tm* t = gmtime(&actual_time);
		printf("Hour: %d\n", t->tm_hour);
		printf("%s\n", asctime(gmtime(&actual_time)));
	}
	
	return 0;
}