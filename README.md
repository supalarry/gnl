# gnl
Given file descriptor, return current line of the file. 
# usage
Compile library using make -C libft. Then, in your source code use get_next_line function by passing file descriptor and address
of a pointer that will point to the read line. Compile your source code with get_next_line.c and library in libft folder.
For example, gcc main.c get_next_line.c -L ./libft -lft
If line was read, 1 is returned. If whole file has been read, 0 is returned. In case of an error, return -1.
