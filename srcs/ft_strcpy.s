		global 		ft_strcpy
		
		section		.text
ft_strcpy:
		mov	rcx, 0
		mov	rdx, 0
		cmp	rsi, 0
		jnz	copy
		jmp	end
incr:
		inc	rcx
copy:
		mov	dl, BYTE [rsi + rcx]
		mov	BYTE [rdi + rcx], dl
		cmp	dl , 0
		jz	end
		jmp	incr
end:
		mov	rax, rdi
		ret
