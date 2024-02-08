#include "processes.h"

Process processes[MAX_PROCESSES];
int processcount = 0;

int nextProcessId() {
    static int currentId = 1;
    return currentId++;
}

int createNewProcess(char* processname) {
    if (processcount == MAX_PROCESSES) {
        return 0;
    }

    int newId = nextProcessId();
    Process newProcess = {newId, processname};
    processes[processcount++] = newProcess;

    return newId;
}

void displayAllProcesses() {
    printf("\nList of all processes:\n");
    for (int i = 0; i < processcount; i++) {
        printf("Process ID: %d\n", processes[i].id);
        printf("Process Name: %s\n", processes[i].name);
    }
}

void stopProcess(int processid) {
    for (int i = 0; i < processcount; i++) {
        if (processes[i].id == processid) {
            processes[i] = processes[--processcount];
            printf("Process with ID %d stopped successfully.\n", processid);
            return;
        }
    }

    printf("No process with ID %d found.\n", processid);
}