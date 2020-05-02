/*
 * Module: ICT1002
 * Language: C
 * Lab 5 exercise 1
 * Done By: bitxer
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAMSIZ 100

struct header {
    char name[NAMSIZ];
    char size[12];
};

typedef struct header HEADER;
typedef HEADER * HEADER_PTR;

int main(int argc, char ** argv) {
    int s_header = sizeof(HEADER);
    FILE * archive;
    archive = fopen("a.out", "w");
    for (int i = 1; i < argc; i++) {
        char * filename = argv[i];
        FILE * fp;
        fp = fopen(filename, "r");
        if (fp == NULL) {
            printf("Error opening file\n");
        }
        HEADER_PTR FILE_HEAD = malloc(s_header);
        memset(FILE_HEAD->name, 0, NAMSIZ * sizeof(char));
        memset(FILE_HEAD->size, 0, 12 * sizeof(char));
        snprintf(FILE_HEAD->name, NAMSIZ, "%s", filename);
        fseek(fp, 0, SEEK_END);
        sprintf(FILE_HEAD->size, "%ld", ftell(fp));
        fwrite(FILE_HEAD, s_header, 1, archive);

        fseek(fp, 0, SEEK_SET);
        while (!feof(fp)) {
            fputc(fgetc(fp), archive);
        }

        fclose(fp);
    }
        fclose(archive);
    return 0;
}