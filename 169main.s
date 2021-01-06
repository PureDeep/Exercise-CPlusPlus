	.file	"169main.cpp"
	.text
	.def	_Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
	.seh_proc	_Z41__static_initialization_and_destruction_0ii
_Z41__static_initialization_and_destruction_0ii:
.LFB1067:
	subq	$40, %rsp
	.seh_stackalloc	40
	.seh_endprologue
	cmpl	$1, %ecx
	jne	.L1
	cmpl	$65535, %edx
	jne	.L1
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitC1Ev
	leaq	__tcf_0(%rip), %rcx
	call	atexit
	nop
.L1:
	addq	$40, %rsp
	ret
	.seh_endproc
	.def	__tcf_0;	.scl	3;	.type	32;	.endef
	.seh_proc	__tcf_0
__tcf_0:
.LFB1068:
	subq	$40, %rsp
	.seh_stackalloc	40
	.seh_endprologue
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitD1Ev
	nop
	addq	$40, %rsp
	ret
	.seh_endproc
	.globl	_Z4funcv
	.def	_Z4funcv;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z4funcv
_Z4funcv:
.LFB1060:
	.seh_endprologue
	movl	$0, %eax
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB1061:
	subq	$40, %rsp
	.seh_stackalloc	40
	.seh_endprologue
	call	__main
	call	_Z4funcv
	movl	%eax, %edx
	movq	.refptr._ZSt4cout(%rip), %rcx
	call	_ZNSolsEi
	movq	%rax, %rcx
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	movl	$0, %eax
	addq	$40, %rsp
	ret
	.seh_endproc
	.def	_GLOBAL__sub_I__Z4funcv;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I__Z4funcv
_GLOBAL__sub_I__Z4funcv:
.LFB1069:
	subq	$40, %rsp
	.seh_stackalloc	40
	.seh_endprologue
	movl	$65535, %edx
	movl	$1, %ecx
	call	_Z41__static_initialization_and_destruction_0ii
	nop
	addq	$40, %rsp
	ret
	.seh_endproc
	.section	.ctors,"w"
	.align 8
	.quad	_GLOBAL__sub_I__Z4funcv
.lcomm _ZStL8__ioinit,1,1
	.ident	"GCC: (tdm64-1) 4.9.2"
	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	atexit;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEi;	.scl	2;	.type	32;	.endef
	.def	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
