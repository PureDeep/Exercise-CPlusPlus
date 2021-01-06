	.file	"166csapp3-26.cpp"
	.text
	.globl	_Z5fun_am
	.def	_Z5fun_am;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z5fun_am
_Z5fun_am:
.LFB0:
	.seh_endprologue
	movl	$0, %eax
	jmp	.L2
.L3:
	xorl	%ecx, %eax
	shrl	%ecx
.L2:
	testl	%ecx, %ecx
	jne	.L3
	andl	$1, %eax
	ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 4.9.2"
