global _ft_strcmp
section .text
    _ft_strcmp:
        mov cl, [rdi]
        mov dl, [rsi]
        inc rdi
        inc rsi
        cmp cl, dl
		jz ft_zero
        je _ft_strcmp
        jg ft_retg
        jl ft_retl

	ft_zero:
		cmp cl, dl
		jg ft_retg
        jl ft_retl
        mov rax, 0
        ret
    ft_retg:
        mov rax, 1
        ret
    ft_retl:
        mov rax, -1
		ret
