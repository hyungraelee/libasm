section .text
	global _ft_strlen

_ft_strlen:
	mov	rax, 0
	jmp	loop

loop:
	cmp	Byte [rdi], 0
	je	end
	inc	rax
	inc	rdi
	jmp	loop

end:
	ret



; size_t	ft_strlen(const char *s)
; {
; 	size_t	res;

; 	res = 0;
; 	while (s++)
; 		res++;
; 	return (res);
; }
