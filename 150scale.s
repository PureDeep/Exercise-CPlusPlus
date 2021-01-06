	.file	"150scale.cpp"
	.text
	.globl	_Z5scalelll
	.def	_Z5scalelll;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z5scalelll
_Z5scalelll:
.LFB0:
	.seh_endprologue
	leal	(%rcx,%rdx,4), %edx
	leal	(%r8,%r8,2), %eax
	sall	$2, %eax
	addl	%edx, %eax
	ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 4.9.2"
