global _ft_write
section .text
    _ft_write:
        mov rax, 0x2000004
        syscall
		writefail
		ret
    writefail:
        mov rax, -1
        syscall