	.file	"129mstore.cpp"
	.text
	.globl	_Z9multStorellPl
	.def	_Z9multStorellPl;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z9multStorellPl
_Z9multStorellPl:
.LFB0:
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%r8, %rbx
	call	_Z5mult2ll
	movl	%eax, (%rbx)
	addq	$32, %rsp
	popq	%rbx
	ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 4.9.2"
	.def	_Z5mult2ll;	.scl	2;	.type	32;	.endef
