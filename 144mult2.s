	.file	"144mult2.cpp"
	.intel_syntax noprefix
	.text
	.globl	_Z9multstorellPl
	.def	_Z9multstorellPl;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z9multstorellPl
_Z9multstorellPl:
.LFB0:
	push	rbx
	.seh_pushreg	rbx
	sub	rsp, 32
	.seh_stackalloc	32
	.seh_endprologue
	mov	rbx, r8
	call	_Z5mult2ll
	mov	DWORD PTR [rbx], eax
	add	rsp, 32
	pop	rbx
	ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 4.9.2"
	.def	_Z5mult2ll;	.scl	2;	.type	32;	.endef
