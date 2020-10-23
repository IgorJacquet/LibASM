segment .text
	global _ft_strcpy
_ft_strcpy:
	mov r8, rdi

loop:
	mov	cl, [rsi]
	mov [r8], cl
	cmp cl, 0
	je	exit
	inc	rsi
	inc	r8
	jmp loop

exit:
	mov	rax, rdi
	ret