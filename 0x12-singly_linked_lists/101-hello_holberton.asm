hello db `Hello, Holberton\n`,0
format: db "%s",0

section:
global main
extern printf

main:
push rbp
mov rbp,rsp

sub rsp,8
mov rsi,hello
mov rdi,format
mov eax,0
call printf

add rsp,8

mov eax,0
leave
ret
