#include <unistd.h>

int main() {
    char *arg[2];
    arg[0] = "/bin/getflag";
    arg[1] = NULL;
    execve(arg[0], arg, arg);
    return (0);
}
