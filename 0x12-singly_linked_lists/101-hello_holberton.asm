section .data
msg db 'Hello, Holberton', 0
type db '%s',10,0

section .text
global main
extern printf

main:
push rbp
mov rbp, rsp

mov rdi, type
mov rsi, msg
xor rax, rax
call printf

mov rsp, rbp
pop rbp
xor eax, eax
ret
