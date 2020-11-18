	.file	"160csapp3-20.cpp"
	.text
	.globl	_Z5arithl
	.def	_Z5arithl;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z5arithl
_Z5arithl:
.LFB0:
	.seh_endprologue
	leal	7(%rcx), %eax
	testl	%ecx, %ecx
	cmovns	%ecx, %eax
	sarl	$3, %eax
	ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 4.9.2"
