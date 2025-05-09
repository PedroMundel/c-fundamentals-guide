#include <stdio.h>

// This program demonstrates how to write to a file, append to a file, and read from a file in C.

// Creating a file
void writeEmployees() {
    FILE *fpointer = fopen("employees.txt", "w");
            // Open file in write mode. r = read, w = write, a = append 
            //If the file does not exist, it will be created.

    if (fpointer == NULL) {
        printf("Error.\n");
        return;
    }

    fprintf(fpointer, 
        "Jim Halpert, 30, Salesman\n"
        "Pam Beesly, 28, Receptionist\n"
        "Dwight Schrute, 32, Assistant to the Regional Manager\n"
        "Michael Scott, 40, Regional Manager\n"
    );

    fclose(fpointer);
}

// Append to the file
void appendEmployees() {
    FILE *fpointer = fopen("employees.txt", "a");
    if (fpointer == NULL) {
        printf("Error.\n");
        return;
    }

    fprintf(fpointer, 
        "Ryan Howard, 25, Temp\n"
        "Angela Martin, 35, Head of Accounting\n"
    );

    fclose(fpointer);
}

// Read the file
void readEmployees() {
    FILE *fpointer = fopen("employees.txt", "r");
    if (fpointer == NULL) {
        printf("Error.\n");
        return;
    }

    char line[256];
    while (fgets(line, sizeof(line), fpointer)) {
        printf("%s", line);
    }

    fclose(fpointer);
}

int main() {
    writeEmployees();   
    appendEmployees();
    readEmployees(); 
    return 0;
}
