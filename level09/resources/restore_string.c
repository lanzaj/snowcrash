#include <stdio.h>
#include <stdlib.h>

void shift_char(const char *fileName) {
    FILE *file = fopen(fileName, "r+");
    
    if (file == NULL) {
        perror("Error");
        return;
    }

    int shift = 0;
    int c;
    
    while ((c = fgetc(file)) != EOF) {
        fseek(file, -1, SEEK_CUR);
        
        fputc(c - shift, file);
        shift++;
    }
    
    fclose(file);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        return 1;
    }
    shift_char(argv[1]);
    return 0;
}