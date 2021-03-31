section	.text
	global	_ft_strdup
	extern	_ft_strcpy
	extern	_ft_strlen
	extern	_malloc

_ft_strdup:
	push	rdi
	call	_ft_strlen
	inc		rax
	mov		rdi, rax
	call	_malloc
	mov		rdi, rax
	pop		rsi
	call	_ft_strcpy
	ret



; char	*ft_strdup(const char *s)
; {
; 	char	*result;
; 	char	*temp;
; 	size_t	len;

; 	len = ft_strlen(s);
; 	if (!(result = (char *)malloc(sizeof(char) * (len + 1))))
; 		return (0);
; 	temp = result;
; 	while (len--)
; 		*temp++ = *s++;
; 	*temp = '\0';
; 	return (result);
; }
