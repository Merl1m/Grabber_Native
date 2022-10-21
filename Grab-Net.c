#include <stdio.h>
#include <stdlib.h>

void grab_save(void);

int main(int argc, char *argv[])
{
    if(argc != 1)
    {
        printf("Binary File Doesn't take any additional arguments\n");
        return 1;
    }
    grab_save();
    return 0;
}

void grab_save(void)
{
    char cmd[80] = "cp -r /etc/NetworkManager/system-connections ./dist";
    if(system(cmd) == 0)
    {
        printf("Good to Go...");
    }
    else
    {
        printf("Something Caused an Error during execution...");
    }
}

