global		ft_strlen

section		.text
ft_strlen:
		mov		rax, 0
		jmp		compare

incr:
		inc		rax

compare:
		cmp		BYTE [rdi + rax], 0
		jne		incr
		ret
