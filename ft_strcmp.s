global _ft_strcmp
section .text
_ft_strcmp:
	mov		cl, [rdi]
	mov		dl, [rsi]
	inc 	rdi
	inc 	rsi
	cmp		cl, 0
	je		exit
	cmp		dl, 0
	je		exit
	cmp 	cl, dl
	je	 	_ft_strcmp
	call 	exit

exit:
	movzx	rax, cl
    movzx	rbx, dl
    sub		rax, rbx
	ret