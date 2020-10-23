global _ft_strdup
extern _malloc
extern _ft_strlen
extern _ft_strcpy
extern ___error
section .text
_ft_strdup:
	mov		rsi, rdi
	push	rsi
	call	_ft_strlen
	mov		rdi, rax
	call	_malloc
	cmp		rax, 0
	je		exit
	mov 	rdi, rax
	pop		rsi
	call	_ft_strcpy
	ret

exit:
	pop rsi
	ret