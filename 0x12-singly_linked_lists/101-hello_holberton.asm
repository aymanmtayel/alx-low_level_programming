section .data
message db 'Hello, Holberton', 0
format db '%s',10,0

section .text
global main
extern printf

main:
push rbp
mov rbp, rsp

mov rdi, format
mov rsi, message
xor rax, rax
call printf

mov rsp, rbp
pop rbp
xor eax, eax
ret
