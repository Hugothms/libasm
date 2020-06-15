		global 		_ft_strcpy

		section		.text
_ft_strcpy:
		mov	rcx, 0
		mov	rdx, 0
		cmp	rsi, 0
		jz	end
		jmp	copy
incr:
		inc	rcx
copy:
		mov	dl, BYTE [rsi + rcx]
		mov	BYTE [rdi + rcx], dl
		cmp	dl , 0
		jne	incr
end:
		mov	rax, rdi
		ret
