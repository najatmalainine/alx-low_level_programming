section			.text
		extern	printf
		golbal	main
main:
		mov				edi, msg
		mov				eax, 0
		call	printf

section
		msg	db	'Hello, Holberton', 0xa, 0
