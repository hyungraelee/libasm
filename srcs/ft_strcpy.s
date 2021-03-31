section .text
	global	_ft_strcpy

_ft_strcpy:
	mov	rcx, 0
	cmp	Byte[rsi], 0
	jne	loop
	mov	Byte[rdi], 0
	mov	rax, rdi
	ret

loop:
	mov	dl, Byte[rsi + rcx]
	mov	Byte[rdi + rcx], dl
	inc	rcx
	cmp	Byte[rsi + rcx], 0
	jne	loop
	mov	Byte[rdi + rcx], 0
	mov	rax, rdi
	ret

; char*	ft_strcpy(char * dst, const char * src)
; {
; 	if (*src)
; 	{
; 		*dst++ = *src++
; 	}
; 	*dst = '\0'
; 	return dst;
; }
