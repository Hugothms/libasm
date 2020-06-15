		global 		_ft_strcmp
		section		.text

_ft_strcmp:
		push 	r8
		push 	r9
		push 	rcx
		mov  	r8, rdi
		mov  	r9, rsi
		mov  	rcx, -1

comp:
		inc  	rcx
		cmp  	byte [r8 + rcx], 0
		je   	end
		mov  	dl, byte [r8 + rcx]
		cmp  	dl, byte [r9 + rcx]
		je   	comp

end:

		xor  	rax, rax
		mov  	al, byte [r8 + rcx]
		sub  	al, byte [r9 + rcx]
		jnc  	end2

		neg  	al
		neg  	eax

end2:
		pop 	rcx
		pop 	r9
		pop 	r8
		ret
