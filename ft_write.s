global _ft_write
extern ___error
section .text
    _ft_write:
        mov rax, 0x2000004
        syscall
		jc writefail
		ret
    writefail:
		push rax
		call ___error
		pop qword [rax]
		mov rax, -1
        ret