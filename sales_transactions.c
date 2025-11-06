/*
Name: Fidelis
Reg:CT100/G/26151/25
Des: A program that manages the sales transaction file.
*/
#include <stdio.h>//printf, //scanf, //fopen, //fclose
int main(void) {
    FILE *fp = fopen("sales.txt", "r");

    if (!fp) {
        perror("Error opening sales.txt");
        return EXIT_FAILURE;
    }

    double amount;
    double total = 0.0;
    int line = 0;
    char buf[256];

    while (fgets(buf, sizeof(buf), fp) != NULL) {
        line++;
        /* skip empty lines */
        if (sscanf(buf, " %lf", &amount) == 1) {
            total += amount;
        } else {
            /* handle a malformed line gracefully */
            fprintf(stderr, "Warning: couldn't parse amount on line %d -> '%s'\n", line, buf);
        }
    }

    if (ferror(fp)) {
        perror("Error reading sales.txt");
        fclose(fp);
        return EXIT_FAILURE;
    }

    if (fclose(fp) == EOF) {
        perror("Error closing sales.txt");
        return EXIT_FAILURE;
    }

    printf("Total sales for the day: %.2f\n", total);
    return EXIT_SUCCESS; 
	}