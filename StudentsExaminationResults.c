/*
 Name: Fidelis
Reg:CT100/G/26151/25
Des: StudentsExaminationResults.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 50

typedef struct {
    char name[NAME_LEN];
    int regno;
    int total_marks;
} Student;

int main(void) {
    FILE *fp = fopen("results.dat", "wb");
    if (!fp) { perror("open"); return 1; }

    Student s1 = { "Gladys Wambui", 101, 72 };
    Student s2 = { "John Mwangi", 102, 85 };
    Student s3 = { "Claire Njeri", 103, 90 };

    fwrite(&s1, sizeof(Student), 1, fp);
    fwrite(&s2, sizeof(Student), 1, fp);
    fwrite(&s3, sizeof(Student), 1, fp);

    fclose(fp);
    printf("Sample results.dat created.\n");
    return 0;
}