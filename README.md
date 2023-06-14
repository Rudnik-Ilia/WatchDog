# WatchDog
 My project is a C-based watchdog that monitors program stability, automatically restarting when needed. It features a custom sorted linked list priority queue, a self-built scheduler, and efficient inter-process communication (IPC).
 
 To use the program:

- Download the repository and navigate to its directory.
- Run the "./compiler.sh" file to compile the code and generate two executable files: "user" and "dog".
- Execute "./user" in the terminal to start the program. Colorful messages will be displayed.
- To terminate the processes, press "Ctrl + C" or use the "ps a" command to find the process ID and kill it using "kill -9 <id>".
- Killing the "user" process will trigger the watchdog ("dog") to revive it, and vice versa.
- If desired, you can change the program being watched by modifying the "PATH" variable in "Dog.c". Alternatively, enable the mode to pass environmental variables when calling the user program.
- Note that this program is intended for use in a Linux operating system.
- Additionally, you can disable the printing of messages in the command line by using the appropriate flag during compilation.
