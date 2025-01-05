
;SECTION .TEXT
GLOBAL inc
GLOBAL add
GLOBAL sub

inc:
	mov rax, rdi
	inc rax
	
	ret
	
add:
	push rsi
	mov rax, rdi
	pop r10
	add rax,r10
	
	ret
    	     
	
sub:
    push rsi
	mov rax, rdi
	pop r10
	sub rax,r10
				    
	ret                     

	
	
; nasm -f elf64 trial.asm  -o trial.o
; gcc -no-pie trial.c trial.o -o project
; ./project