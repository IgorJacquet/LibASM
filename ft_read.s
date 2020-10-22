global _ft_read
section .text
    _ft_read:
        mov rax, 0x2000003
        syscall
        cmp rax, -1
		je writefail
		ret
    writefail:
        mov rax, -1
        syscall