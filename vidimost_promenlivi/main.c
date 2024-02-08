#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "processes.h"

int main() {
    int option;
    char processname[50];
    int processid;

    while (1) {
        printf("\nTask Manager Menu: \n");
        printf("1. Create New Process\n");
        printf("2. Display All Processes\n");
        printf("3. Stop Process\n");
        printf("4. Exit\n");
        printf("Enter your option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Enter the process name: ");
                scanf("%s", processname);
                processid = createNewProcess(processname);
                if (processid == 0) {
                    printf("Maximum number of processes has been reached.\n");
                } else {
                    printf("Process with ID %d created successfully.\n", processid);
                }
                break;
            case 2:
                displayAllProcesses();
                break;
            case 3:
                printf("Enter the process ID to stop: ");
                scanf("%d", &processid);
                stopProcess(processid);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid option.\n");
        }
    }

    return 0;
}