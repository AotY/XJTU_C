	.file	"1-1.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "%d%d%d\0"
LC2:
	.ascii "%g\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$64, %esp
	call	___main
	leal	44(%esp), %eax
	movl	%eax, 12(%esp)
	leal	48(%esp), %eax
	movl	%eax, 8(%esp)
	leal	52(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_scanf
	movl	52(%esp), %edx
	movl	48(%esp), %eax
	addl	%eax, %edx
	movl	44(%esp), %eax
	addl	%edx, %eax
	movl	%eax, 28(%esp)
	fildl	28(%esp)
	fldl	LC1
	fdivrp	%st, %st(1)
	fstpl	56(%esp)
	fldl	56(%esp)
	fstpl	4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.section .rdata,"dr"
	.align 8
LC1:
	.long	0
	.long	1074266112
	.ident	"GCC: (GNU) 4.8.1"
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
