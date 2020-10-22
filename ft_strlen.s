global _ft_strlen
section .text

_ft_strlen:
    mov     rax, -1
    jmp     count
count:
	mov		cl, [rdi]
	inc 	rdi
    inc     rax
	cmp		cl, 0
	jne	 	count
	ret