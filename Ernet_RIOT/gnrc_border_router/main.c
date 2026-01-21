#include <stdio.h>
#include "msg.h"
#include "shell.h"
#include "shell_commands.h"

#define MAIN_QUEUE_SIZE (8)

static msg_t main_msg_queue[MAIN_QUEUE_SIZE];

int main(void)
{
    msg_init_queue(main_msg_queue, MAIN_QUEUE_SIZE);

    puts("RIOT OS GNRC Border Router");
    puts("Type 'ifconfig' to see interfaces");

    char line_buf[SHELL_DEFAULT_BUFSIZE];
    shell_run(shell_commands, line_buf, SHELL_DEFAULT_BUFSIZE);

    return 0;
}
