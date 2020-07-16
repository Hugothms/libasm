		global		_ft_strlen

		section		.text
_ft_strlen:
		mov		rax, 0
		jmp		compare

incr:
		inc		rax

compare:
		cmp		BYTE [rdi + rax], 0
		jne		incr

done:
		ret
