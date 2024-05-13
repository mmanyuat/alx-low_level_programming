section .data
    hello_msg db 'Hello, Holberton', 0x0A, 0x00  ; Null-terminated string with newline

section .text
    global main

extern printf, exit   ; Import printf and exit functions from C standard library

main:
    ; Prepare arguments to call printf
    lea rdi, [rel hello_msg]  ; Load address of hello_msg into rdi
    call printf               ; Call printf to print the string

    ; Exit the program
    mov edi, 0      ; Set exit status to 0
    call exit       ; Call exit to terminate the program
