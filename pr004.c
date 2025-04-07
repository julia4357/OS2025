//Программа, илюстрирующая создание процесса-ребёнка при помощи системного вызова fork()
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.y>
int main() {
	pid_t prid, parprid;
	int a = 0, c;
	prid = getpid();
	parprig = getppid();
	printf("До выполнения fork():\n");
	printf("Ид. текущего процесса: %d\n", prid);
	printf("Ид. родительского процесса: %d\n", parprid);
	printf("Начальное значение переменной а: %d", a);
	c = fork();
	a = a+1;
	prid = getpid();
	parprig = getppid();
	printf("После выполнения fork():\n");
	        printf("Ид. текущего процесса: %d\n", prid);
		        printf("Ид. родительского процесса: %d\n", parprid);
			        printf("Значение переменной а: %d", a);
	return 0;
}
