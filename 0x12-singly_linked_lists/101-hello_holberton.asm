section .data
    hello_msg db 'Hello, Holberton', 0
    format db '%s', 0
    newline db 10, 0

section .text
    extern printf

global _start

_start:
    ; Push arguments for printf onto the stack
    push qword hello_msg
    push qword format
    call printf
    add rsp, 16     ; Adjust the stack pointer after the printf call
    
    ; Print a new line
    push qword newline
    push qword format
    call printf

    ; Exit the program
    xor rdi, rdi
    call exit

exit:
    mov rax, 60     ; System call number for exit
    xor rdi, rdi    ; Exit status 0
    syscall

