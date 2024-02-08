#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PROCESSES 5

typedef struct {
    int id;
    char name[50];
} Process;

extern Process processes[MAX_PROCESSES];
extern int processcount;

int nextProcessId();
int createNewProcess(char* processname);
void displayAllProcesses();
void stopProcess(int processid);