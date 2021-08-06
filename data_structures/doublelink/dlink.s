
dlink:     file format elf64-x86-64


Disassembly of section .init:

00000000004009f0 <_init>:
  4009f0:	48 83 ec 08          	sub    $0x8,%rsp
  4009f4:	48 8b 05 fd 25 20 00 	mov    0x2025fd(%rip),%rax        # 602ff8 <__gmon_start__>
  4009fb:	48 85 c0             	test   %rax,%rax
  4009fe:	74 05                	je     400a05 <_init+0x15>
  400a00:	e8 3b 00 00 00       	callq  400a40 <__gmon_start__@plt>
  400a05:	48 83 c4 08          	add    $0x8,%rsp
  400a09:	c3                   	retq   

Disassembly of section .plt:

0000000000400a10 <.plt>:
  400a10:	ff 35 f2 25 20 00    	pushq  0x2025f2(%rip)        # 603008 <_GLOBAL_OFFSET_TABLE_+0x8>
  400a16:	ff 25 f4 25 20 00    	jmpq   *0x2025f4(%rip)        # 603010 <_GLOBAL_OFFSET_TABLE_+0x10>
  400a1c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400a20 <_ZNSsC1Ev@plt>:
  400a20:	ff 25 f2 25 20 00    	jmpq   *0x2025f2(%rip)        # 603018 <_ZNSsC1Ev@GLIBCXX_3.4>
  400a26:	68 00 00 00 00       	pushq  $0x0
  400a2b:	e9 e0 ff ff ff       	jmpq   400a10 <.plt>

0000000000400a30 <_ZNSolsEi@plt>:
  400a30:	ff 25 ea 25 20 00    	jmpq   *0x2025ea(%rip)        # 603020 <_ZNSolsEi@GLIBCXX_3.4>
  400a36:	68 01 00 00 00       	pushq  $0x1
  400a3b:	e9 d0 ff ff ff       	jmpq   400a10 <.plt>

0000000000400a40 <__gmon_start__@plt>:
  400a40:	ff 25 e2 25 20 00    	jmpq   *0x2025e2(%rip)        # 603028 <__gmon_start__>
  400a46:	68 02 00 00 00       	pushq  $0x2
  400a4b:	e9 c0 ff ff ff       	jmpq   400a10 <.plt>

0000000000400a50 <_ZdlPv@plt>:
  400a50:	ff 25 da 25 20 00    	jmpq   *0x2025da(%rip)        # 603030 <_ZdlPv@GLIBCXX_3.4>
  400a56:	68 03 00 00 00       	pushq  $0x3
  400a5b:	e9 b0 ff ff ff       	jmpq   400a10 <.plt>

0000000000400a60 <_ZNSt8ios_base4InitC1Ev@plt>:
  400a60:	ff 25 d2 25 20 00    	jmpq   *0x2025d2(%rip)        # 603038 <_ZNSt8ios_base4InitC1Ev@GLIBCXX_3.4>
  400a66:	68 04 00 00 00       	pushq  $0x4
  400a6b:	e9 a0 ff ff ff       	jmpq   400a10 <.plt>

0000000000400a70 <__libc_start_main@plt>:
  400a70:	ff 25 ca 25 20 00    	jmpq   *0x2025ca(%rip)        # 603040 <__libc_start_main@GLIBC_2.2.5>
  400a76:	68 05 00 00 00       	pushq  $0x5
  400a7b:	e9 90 ff ff ff       	jmpq   400a10 <.plt>

0000000000400a80 <_ZNSsC1ERKSs@plt>:
  400a80:	ff 25 c2 25 20 00    	jmpq   *0x2025c2(%rip)        # 603048 <_ZNSsC1ERKSs@GLIBCXX_3.4>
  400a86:	68 06 00 00 00       	pushq  $0x6
  400a8b:	e9 80 ff ff ff       	jmpq   400a10 <.plt>

0000000000400a90 <__cxa_atexit@plt>:
  400a90:	ff 25 ba 25 20 00    	jmpq   *0x2025ba(%rip)        # 603050 <__cxa_atexit@GLIBC_2.2.5>
  400a96:	68 07 00 00 00       	pushq  $0x7
  400a9b:	e9 70 ff ff ff       	jmpq   400a10 <.plt>

0000000000400aa0 <_ZNSt8ios_base4InitD1Ev@plt>:
  400aa0:	ff 25 b2 25 20 00    	jmpq   *0x2025b2(%rip)        # 603058 <_ZNSt8ios_base4InitD1Ev@GLIBCXX_3.4>
  400aa6:	68 08 00 00 00       	pushq  $0x8
  400aab:	e9 60 ff ff ff       	jmpq   400a10 <.plt>

0000000000400ab0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>:
  400ab0:	ff 25 aa 25 20 00    	jmpq   *0x2025aa(%rip)        # 603060 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@GLIBCXX_3.4>
  400ab6:	68 09 00 00 00       	pushq  $0x9
  400abb:	e9 50 ff ff ff       	jmpq   400a10 <.plt>

0000000000400ac0 <_ZNSsD1Ev@plt>:
  400ac0:	ff 25 a2 25 20 00    	jmpq   *0x2025a2(%rip)        # 603068 <_ZNSsD1Ev@GLIBCXX_3.4>
  400ac6:	68 0a 00 00 00       	pushq  $0xa
  400acb:	e9 40 ff ff ff       	jmpq   400a10 <.plt>

0000000000400ad0 <_ZNSsC1EPKcRKSaIcE@plt>:
  400ad0:	ff 25 9a 25 20 00    	jmpq   *0x20259a(%rip)        # 603070 <_ZNSsC1EPKcRKSaIcE@GLIBCXX_3.4>
  400ad6:	68 0b 00 00 00       	pushq  $0xb
  400adb:	e9 30 ff ff ff       	jmpq   400a10 <.plt>

0000000000400ae0 <_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKSbIS4_S5_T1_E@plt>:
  400ae0:	ff 25 92 25 20 00    	jmpq   *0x202592(%rip)        # 603078 <_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKSbIS4_S5_T1_E@GLIBCXX_3.4>
  400ae6:	68 0c 00 00 00       	pushq  $0xc
  400aeb:	e9 20 ff ff ff       	jmpq   400a10 <.plt>

0000000000400af0 <_ZNSaIcED1Ev@plt>:
  400af0:	ff 25 8a 25 20 00    	jmpq   *0x20258a(%rip)        # 603080 <_ZNSaIcED1Ev@GLIBCXX_3.4>
  400af6:	68 0d 00 00 00       	pushq  $0xd
  400afb:	e9 10 ff ff ff       	jmpq   400a10 <.plt>

0000000000400b00 <_ZNSolsEPFRSoS_E@plt>:
  400b00:	ff 25 82 25 20 00    	jmpq   *0x202582(%rip)        # 603088 <_ZNSolsEPFRSoS_E@GLIBCXX_3.4>
  400b06:	68 0e 00 00 00       	pushq  $0xe
  400b0b:	e9 00 ff ff ff       	jmpq   400a10 <.plt>

0000000000400b10 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@plt>:
  400b10:	ff 25 7a 25 20 00    	jmpq   *0x20257a(%rip)        # 603090 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
  400b16:	68 0f 00 00 00       	pushq  $0xf
  400b1b:	e9 f0 fe ff ff       	jmpq   400a10 <.plt>

0000000000400b20 <_ZNSaIcEC1Ev@plt>:
  400b20:	ff 25 72 25 20 00    	jmpq   *0x202572(%rip)        # 603098 <_ZNSaIcEC1Ev@GLIBCXX_3.4>
  400b26:	68 10 00 00 00       	pushq  $0x10
  400b2b:	e9 e0 fe ff ff       	jmpq   400a10 <.plt>

0000000000400b30 <__gxx_personality_v0@plt>:
  400b30:	ff 25 6a 25 20 00    	jmpq   *0x20256a(%rip)        # 6030a0 <__gxx_personality_v0@CXXABI_1.3>
  400b36:	68 11 00 00 00       	pushq  $0x11
  400b3b:	e9 d0 fe ff ff       	jmpq   400a10 <.plt>

0000000000400b40 <_Znwm@plt>:
  400b40:	ff 25 62 25 20 00    	jmpq   *0x202562(%rip)        # 6030a8 <_Znwm@GLIBCXX_3.4>
  400b46:	68 12 00 00 00       	pushq  $0x12
  400b4b:	e9 c0 fe ff ff       	jmpq   400a10 <.plt>

0000000000400b50 <_Unwind_Resume@plt>:
  400b50:	ff 25 5a 25 20 00    	jmpq   *0x20255a(%rip)        # 6030b0 <_Unwind_Resume@GCC_3.0>
  400b56:	68 13 00 00 00       	pushq  $0x13
  400b5b:	e9 b0 fe ff ff       	jmpq   400a10 <.plt>

0000000000400b60 <_ZNSsaSERKSs@plt>:
  400b60:	ff 25 52 25 20 00    	jmpq   *0x202552(%rip)        # 6030b8 <_ZNSsaSERKSs@GLIBCXX_3.4>
  400b66:	68 14 00 00 00       	pushq  $0x14
  400b6b:	e9 a0 fe ff ff       	jmpq   400a10 <.plt>

Disassembly of section .text:

0000000000400b70 <_start>:
  400b70:	31 ed                	xor    %ebp,%ebp
  400b72:	49 89 d1             	mov    %rdx,%r9
  400b75:	5e                   	pop    %rsi
  400b76:	48 89 e2             	mov    %rsp,%rdx
  400b79:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  400b7d:	50                   	push   %rax
  400b7e:	54                   	push   %rsp
  400b7f:	49 c7 c0 f0 21 40 00 	mov    $0x4021f0,%r8
  400b86:	48 c7 c1 80 21 40 00 	mov    $0x402180,%rcx
  400b8d:	48 c7 c7 0b 14 40 00 	mov    $0x40140b,%rdi
  400b94:	e8 d7 fe ff ff       	callq  400a70 <__libc_start_main@plt>
  400b99:	f4                   	hlt    
  400b9a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000400ba0 <deregister_tm_clones>:
  400ba0:	b8 47 31 60 00       	mov    $0x603147,%eax
  400ba5:	55                   	push   %rbp
  400ba6:	48 2d 40 31 60 00    	sub    $0x603140,%rax
  400bac:	48 83 f8 0e          	cmp    $0xe,%rax
  400bb0:	48 89 e5             	mov    %rsp,%rbp
  400bb3:	77 02                	ja     400bb7 <deregister_tm_clones+0x17>
  400bb5:	5d                   	pop    %rbp
  400bb6:	c3                   	retq   
  400bb7:	b8 00 00 00 00       	mov    $0x0,%eax
  400bbc:	48 85 c0             	test   %rax,%rax
  400bbf:	74 f4                	je     400bb5 <deregister_tm_clones+0x15>
  400bc1:	5d                   	pop    %rbp
  400bc2:	bf 40 31 60 00       	mov    $0x603140,%edi
  400bc7:	ff e0                	jmpq   *%rax
  400bc9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000400bd0 <register_tm_clones>:
  400bd0:	b8 40 31 60 00       	mov    $0x603140,%eax
  400bd5:	55                   	push   %rbp
  400bd6:	48 2d 40 31 60 00    	sub    $0x603140,%rax
  400bdc:	48 c1 f8 03          	sar    $0x3,%rax
  400be0:	48 89 e5             	mov    %rsp,%rbp
  400be3:	48 89 c2             	mov    %rax,%rdx
  400be6:	48 c1 ea 3f          	shr    $0x3f,%rdx
  400bea:	48 01 d0             	add    %rdx,%rax
  400bed:	48 d1 f8             	sar    %rax
  400bf0:	75 02                	jne    400bf4 <register_tm_clones+0x24>
  400bf2:	5d                   	pop    %rbp
  400bf3:	c3                   	retq   
  400bf4:	ba 00 00 00 00       	mov    $0x0,%edx
  400bf9:	48 85 d2             	test   %rdx,%rdx
  400bfc:	74 f4                	je     400bf2 <register_tm_clones+0x22>
  400bfe:	5d                   	pop    %rbp
  400bff:	48 89 c6             	mov    %rax,%rsi
  400c02:	bf 40 31 60 00       	mov    $0x603140,%edi
  400c07:	ff e2                	jmpq   *%rdx
  400c09:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000400c10 <__do_global_dtors_aux>:
  400c10:	80 3d 39 26 20 00 00 	cmpb   $0x0,0x202639(%rip)        # 603250 <completed.6355>
  400c17:	75 11                	jne    400c2a <__do_global_dtors_aux+0x1a>
  400c19:	55                   	push   %rbp
  400c1a:	48 89 e5             	mov    %rsp,%rbp
  400c1d:	e8 7e ff ff ff       	callq  400ba0 <deregister_tm_clones>
  400c22:	5d                   	pop    %rbp
  400c23:	c6 05 26 26 20 00 01 	movb   $0x1,0x202626(%rip)        # 603250 <completed.6355>
  400c2a:	f3 c3                	repz retq 
  400c2c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400c30 <frame_dummy>:
  400c30:	48 83 3d b8 21 20 00 	cmpq   $0x0,0x2021b8(%rip)        # 602df0 <__JCR_END__>
  400c37:	00 
  400c38:	74 1e                	je     400c58 <frame_dummy+0x28>
  400c3a:	b8 00 00 00 00       	mov    $0x0,%eax
  400c3f:	48 85 c0             	test   %rax,%rax
  400c42:	74 14                	je     400c58 <frame_dummy+0x28>
  400c44:	55                   	push   %rbp
  400c45:	bf f0 2d 60 00       	mov    $0x602df0,%edi
  400c4a:	48 89 e5             	mov    %rsp,%rbp
  400c4d:	ff d0                	callq  *%rax
  400c4f:	5d                   	pop    %rbp
  400c50:	e9 7b ff ff ff       	jmpq   400bd0 <register_tm_clones>
  400c55:	0f 1f 00             	nopl   (%rax)
  400c58:	e9 73 ff ff ff       	jmpq   400bd0 <register_tm_clones>

0000000000400c5d <_Z8int_testv>:
  400c5d:	55                   	push   %rbp
  400c5e:	48 89 e5             	mov    %rsp,%rbp
  400c61:	41 54                	push   %r12
  400c63:	53                   	push   %rbx
  400c64:	48 83 ec 30          	sub    $0x30,%rsp
  400c68:	c7 45 c0 0a 00 00 00 	movl   $0xa,-0x40(%rbp)
  400c6f:	c7 45 c4 14 00 00 00 	movl   $0x14,-0x3c(%rbp)
  400c76:	c7 45 c8 1e 00 00 00 	movl   $0x1e,-0x38(%rbp)
  400c7d:	c7 45 cc 28 00 00 00 	movl   $0x28,-0x34(%rbp)
  400c84:	be 11 22 40 00       	mov    $0x402211,%esi
  400c89:	bf 40 31 60 00       	mov    $0x603140,%edi
  400c8e:	e8 1d fe ff ff       	callq  400ab0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  400c93:	be 10 0b 40 00       	mov    $0x400b10,%esi
  400c98:	48 89 c7             	mov    %rax,%rdi
  400c9b:	e8 60 fe ff ff       	callq  400b00 <_ZNSolsEPFRSoS_E@plt>
  400ca0:	bf 10 00 00 00       	mov    $0x10,%edi
  400ca5:	e8 96 fe ff ff       	callq  400b40 <_Znwm@plt>
  400caa:	48 89 c3             	mov    %rax,%rbx
  400cad:	48 89 df             	mov    %rbx,%rdi
  400cb0:	e8 c3 07 00 00       	callq  401478 <_ZN10DoubleLinkIiEC1Ev>
  400cb5:	48 89 5d e0          	mov    %rbx,-0x20(%rbp)
  400cb9:	8b 55 c4             	mov    -0x3c(%rbp),%edx
  400cbc:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  400cc0:	be 00 00 00 00       	mov    $0x0,%esi
  400cc5:	48 89 c7             	mov    %rax,%rdi
  400cc8:	e8 0b 08 00 00       	callq  4014d8 <_ZN10DoubleLinkIiE6insertEii>
  400ccd:	8b 55 c0             	mov    -0x40(%rbp),%edx
  400cd0:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  400cd4:	89 d6                	mov    %edx,%esi
  400cd6:	48 89 c7             	mov    %rax,%rdi
  400cd9:	e8 9c 08 00 00       	callq  40157a <_ZN10DoubleLinkIiE11append_lastEi>
  400cde:	8b 55 c8             	mov    -0x38(%rbp),%edx
  400ce1:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  400ce5:	89 d6                	mov    %edx,%esi
  400ce7:	48 89 c7             	mov    %rax,%rdi
  400cea:	e8 0d 09 00 00       	callq  4015fc <_ZN10DoubleLinkIiE12insert_firstEi>
  400cef:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  400cf3:	48 89 c7             	mov    %rax,%rdi
  400cf6:	e8 83 09 00 00       	callq  40167e <_ZN10DoubleLinkIiE8is_emptyEv>
  400cfb:	89 c3                	mov    %eax,%ebx
  400cfd:	be 23 22 40 00       	mov    $0x402223,%esi
  400d02:	bf 40 31 60 00       	mov    $0x603140,%edi
  400d07:	e8 a4 fd ff ff       	callq  400ab0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  400d0c:	89 de                	mov    %ebx,%esi
  400d0e:	48 89 c7             	mov    %rax,%rdi
  400d11:	e8 1a fd ff ff       	callq  400a30 <_ZNSolsEi@plt>
  400d16:	be 10 0b 40 00       	mov    $0x400b10,%esi
  400d1b:	48 89 c7             	mov    %rax,%rdi
  400d1e:	e8 dd fd ff ff       	callq  400b00 <_ZNSolsEPFRSoS_E@plt>
  400d23:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  400d27:	48 89 c7             	mov    %rax,%rdi
  400d2a:	e8 67 09 00 00       	callq  401696 <_ZN10DoubleLinkIiE4sizeEv>
  400d2f:	89 c3                	mov    %eax,%ebx
  400d31:	be 2f 22 40 00       	mov    $0x40222f,%esi
  400d36:	bf 40 31 60 00       	mov    $0x603140,%edi
  400d3b:	e8 70 fd ff ff       	callq  400ab0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  400d40:	89 de                	mov    %ebx,%esi
  400d42:	48 89 c7             	mov    %rax,%rdi
  400d45:	e8 e6 fc ff ff       	callq  400a30 <_ZNSolsEi@plt>
  400d4a:	be 10 0b 40 00       	mov    $0x400b10,%esi
  400d4f:	48 89 c7             	mov    %rax,%rdi
  400d52:	e8 a9 fd ff ff       	callq  400b00 <_ZNSolsEPFRSoS_E@plt>
  400d57:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  400d5b:	48 89 c7             	mov    %rax,%rdi
  400d5e:	e8 33 09 00 00       	callq  401696 <_ZN10DoubleLinkIiE4sizeEv>
  400d63:	89 45 dc             	mov    %eax,-0x24(%rbp)
  400d66:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
  400d6d:	eb 57                	jmp    400dc6 <_Z8int_testv+0x169>
  400d6f:	8b 55 ec             	mov    -0x14(%rbp),%edx
  400d72:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  400d76:	89 d6                	mov    %edx,%esi
  400d78:	48 89 c7             	mov    %rax,%rdi
  400d7b:	e8 26 09 00 00       	callq  4016a6 <_ZN10DoubleLinkIiE3getEi>
  400d80:	89 c3                	mov    %eax,%ebx
  400d82:	be 37 22 40 00       	mov    $0x402237,%esi
  400d87:	bf 40 31 60 00       	mov    $0x603140,%edi
  400d8c:	e8 1f fd ff ff       	callq  400ab0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  400d91:	8b 55 ec             	mov    -0x14(%rbp),%edx
  400d94:	89 d6                	mov    %edx,%esi
  400d96:	48 89 c7             	mov    %rax,%rdi
  400d99:	e8 92 fc ff ff       	callq  400a30 <_ZNSolsEi@plt>
  400d9e:	be 3f 22 40 00       	mov    $0x40223f,%esi
  400da3:	48 89 c7             	mov    %rax,%rdi
  400da6:	e8 05 fd ff ff       	callq  400ab0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  400dab:	89 de                	mov    %ebx,%esi
  400dad:	48 89 c7             	mov    %rax,%rdi
  400db0:	e8 7b fc ff ff       	callq  400a30 <_ZNSolsEi@plt>
  400db5:	be 10 0b 40 00       	mov    $0x400b10,%esi
  400dba:	48 89 c7             	mov    %rax,%rdi
  400dbd:	e8 3e fd ff ff       	callq  400b00 <_ZNSolsEPFRSoS_E@plt>
  400dc2:	83 45 ec 01          	addl   $0x1,-0x14(%rbp)
  400dc6:	8b 45 ec             	mov    -0x14(%rbp),%eax
  400dc9:	3b 45 dc             	cmp    -0x24(%rbp),%eax
  400dcc:	7c a1                	jl     400d6f <_Z8int_testv+0x112>
  400dce:	eb 16                	jmp    400de6 <_Z8int_testv+0x189>
  400dd0:	49 89 c4             	mov    %rax,%r12
  400dd3:	48 89 df             	mov    %rbx,%rdi
  400dd6:	e8 75 fc ff ff       	callq  400a50 <_ZdlPv@plt>
  400ddb:	4c 89 e0             	mov    %r12,%rax
  400dde:	48 89 c7             	mov    %rax,%rdi
  400de1:	e8 6a fd ff ff       	callq  400b50 <_Unwind_Resume@plt>
  400de6:	48 83 c4 30          	add    $0x30,%rsp
  400dea:	5b                   	pop    %rbx
  400deb:	41 5c                	pop    %r12
  400ded:	5d                   	pop    %rbp
  400dee:	c3                   	retq   

0000000000400def <_Z11string_testv>:
  400def:	55                   	push   %rbp
  400df0:	48 89 e5             	mov    %rsp,%rbp
  400df3:	41 55                	push   %r13
  400df5:	41 54                	push   %r12
  400df7:	53                   	push   %rbx
  400df8:	48 81 ec 88 00 00 00 	sub    $0x88,%rsp
  400dff:	4c 8d a5 60 ff ff ff 	lea    -0xa0(%rbp),%r12
  400e06:	bb 03 00 00 00       	mov    $0x3,%ebx
  400e0b:	48 8d 45 8c          	lea    -0x74(%rbp),%rax
  400e0f:	48 89 c7             	mov    %rax,%rdi
  400e12:	e8 09 fd ff ff       	callq  400b20 <_ZNSaIcEC1Ev@plt>
  400e17:	48 8d 45 8c          	lea    -0x74(%rbp),%rax
  400e1b:	48 89 c2             	mov    %rax,%rdx
  400e1e:	be 42 22 40 00       	mov    $0x402242,%esi
  400e23:	4c 89 e7             	mov    %r12,%rdi
  400e26:	e8 a5 fc ff ff       	callq  400ad0 <_ZNSsC1EPKcRKSaIcE@plt>
  400e2b:	48 8d 45 8c          	lea    -0x74(%rbp),%rax
  400e2f:	48 89 c7             	mov    %rax,%rdi
  400e32:	e8 b9 fc ff ff       	callq  400af0 <_ZNSaIcED1Ev@plt>
  400e37:	4d 8d 6c 24 08       	lea    0x8(%r12),%r13
  400e3c:	48 83 eb 01          	sub    $0x1,%rbx
  400e40:	48 8d 45 8d          	lea    -0x73(%rbp),%rax
  400e44:	48 89 c7             	mov    %rax,%rdi
  400e47:	e8 d4 fc ff ff       	callq  400b20 <_ZNSaIcEC1Ev@plt>
  400e4c:	48 8d 45 8d          	lea    -0x73(%rbp),%rax
  400e50:	48 89 c2             	mov    %rax,%rdx
  400e53:	be 46 22 40 00       	mov    $0x402246,%esi
  400e58:	4c 89 ef             	mov    %r13,%rdi
  400e5b:	e8 70 fc ff ff       	callq  400ad0 <_ZNSsC1EPKcRKSaIcE@plt>
  400e60:	48 8d 45 8d          	lea    -0x73(%rbp),%rax
  400e64:	48 89 c7             	mov    %rax,%rdi
  400e67:	e8 84 fc ff ff       	callq  400af0 <_ZNSaIcED1Ev@plt>
  400e6c:	49 83 c5 08          	add    $0x8,%r13
  400e70:	48 83 eb 01          	sub    $0x1,%rbx
  400e74:	48 8d 45 8e          	lea    -0x72(%rbp),%rax
  400e78:	48 89 c7             	mov    %rax,%rdi
  400e7b:	e8 a0 fc ff ff       	callq  400b20 <_ZNSaIcEC1Ev@plt>
  400e80:	48 8d 45 8e          	lea    -0x72(%rbp),%rax
  400e84:	48 89 c2             	mov    %rax,%rdx
  400e87:	be 4d 22 40 00       	mov    $0x40224d,%esi
  400e8c:	4c 89 ef             	mov    %r13,%rdi
  400e8f:	e8 3c fc ff ff       	callq  400ad0 <_ZNSsC1EPKcRKSaIcE@plt>
  400e94:	48 8d 45 8e          	lea    -0x72(%rbp),%rax
  400e98:	48 89 c7             	mov    %rax,%rdi
  400e9b:	e8 50 fc ff ff       	callq  400af0 <_ZNSaIcED1Ev@plt>
  400ea0:	49 83 c5 08          	add    $0x8,%r13
  400ea4:	48 83 eb 01          	sub    $0x1,%rbx
  400ea8:	48 8d 45 8f          	lea    -0x71(%rbp),%rax
  400eac:	48 89 c7             	mov    %rax,%rdi
  400eaf:	e8 6c fc ff ff       	callq  400b20 <_ZNSaIcEC1Ev@plt>
  400eb4:	48 8d 45 8f          	lea    -0x71(%rbp),%rax
  400eb8:	48 89 c2             	mov    %rax,%rdx
  400ebb:	be 54 22 40 00       	mov    $0x402254,%esi
  400ec0:	4c 89 ef             	mov    %r13,%rdi
  400ec3:	e8 08 fc ff ff       	callq  400ad0 <_ZNSsC1EPKcRKSaIcE@plt>
  400ec8:	48 8d 45 8f          	lea    -0x71(%rbp),%rax
  400ecc:	48 89 c7             	mov    %rax,%rdi
  400ecf:	e8 1c fc ff ff       	callq  400af0 <_ZNSaIcED1Ev@plt>
  400ed4:	be 5a 22 40 00       	mov    $0x40225a,%esi
  400ed9:	bf 40 31 60 00       	mov    $0x603140,%edi
  400ede:	e8 cd fb ff ff       	callq  400ab0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  400ee3:	be 10 0b 40 00       	mov    $0x400b10,%esi
  400ee8:	48 89 c7             	mov    %rax,%rdi
  400eeb:	e8 10 fc ff ff       	callq  400b00 <_ZNSolsEPFRSoS_E@plt>
  400ef0:	bf 10 00 00 00       	mov    $0x10,%edi
  400ef5:	e8 46 fc ff ff       	callq  400b40 <_Znwm@plt>
  400efa:	48 89 c3             	mov    %rax,%rbx
  400efd:	48 89 df             	mov    %rbx,%rdi
  400f00:	e8 c5 07 00 00       	callq  4016ca <_ZN10DoubleLinkISsEC1Ev>
  400f05:	48 89 5d d0          	mov    %rbx,-0x30(%rbp)
  400f09:	48 8d 85 60 ff ff ff 	lea    -0xa0(%rbp),%rax
  400f10:	48 8d 50 08          	lea    0x8(%rax),%rdx
  400f14:	48 8d 45 90          	lea    -0x70(%rbp),%rax
  400f18:	48 89 d6             	mov    %rdx,%rsi
  400f1b:	48 89 c7             	mov    %rax,%rdi
  400f1e:	e8 5d fb ff ff       	callq  400a80 <_ZNSsC1ERKSs@plt>
  400f23:	48 8d 55 90          	lea    -0x70(%rbp),%rdx
  400f27:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  400f2b:	be 00 00 00 00       	mov    $0x0,%esi
  400f30:	48 89 c7             	mov    %rax,%rdi
  400f33:	e8 0e 08 00 00       	callq  401746 <_ZN10DoubleLinkISsE6insertEiSs>
  400f38:	48 8d 45 90          	lea    -0x70(%rbp),%rax
  400f3c:	48 89 c7             	mov    %rax,%rdi
  400f3f:	e8 7c fb ff ff       	callq  400ac0 <_ZNSsD1Ev@plt>
  400f44:	48 8d 95 60 ff ff ff 	lea    -0xa0(%rbp),%rdx
  400f4b:	48 8d 45 a0          	lea    -0x60(%rbp),%rax
  400f4f:	48 89 d6             	mov    %rdx,%rsi
  400f52:	48 89 c7             	mov    %rax,%rdi
  400f55:	e8 26 fb ff ff       	callq  400a80 <_ZNSsC1ERKSs@plt>
  400f5a:	48 8d 55 a0          	lea    -0x60(%rbp),%rdx
  400f5e:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  400f62:	48 89 d6             	mov    %rdx,%rsi
  400f65:	48 89 c7             	mov    %rax,%rdi
  400f68:	e8 15 09 00 00       	callq  401882 <_ZN10DoubleLinkISsE11append_lastESs>
  400f6d:	48 8d 45 a0          	lea    -0x60(%rbp),%rax
  400f71:	48 89 c7             	mov    %rax,%rdi
  400f74:	e8 47 fb ff ff       	callq  400ac0 <_ZNSsD1Ev@plt>
  400f79:	48 8d 85 60 ff ff ff 	lea    -0xa0(%rbp),%rax
  400f80:	48 8d 50 10          	lea    0x10(%rax),%rdx
  400f84:	48 8d 45 b0          	lea    -0x50(%rbp),%rax
  400f88:	48 89 d6             	mov    %rdx,%rsi
  400f8b:	48 89 c7             	mov    %rax,%rdi
  400f8e:	e8 ed fa ff ff       	callq  400a80 <_ZNSsC1ERKSs@plt>
  400f93:	48 8d 55 b0          	lea    -0x50(%rbp),%rdx
  400f97:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  400f9b:	48 89 d6             	mov    %rdx,%rsi
  400f9e:	48 89 c7             	mov    %rax,%rdi
  400fa1:	e8 b6 09 00 00       	callq  40195c <_ZN10DoubleLinkISsE12insert_firstESs>
  400fa6:	48 8d 45 b0          	lea    -0x50(%rbp),%rax
  400faa:	48 89 c7             	mov    %rax,%rdi
  400fad:	e8 0e fb ff ff       	callq  400ac0 <_ZNSsD1Ev@plt>
  400fb2:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  400fb6:	48 89 c7             	mov    %rax,%rdi
  400fb9:	e8 78 0a 00 00       	callq  401a36 <_ZN10DoubleLinkISsE8is_emptyEv>
  400fbe:	89 c3                	mov    %eax,%ebx
  400fc0:	be 23 22 40 00       	mov    $0x402223,%esi
  400fc5:	bf 40 31 60 00       	mov    $0x603140,%edi
  400fca:	e8 e1 fa ff ff       	callq  400ab0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  400fcf:	89 de                	mov    %ebx,%esi
  400fd1:	48 89 c7             	mov    %rax,%rdi
  400fd4:	e8 57 fa ff ff       	callq  400a30 <_ZNSolsEi@plt>
  400fd9:	be 10 0b 40 00       	mov    $0x400b10,%esi
  400fde:	48 89 c7             	mov    %rax,%rdi
  400fe1:	e8 1a fb ff ff       	callq  400b00 <_ZNSolsEPFRSoS_E@plt>
  400fe6:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  400fea:	48 89 c7             	mov    %rax,%rdi
  400fed:	e8 5c 0a 00 00       	callq  401a4e <_ZN10DoubleLinkISsE4sizeEv>
  400ff2:	89 c3                	mov    %eax,%ebx
  400ff4:	be 2f 22 40 00       	mov    $0x40222f,%esi
  400ff9:	bf 40 31 60 00       	mov    $0x603140,%edi
  400ffe:	e8 ad fa ff ff       	callq  400ab0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  401003:	89 de                	mov    %ebx,%esi
  401005:	48 89 c7             	mov    %rax,%rdi
  401008:	e8 23 fa ff ff       	callq  400a30 <_ZNSolsEi@plt>
  40100d:	be 10 0b 40 00       	mov    $0x400b10,%esi
  401012:	48 89 c7             	mov    %rax,%rdi
  401015:	e8 e6 fa ff ff       	callq  400b00 <_ZNSolsEPFRSoS_E@plt>
  40101a:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  40101e:	48 89 c7             	mov    %rax,%rdi
  401021:	e8 28 0a 00 00       	callq  401a4e <_ZN10DoubleLinkISsE4sizeEv>
  401026:	89 45 cc             	mov    %eax,-0x34(%rbp)
  401029:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%rbp)
  401030:	eb 6b                	jmp    40109d <_Z11string_testv+0x2ae>
  401032:	48 8d 45 c0          	lea    -0x40(%rbp),%rax
  401036:	8b 55 dc             	mov    -0x24(%rbp),%edx
  401039:	48 8b 4d d0          	mov    -0x30(%rbp),%rcx
  40103d:	48 89 ce             	mov    %rcx,%rsi
  401040:	48 89 c7             	mov    %rax,%rdi
  401043:	e8 16 0a 00 00       	callq  401a5e <_ZN10DoubleLinkISsE3getEi>
  401048:	be 37 22 40 00       	mov    $0x402237,%esi
  40104d:	bf 40 31 60 00       	mov    $0x603140,%edi
  401052:	e8 59 fa ff ff       	callq  400ab0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  401057:	8b 55 dc             	mov    -0x24(%rbp),%edx
  40105a:	89 d6                	mov    %edx,%esi
  40105c:	48 89 c7             	mov    %rax,%rdi
  40105f:	e8 cc f9 ff ff       	callq  400a30 <_ZNSolsEi@plt>
  401064:	be 3f 22 40 00       	mov    $0x40223f,%esi
  401069:	48 89 c7             	mov    %rax,%rdi
  40106c:	e8 3f fa ff ff       	callq  400ab0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  401071:	48 8d 55 c0          	lea    -0x40(%rbp),%rdx
  401075:	48 89 d6             	mov    %rdx,%rsi
  401078:	48 89 c7             	mov    %rax,%rdi
  40107b:	e8 60 fa ff ff       	callq  400ae0 <_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKSbIS4_S5_T1_E@plt>
  401080:	be 10 0b 40 00       	mov    $0x400b10,%esi
  401085:	48 89 c7             	mov    %rax,%rdi
  401088:	e8 73 fa ff ff       	callq  400b00 <_ZNSolsEPFRSoS_E@plt>
  40108d:	48 8d 45 c0          	lea    -0x40(%rbp),%rax
  401091:	48 89 c7             	mov    %rax,%rdi
  401094:	e8 27 fa ff ff       	callq  400ac0 <_ZNSsD1Ev@plt>
  401099:	83 45 dc 01          	addl   $0x1,-0x24(%rbp)
  40109d:	8b 45 dc             	mov    -0x24(%rbp),%eax
  4010a0:	3b 45 cc             	cmp    -0x34(%rbp),%eax
  4010a3:	7c 8d                	jl     401032 <_Z11string_testv+0x243>
  4010a5:	48 8d 9d 60 ff ff ff 	lea    -0xa0(%rbp),%rbx
  4010ac:	48 83 c3 20          	add    $0x20,%rbx
  4010b0:	48 8d 85 60 ff ff ff 	lea    -0xa0(%rbp),%rax
  4010b7:	48 39 c3             	cmp    %rax,%rbx
  4010ba:	0f 84 0a 01 00 00    	je     4011ca <_Z11string_testv+0x3db>
  4010c0:	48 83 eb 08          	sub    $0x8,%rbx
  4010c4:	48 89 df             	mov    %rbx,%rdi
  4010c7:	e8 f4 f9 ff ff       	callq  400ac0 <_ZNSsD1Ev@plt>
  4010cc:	eb e2                	jmp    4010b0 <_Z11string_testv+0x2c1>
  4010ce:	49 89 c5             	mov    %rax,%r13
  4010d1:	48 8d 45 8c          	lea    -0x74(%rbp),%rax
  4010d5:	48 89 c7             	mov    %rax,%rdi
  4010d8:	e8 13 fa ff ff       	callq  400af0 <_ZNSaIcED1Ev@plt>
  4010dd:	eb 31                	jmp    401110 <_Z11string_testv+0x321>
  4010df:	49 89 c5             	mov    %rax,%r13
  4010e2:	48 8d 45 8d          	lea    -0x73(%rbp),%rax
  4010e6:	48 89 c7             	mov    %rax,%rdi
  4010e9:	e8 02 fa ff ff       	callq  400af0 <_ZNSaIcED1Ev@plt>
  4010ee:	eb 20                	jmp    401110 <_Z11string_testv+0x321>
  4010f0:	49 89 c5             	mov    %rax,%r13
  4010f3:	48 8d 45 8e          	lea    -0x72(%rbp),%rax
  4010f7:	48 89 c7             	mov    %rax,%rdi
  4010fa:	e8 f1 f9 ff ff       	callq  400af0 <_ZNSaIcED1Ev@plt>
  4010ff:	eb 0f                	jmp    401110 <_Z11string_testv+0x321>
  401101:	49 89 c5             	mov    %rax,%r13
  401104:	48 8d 45 8f          	lea    -0x71(%rbp),%rax
  401108:	48 89 c7             	mov    %rax,%rdi
  40110b:	e8 e0 f9 ff ff       	callq  400af0 <_ZNSaIcED1Ev@plt>
  401110:	4d 85 e4             	test   %r12,%r12
  401113:	74 23                	je     401138 <_Z11string_testv+0x349>
  401115:	b8 03 00 00 00       	mov    $0x3,%eax
  40111a:	48 29 d8             	sub    %rbx,%rax
  40111d:	48 c1 e0 03          	shl    $0x3,%rax
  401121:	49 8d 1c 04          	lea    (%r12,%rax,1),%rbx
  401125:	4c 39 e3             	cmp    %r12,%rbx
  401128:	74 0e                	je     401138 <_Z11string_testv+0x349>
  40112a:	48 83 eb 08          	sub    $0x8,%rbx
  40112e:	48 89 df             	mov    %rbx,%rdi
  401131:	e8 8a f9 ff ff       	callq  400ac0 <_ZNSsD1Ev@plt>
  401136:	eb ed                	jmp    401125 <_Z11string_testv+0x336>
  401138:	4c 89 e8             	mov    %r13,%rax
  40113b:	48 89 c7             	mov    %rax,%rdi
  40113e:	e8 0d fa ff ff       	callq  400b50 <_Unwind_Resume@plt>
  401143:	49 89 c4             	mov    %rax,%r12
  401146:	48 89 df             	mov    %rbx,%rdi
  401149:	e8 02 f9 ff ff       	callq  400a50 <_ZdlPv@plt>
  40114e:	4c 89 e3             	mov    %r12,%rbx
  401151:	eb 47                	jmp    40119a <_Z11string_testv+0x3ab>
  401153:	48 89 c3             	mov    %rax,%rbx
  401156:	48 8d 45 90          	lea    -0x70(%rbp),%rax
  40115a:	48 89 c7             	mov    %rax,%rdi
  40115d:	e8 5e f9 ff ff       	callq  400ac0 <_ZNSsD1Ev@plt>
  401162:	eb 36                	jmp    40119a <_Z11string_testv+0x3ab>
  401164:	48 89 c3             	mov    %rax,%rbx
  401167:	48 8d 45 a0          	lea    -0x60(%rbp),%rax
  40116b:	48 89 c7             	mov    %rax,%rdi
  40116e:	e8 4d f9 ff ff       	callq  400ac0 <_ZNSsD1Ev@plt>
  401173:	eb 25                	jmp    40119a <_Z11string_testv+0x3ab>
  401175:	48 89 c3             	mov    %rax,%rbx
  401178:	48 8d 45 b0          	lea    -0x50(%rbp),%rax
  40117c:	48 89 c7             	mov    %rax,%rdi
  40117f:	e8 3c f9 ff ff       	callq  400ac0 <_ZNSsD1Ev@plt>
  401184:	eb 14                	jmp    40119a <_Z11string_testv+0x3ab>
  401186:	48 89 c3             	mov    %rax,%rbx
  401189:	48 8d 45 c0          	lea    -0x40(%rbp),%rax
  40118d:	48 89 c7             	mov    %rax,%rdi
  401190:	e8 2b f9 ff ff       	callq  400ac0 <_ZNSsD1Ev@plt>
  401195:	eb 03                	jmp    40119a <_Z11string_testv+0x3ab>
  401197:	48 89 c3             	mov    %rax,%rbx
  40119a:	4c 8d a5 60 ff ff ff 	lea    -0xa0(%rbp),%r12
  4011a1:	49 83 c4 20          	add    $0x20,%r12
  4011a5:	48 8d 85 60 ff ff ff 	lea    -0xa0(%rbp),%rax
  4011ac:	49 39 c4             	cmp    %rax,%r12
  4011af:	74 0e                	je     4011bf <_Z11string_testv+0x3d0>
  4011b1:	49 83 ec 08          	sub    $0x8,%r12
  4011b5:	4c 89 e7             	mov    %r12,%rdi
  4011b8:	e8 03 f9 ff ff       	callq  400ac0 <_ZNSsD1Ev@plt>
  4011bd:	eb e6                	jmp    4011a5 <_Z11string_testv+0x3b6>
  4011bf:	48 89 d8             	mov    %rbx,%rax
  4011c2:	48 89 c7             	mov    %rax,%rdi
  4011c5:	e8 86 f9 ff ff       	callq  400b50 <_Unwind_Resume@plt>
  4011ca:	48 81 c4 88 00 00 00 	add    $0x88,%rsp
  4011d1:	5b                   	pop    %rbx
  4011d2:	41 5c                	pop    %r12
  4011d4:	41 5d                	pop    %r13
  4011d6:	5d                   	pop    %rbp
  4011d7:	c3                   	retq   

00000000004011d8 <_Z11object_testv>:
  4011d8:	55                   	push   %rbp
  4011d9:	48 89 e5             	mov    %rsp,%rbp
  4011dc:	41 54                	push   %r12
  4011de:	53                   	push   %rbx
  4011df:	48 83 ec 70          	sub    $0x70,%rsp
  4011e3:	be 6e 22 40 00       	mov    $0x40226e,%esi
  4011e8:	bf 40 31 60 00       	mov    $0x603140,%edi
  4011ed:	e8 be f8 ff ff       	callq  400ab0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  4011f2:	be 10 0b 40 00       	mov    $0x400b10,%esi
  4011f7:	48 89 c7             	mov    %rax,%rdi
  4011fa:	e8 01 f9 ff ff       	callq  400b00 <_ZNSolsEPFRSoS_E@plt>
  4011ff:	bf 10 00 00 00       	mov    $0x10,%edi
  401204:	e8 37 f9 ff ff       	callq  400b40 <_Znwm@plt>
  401209:	48 89 c3             	mov    %rax,%rbx
  40120c:	48 89 df             	mov    %rbx,%rdi
  40120f:	e8 86 08 00 00       	callq  401a9a <_ZN10DoubleLinkI3stuEC1Ev>
  401214:	48 89 5d e0          	mov    %rbx,-0x20(%rbp)
  401218:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  40121c:	48 8b 15 d5 1e 20 00 	mov    0x201ed5(%rip),%rdx        # 6030f8 <_ZL7arr_stu+0x18>
  401223:	48 89 14 24          	mov    %rdx,(%rsp)
  401227:	48 8b 15 d2 1e 20 00 	mov    0x201ed2(%rip),%rdx        # 603100 <_ZL7arr_stu+0x20>
  40122e:	48 89 54 24 08       	mov    %rdx,0x8(%rsp)
  401233:	48 8b 15 ce 1e 20 00 	mov    0x201ece(%rip),%rdx        # 603108 <_ZL7arr_stu+0x28>
  40123a:	48 89 54 24 10       	mov    %rdx,0x10(%rsp)
  40123f:	be 00 00 00 00       	mov    $0x0,%esi
  401244:	48 89 c7             	mov    %rax,%rdi
  401247:	e8 ae 08 00 00       	callq  401afa <_ZN10DoubleLinkI3stuE6insertEiS0_>
  40124c:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  401250:	48 8b 15 89 1e 20 00 	mov    0x201e89(%rip),%rdx        # 6030e0 <_ZL7arr_stu>
  401257:	48 89 14 24          	mov    %rdx,(%rsp)
  40125b:	48 8b 15 86 1e 20 00 	mov    0x201e86(%rip),%rdx        # 6030e8 <_ZL7arr_stu+0x8>
  401262:	48 89 54 24 08       	mov    %rdx,0x8(%rsp)
  401267:	48 8b 15 82 1e 20 00 	mov    0x201e82(%rip),%rdx        # 6030f0 <_ZL7arr_stu+0x10>
  40126e:	48 89 54 24 10       	mov    %rdx,0x10(%rsp)
  401273:	48 89 c7             	mov    %rax,%rdi
  401276:	e8 67 09 00 00       	callq  401be2 <_ZN10DoubleLinkI3stuE11append_lastES0_>
  40127b:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  40127f:	48 8b 15 8a 1e 20 00 	mov    0x201e8a(%rip),%rdx        # 603110 <_ZL7arr_stu+0x30>
  401286:	48 89 14 24          	mov    %rdx,(%rsp)
  40128a:	48 8b 15 87 1e 20 00 	mov    0x201e87(%rip),%rdx        # 603118 <_ZL7arr_stu+0x38>
  401291:	48 89 54 24 08       	mov    %rdx,0x8(%rsp)
  401296:	48 8b 15 83 1e 20 00 	mov    0x201e83(%rip),%rdx        # 603120 <_ZL7arr_stu+0x40>
  40129d:	48 89 54 24 10       	mov    %rdx,0x10(%rsp)
  4012a2:	48 89 c7             	mov    %rax,%rdi
  4012a5:	e8 e6 09 00 00       	callq  401c90 <_ZN10DoubleLinkI3stuE12insert_firstES0_>
  4012aa:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  4012ae:	48 89 c7             	mov    %rax,%rdi
  4012b1:	e8 88 0a 00 00       	callq  401d3e <_ZN10DoubleLinkI3stuE8is_emptyEv>
  4012b6:	89 c3                	mov    %eax,%ebx
  4012b8:	be 23 22 40 00       	mov    $0x402223,%esi
  4012bd:	bf 40 31 60 00       	mov    $0x603140,%edi
  4012c2:	e8 e9 f7 ff ff       	callq  400ab0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  4012c7:	89 de                	mov    %ebx,%esi
  4012c9:	48 89 c7             	mov    %rax,%rdi
  4012cc:	e8 5f f7 ff ff       	callq  400a30 <_ZNSolsEi@plt>
  4012d1:	be 10 0b 40 00       	mov    $0x400b10,%esi
  4012d6:	48 89 c7             	mov    %rax,%rdi
  4012d9:	e8 22 f8 ff ff       	callq  400b00 <_ZNSolsEPFRSoS_E@plt>
  4012de:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  4012e2:	48 89 c7             	mov    %rax,%rdi
  4012e5:	e8 6c 0a 00 00       	callq  401d56 <_ZN10DoubleLinkI3stuE4sizeEv>
  4012ea:	89 c3                	mov    %eax,%ebx
  4012ec:	be 2f 22 40 00       	mov    $0x40222f,%esi
  4012f1:	bf 40 31 60 00       	mov    $0x603140,%edi
  4012f6:	e8 b5 f7 ff ff       	callq  400ab0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  4012fb:	89 de                	mov    %ebx,%esi
  4012fd:	48 89 c7             	mov    %rax,%rdi
  401300:	e8 2b f7 ff ff       	callq  400a30 <_ZNSolsEi@plt>
  401305:	be 10 0b 40 00       	mov    $0x400b10,%esi
  40130a:	48 89 c7             	mov    %rax,%rdi
  40130d:	e8 ee f7 ff ff       	callq  400b00 <_ZNSolsEPFRSoS_E@plt>
  401312:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  401316:	48 89 c7             	mov    %rax,%rdi
  401319:	e8 38 0a 00 00       	callq  401d56 <_ZN10DoubleLinkI3stuE4sizeEv>
  40131e:	89 45 dc             	mov    %eax,-0x24(%rbp)
  401321:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
  401328:	e9 a2 00 00 00       	jmpq   4013cf <_Z11object_testv+0x1f7>
  40132d:	48 8d 45 a0          	lea    -0x60(%rbp),%rax
  401331:	8b 55 ec             	mov    -0x14(%rbp),%edx
  401334:	48 8b 4d e0          	mov    -0x20(%rbp),%rcx
  401338:	48 89 ce             	mov    %rcx,%rsi
  40133b:	48 89 c7             	mov    %rax,%rdi
  40133e:	e8 23 0a 00 00       	callq  401d66 <_ZN10DoubleLinkI3stuE3getEi>
  401343:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
  401347:	48 89 45 c0          	mov    %rax,-0x40(%rbp)
  40134b:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
  40134f:	48 89 45 c8          	mov    %rax,-0x38(%rbp)
  401353:	48 8b 45 b0          	mov    -0x50(%rbp),%rax
  401357:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
  40135b:	8b 5d c0             	mov    -0x40(%rbp),%ebx
  40135e:	be 37 22 40 00       	mov    $0x402237,%esi
  401363:	bf 40 31 60 00       	mov    $0x603140,%edi
  401368:	e8 43 f7 ff ff       	callq  400ab0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  40136d:	8b 55 ec             	mov    -0x14(%rbp),%edx
  401370:	89 d6                	mov    %edx,%esi
  401372:	48 89 c7             	mov    %rax,%rdi
  401375:	e8 b6 f6 ff ff       	callq  400a30 <_ZNSolsEi@plt>
  40137a:	be 83 22 40 00       	mov    $0x402283,%esi
  40137f:	48 89 c7             	mov    %rax,%rdi
  401382:	e8 29 f7 ff ff       	callq  400ab0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  401387:	89 de                	mov    %ebx,%esi
  401389:	48 89 c7             	mov    %rax,%rdi
  40138c:	e8 9f f6 ff ff       	callq  400a30 <_ZNSolsEi@plt>
  401391:	be 87 22 40 00       	mov    $0x402287,%esi
  401396:	48 89 c7             	mov    %rax,%rdi
  401399:	e8 12 f7 ff ff       	callq  400ab0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  40139e:	48 8d 55 c0          	lea    -0x40(%rbp),%rdx
  4013a2:	48 83 c2 04          	add    $0x4,%rdx
  4013a6:	48 89 d6             	mov    %rdx,%rsi
  4013a9:	48 89 c7             	mov    %rax,%rdi
  4013ac:	e8 ff f6 ff ff       	callq  400ab0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  4013b1:	be 8a 22 40 00       	mov    $0x40228a,%esi
  4013b6:	48 89 c7             	mov    %rax,%rdi
  4013b9:	e8 f2 f6 ff ff       	callq  400ab0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  4013be:	be 10 0b 40 00       	mov    $0x400b10,%esi
  4013c3:	48 89 c7             	mov    %rax,%rdi
  4013c6:	e8 35 f7 ff ff       	callq  400b00 <_ZNSolsEPFRSoS_E@plt>
  4013cb:	83 45 ec 01          	addl   $0x1,-0x14(%rbp)
  4013cf:	8b 45 ec             	mov    -0x14(%rbp),%eax
  4013d2:	3b 45 dc             	cmp    -0x24(%rbp),%eax
  4013d5:	0f 8c 52 ff ff ff    	jl     40132d <_Z11object_testv+0x155>
  4013db:	be 8c 22 40 00       	mov    $0x40228c,%esi
  4013e0:	bf 40 31 60 00       	mov    $0x603140,%edi
  4013e5:	e8 c6 f6 ff ff       	callq  400ab0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  4013ea:	eb 16                	jmp    401402 <_Z11object_testv+0x22a>
  4013ec:	49 89 c4             	mov    %rax,%r12
  4013ef:	48 89 df             	mov    %rbx,%rdi
  4013f2:	e8 59 f6 ff ff       	callq  400a50 <_ZdlPv@plt>
  4013f7:	4c 89 e0             	mov    %r12,%rax
  4013fa:	48 89 c7             	mov    %rax,%rdi
  4013fd:	e8 4e f7 ff ff       	callq  400b50 <_Unwind_Resume@plt>
  401402:	48 83 c4 70          	add    $0x70,%rsp
  401406:	5b                   	pop    %rbx
  401407:	41 5c                	pop    %r12
  401409:	5d                   	pop    %rbp
  40140a:	c3                   	retq   

000000000040140b <main>:
  40140b:	55                   	push   %rbp
  40140c:	48 89 e5             	mov    %rsp,%rbp
  40140f:	e8 49 f8 ff ff       	callq  400c5d <_Z8int_testv>
  401414:	e8 d6 f9 ff ff       	callq  400def <_Z11string_testv>
  401419:	e8 ba fd ff ff       	callq  4011d8 <_Z11object_testv>
  40141e:	b8 00 00 00 00       	mov    $0x0,%eax
  401423:	5d                   	pop    %rbp
  401424:	c3                   	retq   

0000000000401425 <_Z41__static_initialization_and_destruction_0ii>:
  401425:	55                   	push   %rbp
  401426:	48 89 e5             	mov    %rsp,%rbp
  401429:	48 83 ec 10          	sub    $0x10,%rsp
  40142d:	89 7d fc             	mov    %edi,-0x4(%rbp)
  401430:	89 75 f8             	mov    %esi,-0x8(%rbp)
  401433:	83 7d fc 01          	cmpl   $0x1,-0x4(%rbp)
  401437:	75 27                	jne    401460 <_Z41__static_initialization_and_destruction_0ii+0x3b>
  401439:	81 7d f8 ff ff 00 00 	cmpl   $0xffff,-0x8(%rbp)
  401440:	75 1e                	jne    401460 <_Z41__static_initialization_and_destruction_0ii+0x3b>
  401442:	bf 51 32 60 00       	mov    $0x603251,%edi
  401447:	e8 14 f6 ff ff       	callq  400a60 <_ZNSt8ios_base4InitC1Ev@plt>
  40144c:	ba 08 22 40 00       	mov    $0x402208,%edx
  401451:	be 51 32 60 00       	mov    $0x603251,%esi
  401456:	bf a0 0a 40 00       	mov    $0x400aa0,%edi
  40145b:	e8 30 f6 ff ff       	callq  400a90 <__cxa_atexit@plt>
  401460:	c9                   	leaveq 
  401461:	c3                   	retq   

0000000000401462 <_GLOBAL__sub_I__Z8int_testv>:
  401462:	55                   	push   %rbp
  401463:	48 89 e5             	mov    %rsp,%rbp
  401466:	be ff ff 00 00       	mov    $0xffff,%esi
  40146b:	bf 01 00 00 00       	mov    $0x1,%edi
  401470:	e8 b0 ff ff ff       	callq  401425 <_Z41__static_initialization_and_destruction_0ii>
  401475:	5d                   	pop    %rbp
  401476:	c3                   	retq   
  401477:	90                   	nop

0000000000401478 <_ZN10DoubleLinkIiEC1Ev>:
  401478:	55                   	push   %rbp
  401479:	48 89 e5             	mov    %rsp,%rbp
  40147c:	53                   	push   %rbx
  40147d:	48 83 ec 18          	sub    $0x18,%rsp
  401481:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  401485:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401489:	c7 00 00 00 00 00    	movl   $0x0,(%rax)
  40148f:	bf 18 00 00 00       	mov    $0x18,%edi
  401494:	e8 a7 f6 ff ff       	callq  400b40 <_Znwm@plt>
  401499:	48 89 c3             	mov    %rax,%rbx
  40149c:	48 89 df             	mov    %rbx,%rdi
  40149f:	e8 06 09 00 00       	callq  401daa <_ZN5DNodeIiEC1Ev>
  4014a4:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4014a8:	48 89 58 08          	mov    %rbx,0x8(%rax)
  4014ac:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4014b0:	48 8b 50 08          	mov    0x8(%rax),%rdx
  4014b4:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4014b8:	48 8b 40 08          	mov    0x8(%rax),%rax
  4014bc:	48 8b 4d e8          	mov    -0x18(%rbp),%rcx
  4014c0:	48 8b 49 08          	mov    0x8(%rcx),%rcx
  4014c4:	48 89 48 10          	mov    %rcx,0x10(%rax)
  4014c8:	48 8b 40 10          	mov    0x10(%rax),%rax
  4014cc:	48 89 42 08          	mov    %rax,0x8(%rdx)
  4014d0:	48 83 c4 18          	add    $0x18,%rsp
  4014d4:	5b                   	pop    %rbx
  4014d5:	5d                   	pop    %rbp
  4014d6:	c3                   	retq   
  4014d7:	90                   	nop

00000000004014d8 <_ZN10DoubleLinkIiE6insertEii>:
  4014d8:	55                   	push   %rbp
  4014d9:	48 89 e5             	mov    %rsp,%rbp
  4014dc:	53                   	push   %rbx
  4014dd:	48 83 ec 28          	sub    $0x28,%rsp
  4014e1:	48 89 7d d8          	mov    %rdi,-0x28(%rbp)
  4014e5:	89 75 d4             	mov    %esi,-0x2c(%rbp)
  4014e8:	89 55 d0             	mov    %edx,-0x30(%rbp)
  4014eb:	83 7d d4 00          	cmpl   $0x0,-0x2c(%rbp)
  4014ef:	75 13                	jne    401504 <_ZN10DoubleLinkIiE6insertEii+0x2c>
  4014f1:	8b 55 d0             	mov    -0x30(%rbp),%edx
  4014f4:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4014f8:	89 d6                	mov    %edx,%esi
  4014fa:	48 89 c7             	mov    %rax,%rdi
  4014fd:	e8 fa 00 00 00       	callq  4015fc <_ZN10DoubleLinkIiE12insert_firstEi>
  401502:	eb 6f                	jmp    401573 <_ZN10DoubleLinkIiE6insertEii+0x9b>
  401504:	8b 55 d4             	mov    -0x2c(%rbp),%edx
  401507:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  40150b:	89 d6                	mov    %edx,%esi
  40150d:	48 89 c7             	mov    %rax,%rdi
  401510:	e8 9f 08 00 00       	callq  401db4 <_ZN10DoubleLinkIiE8get_nodeEi>
  401515:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
  401519:	bf 18 00 00 00       	mov    $0x18,%edi
  40151e:	e8 1d f6 ff ff       	callq  400b40 <_Znwm@plt>
  401523:	48 89 c3             	mov    %rax,%rbx
  401526:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  40152a:	48 8b 50 08          	mov    0x8(%rax),%rdx
  40152e:	48 8b 4d e8          	mov    -0x18(%rbp),%rcx
  401532:	8b 45 d0             	mov    -0x30(%rbp),%eax
  401535:	89 c6                	mov    %eax,%esi
  401537:	48 89 df             	mov    %rbx,%rdi
  40153a:	e8 5b 09 00 00       	callq  401e9a <_ZN5DNodeIiEC1EiPS0_S1_>
  40153f:	48 89 5d e0          	mov    %rbx,-0x20(%rbp)
  401543:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401547:	48 8b 40 08          	mov    0x8(%rax),%rax
  40154b:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
  40154f:	48 89 50 10          	mov    %rdx,0x10(%rax)
  401553:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401557:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
  40155b:	48 89 50 08          	mov    %rdx,0x8(%rax)
  40155f:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401563:	8b 00                	mov    (%rax),%eax
  401565:	8d 50 01             	lea    0x1(%rax),%edx
  401568:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  40156c:	89 10                	mov    %edx,(%rax)
  40156e:	b8 00 00 00 00       	mov    $0x0,%eax
  401573:	48 83 c4 28          	add    $0x28,%rsp
  401577:	5b                   	pop    %rbx
  401578:	5d                   	pop    %rbp
  401579:	c3                   	retq   

000000000040157a <_ZN10DoubleLinkIiE11append_lastEi>:
  40157a:	55                   	push   %rbp
  40157b:	48 89 e5             	mov    %rsp,%rbp
  40157e:	53                   	push   %rbx
  40157f:	48 83 ec 28          	sub    $0x28,%rsp
  401583:	48 89 7d d8          	mov    %rdi,-0x28(%rbp)
  401587:	89 75 d4             	mov    %esi,-0x2c(%rbp)
  40158a:	bf 18 00 00 00       	mov    $0x18,%edi
  40158f:	e8 ac f5 ff ff       	callq  400b40 <_Znwm@plt>
  401594:	48 89 c3             	mov    %rax,%rbx
  401597:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  40159b:	48 8b 48 08          	mov    0x8(%rax),%rcx
  40159f:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4015a3:	48 8b 40 08          	mov    0x8(%rax),%rax
  4015a7:	48 8b 50 08          	mov    0x8(%rax),%rdx
  4015ab:	8b 45 d4             	mov    -0x2c(%rbp),%eax
  4015ae:	89 c6                	mov    %eax,%esi
  4015b0:	48 89 df             	mov    %rbx,%rdi
  4015b3:	e8 e2 08 00 00       	callq  401e9a <_ZN5DNodeIiEC1EiPS0_S1_>
  4015b8:	48 89 5d e8          	mov    %rbx,-0x18(%rbp)
  4015bc:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4015c0:	48 8b 40 08          	mov    0x8(%rax),%rax
  4015c4:	48 8b 40 08          	mov    0x8(%rax),%rax
  4015c8:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  4015cc:	48 89 50 10          	mov    %rdx,0x10(%rax)
  4015d0:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4015d4:	48 8b 40 08          	mov    0x8(%rax),%rax
  4015d8:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  4015dc:	48 89 50 08          	mov    %rdx,0x8(%rax)
  4015e0:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4015e4:	8b 00                	mov    (%rax),%eax
  4015e6:	8d 50 01             	lea    0x1(%rax),%edx
  4015e9:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4015ed:	89 10                	mov    %edx,(%rax)
  4015ef:	b8 00 00 00 00       	mov    $0x0,%eax
  4015f4:	48 83 c4 28          	add    $0x28,%rsp
  4015f8:	5b                   	pop    %rbx
  4015f9:	5d                   	pop    %rbp
  4015fa:	c3                   	retq   
  4015fb:	90                   	nop

00000000004015fc <_ZN10DoubleLinkIiE12insert_firstEi>:
  4015fc:	55                   	push   %rbp
  4015fd:	48 89 e5             	mov    %rsp,%rbp
  401600:	53                   	push   %rbx
  401601:	48 83 ec 28          	sub    $0x28,%rsp
  401605:	48 89 7d d8          	mov    %rdi,-0x28(%rbp)
  401609:	89 75 d4             	mov    %esi,-0x2c(%rbp)
  40160c:	bf 18 00 00 00       	mov    $0x18,%edi
  401611:	e8 2a f5 ff ff       	callq  400b40 <_Znwm@plt>
  401616:	48 89 c3             	mov    %rax,%rbx
  401619:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  40161d:	48 8b 40 08          	mov    0x8(%rax),%rax
  401621:	48 8b 48 10          	mov    0x10(%rax),%rcx
  401625:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401629:	48 8b 50 08          	mov    0x8(%rax),%rdx
  40162d:	8b 45 d4             	mov    -0x2c(%rbp),%eax
  401630:	89 c6                	mov    %eax,%esi
  401632:	48 89 df             	mov    %rbx,%rdi
  401635:	e8 60 08 00 00       	callq  401e9a <_ZN5DNodeIiEC1EiPS0_S1_>
  40163a:	48 89 5d e8          	mov    %rbx,-0x18(%rbp)
  40163e:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401642:	48 8b 40 08          	mov    0x8(%rax),%rax
  401646:	48 8b 40 10          	mov    0x10(%rax),%rax
  40164a:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  40164e:	48 89 50 08          	mov    %rdx,0x8(%rax)
  401652:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401656:	48 8b 40 08          	mov    0x8(%rax),%rax
  40165a:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  40165e:	48 89 50 10          	mov    %rdx,0x10(%rax)
  401662:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401666:	8b 00                	mov    (%rax),%eax
  401668:	8d 50 01             	lea    0x1(%rax),%edx
  40166b:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  40166f:	89 10                	mov    %edx,(%rax)
  401671:	b8 00 00 00 00       	mov    $0x0,%eax
  401676:	48 83 c4 28          	add    $0x28,%rsp
  40167a:	5b                   	pop    %rbx
  40167b:	5d                   	pop    %rbp
  40167c:	c3                   	retq   
  40167d:	90                   	nop

000000000040167e <_ZN10DoubleLinkIiE8is_emptyEv>:
  40167e:	55                   	push   %rbp
  40167f:	48 89 e5             	mov    %rsp,%rbp
  401682:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  401686:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  40168a:	8b 00                	mov    (%rax),%eax
  40168c:	85 c0                	test   %eax,%eax
  40168e:	0f 94 c0             	sete   %al
  401691:	0f b6 c0             	movzbl %al,%eax
  401694:	5d                   	pop    %rbp
  401695:	c3                   	retq   

0000000000401696 <_ZN10DoubleLinkIiE4sizeEv>:
  401696:	55                   	push   %rbp
  401697:	48 89 e5             	mov    %rsp,%rbp
  40169a:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  40169e:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  4016a2:	8b 00                	mov    (%rax),%eax
  4016a4:	5d                   	pop    %rbp
  4016a5:	c3                   	retq   

00000000004016a6 <_ZN10DoubleLinkIiE3getEi>:
  4016a6:	55                   	push   %rbp
  4016a7:	48 89 e5             	mov    %rsp,%rbp
  4016aa:	48 83 ec 10          	sub    $0x10,%rsp
  4016ae:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  4016b2:	89 75 f4             	mov    %esi,-0xc(%rbp)
  4016b5:	8b 55 f4             	mov    -0xc(%rbp),%edx
  4016b8:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  4016bc:	89 d6                	mov    %edx,%esi
  4016be:	48 89 c7             	mov    %rax,%rdi
  4016c1:	e8 ee 06 00 00       	callq  401db4 <_ZN10DoubleLinkIiE8get_nodeEi>
  4016c6:	8b 00                	mov    (%rax),%eax
  4016c8:	c9                   	leaveq 
  4016c9:	c3                   	retq   

00000000004016ca <_ZN10DoubleLinkISsEC1Ev>:
  4016ca:	55                   	push   %rbp
  4016cb:	48 89 e5             	mov    %rsp,%rbp
  4016ce:	41 54                	push   %r12
  4016d0:	53                   	push   %rbx
  4016d1:	48 83 ec 10          	sub    $0x10,%rsp
  4016d5:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  4016d9:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4016dd:	c7 00 00 00 00 00    	movl   $0x0,(%rax)
  4016e3:	bf 18 00 00 00       	mov    $0x18,%edi
  4016e8:	e8 53 f4 ff ff       	callq  400b40 <_Znwm@plt>
  4016ed:	48 89 c3             	mov    %rax,%rbx
  4016f0:	48 89 df             	mov    %rbx,%rdi
  4016f3:	e8 d8 07 00 00       	callq  401ed0 <_ZN5DNodeISsEC1Ev>
  4016f8:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4016fc:	48 89 58 08          	mov    %rbx,0x8(%rax)
  401700:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401704:	48 8b 50 08          	mov    0x8(%rax),%rdx
  401708:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  40170c:	48 8b 40 08          	mov    0x8(%rax),%rax
  401710:	48 8b 4d e8          	mov    -0x18(%rbp),%rcx
  401714:	48 8b 49 08          	mov    0x8(%rcx),%rcx
  401718:	48 89 48 10          	mov    %rcx,0x10(%rax)
  40171c:	48 8b 40 10          	mov    0x10(%rax),%rax
  401720:	48 89 42 08          	mov    %rax,0x8(%rdx)
  401724:	eb 16                	jmp    40173c <_ZN10DoubleLinkISsEC1Ev+0x72>
  401726:	49 89 c4             	mov    %rax,%r12
  401729:	48 89 df             	mov    %rbx,%rdi
  40172c:	e8 1f f3 ff ff       	callq  400a50 <_ZdlPv@plt>
  401731:	4c 89 e0             	mov    %r12,%rax
  401734:	48 89 c7             	mov    %rax,%rdi
  401737:	e8 14 f4 ff ff       	callq  400b50 <_Unwind_Resume@plt>
  40173c:	48 83 c4 10          	add    $0x10,%rsp
  401740:	5b                   	pop    %rbx
  401741:	41 5c                	pop    %r12
  401743:	5d                   	pop    %rbp
  401744:	c3                   	retq   
  401745:	90                   	nop

0000000000401746 <_ZN10DoubleLinkISsE6insertEiSs>:
  401746:	55                   	push   %rbp
  401747:	48 89 e5             	mov    %rsp,%rbp
  40174a:	41 54                	push   %r12
  40174c:	53                   	push   %rbx
  40174d:	48 83 ec 50          	sub    $0x50,%rsp
  401751:	48 89 7d b8          	mov    %rdi,-0x48(%rbp)
  401755:	89 75 b4             	mov    %esi,-0x4c(%rbp)
  401758:	48 89 55 a8          	mov    %rdx,-0x58(%rbp)
  40175c:	83 7d b4 00          	cmpl   $0x0,-0x4c(%rbp)
  401760:	75 39                	jne    40179b <_ZN10DoubleLinkISsE6insertEiSs+0x55>
  401762:	48 8b 55 a8          	mov    -0x58(%rbp),%rdx
  401766:	48 8d 45 c0          	lea    -0x40(%rbp),%rax
  40176a:	48 89 d6             	mov    %rdx,%rsi
  40176d:	48 89 c7             	mov    %rax,%rdi
  401770:	e8 0b f3 ff ff       	callq  400a80 <_ZNSsC1ERKSs@plt>
  401775:	48 8d 55 c0          	lea    -0x40(%rbp),%rdx
  401779:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
  40177d:	48 89 d6             	mov    %rdx,%rsi
  401780:	48 89 c7             	mov    %rax,%rdi
  401783:	e8 d4 01 00 00       	callq  40195c <_ZN10DoubleLinkISsE12insert_firstESs>
  401788:	89 c3                	mov    %eax,%ebx
  40178a:	48 8d 45 c0          	lea    -0x40(%rbp),%rax
  40178e:	48 89 c7             	mov    %rax,%rdi
  401791:	e8 2a f3 ff ff       	callq  400ac0 <_ZNSsD1Ev@plt>
  401796:	e9 96 00 00 00       	jmpq   401831 <_ZN10DoubleLinkISsE6insertEiSs+0xeb>
  40179b:	8b 55 b4             	mov    -0x4c(%rbp),%edx
  40179e:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
  4017a2:	89 d6                	mov    %edx,%esi
  4017a4:	48 89 c7             	mov    %rax,%rdi
  4017a7:	e8 3e 07 00 00       	callq  401eea <_ZN10DoubleLinkISsE8get_nodeEi>
  4017ac:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
  4017b0:	48 8b 55 a8          	mov    -0x58(%rbp),%rdx
  4017b4:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  4017b8:	48 89 d6             	mov    %rdx,%rsi
  4017bb:	48 89 c7             	mov    %rax,%rdi
  4017be:	e8 bd f2 ff ff       	callq  400a80 <_ZNSsC1ERKSs@plt>
  4017c3:	4c 8d 65 d0          	lea    -0x30(%rbp),%r12
  4017c7:	bf 18 00 00 00       	mov    $0x18,%edi
  4017cc:	e8 6f f3 ff ff       	callq  400b40 <_Znwm@plt>
  4017d1:	48 89 c3             	mov    %rax,%rbx
  4017d4:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4017d8:	48 8b 40 08          	mov    0x8(%rax),%rax
  4017dc:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  4017e0:	48 89 d1             	mov    %rdx,%rcx
  4017e3:	48 89 c2             	mov    %rax,%rdx
  4017e6:	4c 89 e6             	mov    %r12,%rsi
  4017e9:	48 89 df             	mov    %rbx,%rdi
  4017ec:	e8 df 07 00 00       	callq  401fd0 <_ZN5DNodeISsEC1ESsPS0_S1_>
  4017f1:	48 89 5d e0          	mov    %rbx,-0x20(%rbp)
  4017f5:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  4017f9:	48 89 c7             	mov    %rax,%rdi
  4017fc:	e8 bf f2 ff ff       	callq  400ac0 <_ZNSsD1Ev@plt>
  401801:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401805:	48 8b 40 08          	mov    0x8(%rax),%rax
  401809:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
  40180d:	48 89 50 10          	mov    %rdx,0x10(%rax)
  401811:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401815:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
  401819:	48 89 50 08          	mov    %rdx,0x8(%rax)
  40181d:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
  401821:	8b 00                	mov    (%rax),%eax
  401823:	8d 50 01             	lea    0x1(%rax),%edx
  401826:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
  40182a:	89 10                	mov    %edx,(%rax)
  40182c:	bb 00 00 00 00       	mov    $0x0,%ebx
  401831:	89 d8                	mov    %ebx,%eax
  401833:	eb 44                	jmp    401879 <_ZN10DoubleLinkISsE6insertEiSs+0x133>
  401835:	48 89 c3             	mov    %rax,%rbx
  401838:	48 8d 45 c0          	lea    -0x40(%rbp),%rax
  40183c:	48 89 c7             	mov    %rax,%rdi
  40183f:	e8 7c f2 ff ff       	callq  400ac0 <_ZNSsD1Ev@plt>
  401844:	48 89 d8             	mov    %rbx,%rax
  401847:	48 89 c7             	mov    %rax,%rdi
  40184a:	e8 01 f3 ff ff       	callq  400b50 <_Unwind_Resume@plt>
  40184f:	49 89 c4             	mov    %rax,%r12
  401852:	48 89 df             	mov    %rbx,%rdi
  401855:	e8 f6 f1 ff ff       	callq  400a50 <_ZdlPv@plt>
  40185a:	4c 89 e3             	mov    %r12,%rbx
  40185d:	eb 03                	jmp    401862 <_ZN10DoubleLinkISsE6insertEiSs+0x11c>
  40185f:	48 89 c3             	mov    %rax,%rbx
  401862:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  401866:	48 89 c7             	mov    %rax,%rdi
  401869:	e8 52 f2 ff ff       	callq  400ac0 <_ZNSsD1Ev@plt>
  40186e:	48 89 d8             	mov    %rbx,%rax
  401871:	48 89 c7             	mov    %rax,%rdi
  401874:	e8 d7 f2 ff ff       	callq  400b50 <_Unwind_Resume@plt>
  401879:	48 83 c4 50          	add    $0x50,%rsp
  40187d:	5b                   	pop    %rbx
  40187e:	41 5c                	pop    %r12
  401880:	5d                   	pop    %rbp
  401881:	c3                   	retq   

0000000000401882 <_ZN10DoubleLinkISsE11append_lastESs>:
  401882:	55                   	push   %rbp
  401883:	48 89 e5             	mov    %rsp,%rbp
  401886:	41 54                	push   %r12
  401888:	53                   	push   %rbx
  401889:	48 83 ec 20          	sub    $0x20,%rsp
  40188d:	48 89 7d d8          	mov    %rdi,-0x28(%rbp)
  401891:	48 89 75 d0          	mov    %rsi,-0x30(%rbp)
  401895:	48 8b 55 d0          	mov    -0x30(%rbp),%rdx
  401899:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40189d:	48 89 d6             	mov    %rdx,%rsi
  4018a0:	48 89 c7             	mov    %rax,%rdi
  4018a3:	e8 d8 f1 ff ff       	callq  400a80 <_ZNSsC1ERKSs@plt>
  4018a8:	4c 8d 65 e0          	lea    -0x20(%rbp),%r12
  4018ac:	bf 18 00 00 00       	mov    $0x18,%edi
  4018b1:	e8 8a f2 ff ff       	callq  400b40 <_Znwm@plt>
  4018b6:	48 89 c3             	mov    %rax,%rbx
  4018b9:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4018bd:	48 8b 50 08          	mov    0x8(%rax),%rdx
  4018c1:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4018c5:	48 8b 40 08          	mov    0x8(%rax),%rax
  4018c9:	48 8b 40 08          	mov    0x8(%rax),%rax
  4018cd:	48 89 d1             	mov    %rdx,%rcx
  4018d0:	48 89 c2             	mov    %rax,%rdx
  4018d3:	4c 89 e6             	mov    %r12,%rsi
  4018d6:	48 89 df             	mov    %rbx,%rdi
  4018d9:	e8 f2 06 00 00       	callq  401fd0 <_ZN5DNodeISsEC1ESsPS0_S1_>
  4018de:	48 89 5d e8          	mov    %rbx,-0x18(%rbp)
  4018e2:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4018e6:	48 89 c7             	mov    %rax,%rdi
  4018e9:	e8 d2 f1 ff ff       	callq  400ac0 <_ZNSsD1Ev@plt>
  4018ee:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4018f2:	48 8b 40 08          	mov    0x8(%rax),%rax
  4018f6:	48 8b 40 08          	mov    0x8(%rax),%rax
  4018fa:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  4018fe:	48 89 50 10          	mov    %rdx,0x10(%rax)
  401902:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401906:	48 8b 40 08          	mov    0x8(%rax),%rax
  40190a:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  40190e:	48 89 50 08          	mov    %rdx,0x8(%rax)
  401912:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401916:	8b 00                	mov    (%rax),%eax
  401918:	8d 50 01             	lea    0x1(%rax),%edx
  40191b:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  40191f:	89 10                	mov    %edx,(%rax)
  401921:	b8 00 00 00 00       	mov    $0x0,%eax
  401926:	eb 2a                	jmp    401952 <_ZN10DoubleLinkISsE11append_lastESs+0xd0>
  401928:	49 89 c4             	mov    %rax,%r12
  40192b:	48 89 df             	mov    %rbx,%rdi
  40192e:	e8 1d f1 ff ff       	callq  400a50 <_ZdlPv@plt>
  401933:	4c 89 e3             	mov    %r12,%rbx
  401936:	eb 03                	jmp    40193b <_ZN10DoubleLinkISsE11append_lastESs+0xb9>
  401938:	48 89 c3             	mov    %rax,%rbx
  40193b:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40193f:	48 89 c7             	mov    %rax,%rdi
  401942:	e8 79 f1 ff ff       	callq  400ac0 <_ZNSsD1Ev@plt>
  401947:	48 89 d8             	mov    %rbx,%rax
  40194a:	48 89 c7             	mov    %rax,%rdi
  40194d:	e8 fe f1 ff ff       	callq  400b50 <_Unwind_Resume@plt>
  401952:	48 83 c4 20          	add    $0x20,%rsp
  401956:	5b                   	pop    %rbx
  401957:	41 5c                	pop    %r12
  401959:	5d                   	pop    %rbp
  40195a:	c3                   	retq   
  40195b:	90                   	nop

000000000040195c <_ZN10DoubleLinkISsE12insert_firstESs>:
  40195c:	55                   	push   %rbp
  40195d:	48 89 e5             	mov    %rsp,%rbp
  401960:	41 54                	push   %r12
  401962:	53                   	push   %rbx
  401963:	48 83 ec 20          	sub    $0x20,%rsp
  401967:	48 89 7d d8          	mov    %rdi,-0x28(%rbp)
  40196b:	48 89 75 d0          	mov    %rsi,-0x30(%rbp)
  40196f:	48 8b 55 d0          	mov    -0x30(%rbp),%rdx
  401973:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  401977:	48 89 d6             	mov    %rdx,%rsi
  40197a:	48 89 c7             	mov    %rax,%rdi
  40197d:	e8 fe f0 ff ff       	callq  400a80 <_ZNSsC1ERKSs@plt>
  401982:	4c 8d 65 e0          	lea    -0x20(%rbp),%r12
  401986:	bf 18 00 00 00       	mov    $0x18,%edi
  40198b:	e8 b0 f1 ff ff       	callq  400b40 <_Znwm@plt>
  401990:	48 89 c3             	mov    %rax,%rbx
  401993:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401997:	48 8b 40 08          	mov    0x8(%rax),%rax
  40199b:	48 8b 50 10          	mov    0x10(%rax),%rdx
  40199f:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4019a3:	48 8b 40 08          	mov    0x8(%rax),%rax
  4019a7:	48 89 d1             	mov    %rdx,%rcx
  4019aa:	48 89 c2             	mov    %rax,%rdx
  4019ad:	4c 89 e6             	mov    %r12,%rsi
  4019b0:	48 89 df             	mov    %rbx,%rdi
  4019b3:	e8 18 06 00 00       	callq  401fd0 <_ZN5DNodeISsEC1ESsPS0_S1_>
  4019b8:	48 89 5d e8          	mov    %rbx,-0x18(%rbp)
  4019bc:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4019c0:	48 89 c7             	mov    %rax,%rdi
  4019c3:	e8 f8 f0 ff ff       	callq  400ac0 <_ZNSsD1Ev@plt>
  4019c8:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4019cc:	48 8b 40 08          	mov    0x8(%rax),%rax
  4019d0:	48 8b 40 10          	mov    0x10(%rax),%rax
  4019d4:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  4019d8:	48 89 50 08          	mov    %rdx,0x8(%rax)
  4019dc:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4019e0:	48 8b 40 08          	mov    0x8(%rax),%rax
  4019e4:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  4019e8:	48 89 50 10          	mov    %rdx,0x10(%rax)
  4019ec:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4019f0:	8b 00                	mov    (%rax),%eax
  4019f2:	8d 50 01             	lea    0x1(%rax),%edx
  4019f5:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4019f9:	89 10                	mov    %edx,(%rax)
  4019fb:	b8 00 00 00 00       	mov    $0x0,%eax
  401a00:	eb 2a                	jmp    401a2c <_ZN10DoubleLinkISsE12insert_firstESs+0xd0>
  401a02:	49 89 c4             	mov    %rax,%r12
  401a05:	48 89 df             	mov    %rbx,%rdi
  401a08:	e8 43 f0 ff ff       	callq  400a50 <_ZdlPv@plt>
  401a0d:	4c 89 e3             	mov    %r12,%rbx
  401a10:	eb 03                	jmp    401a15 <_ZN10DoubleLinkISsE12insert_firstESs+0xb9>
  401a12:	48 89 c3             	mov    %rax,%rbx
  401a15:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  401a19:	48 89 c7             	mov    %rax,%rdi
  401a1c:	e8 9f f0 ff ff       	callq  400ac0 <_ZNSsD1Ev@plt>
  401a21:	48 89 d8             	mov    %rbx,%rax
  401a24:	48 89 c7             	mov    %rax,%rdi
  401a27:	e8 24 f1 ff ff       	callq  400b50 <_Unwind_Resume@plt>
  401a2c:	48 83 c4 20          	add    $0x20,%rsp
  401a30:	5b                   	pop    %rbx
  401a31:	41 5c                	pop    %r12
  401a33:	5d                   	pop    %rbp
  401a34:	c3                   	retq   
  401a35:	90                   	nop

0000000000401a36 <_ZN10DoubleLinkISsE8is_emptyEv>:
  401a36:	55                   	push   %rbp
  401a37:	48 89 e5             	mov    %rsp,%rbp
  401a3a:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  401a3e:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  401a42:	8b 00                	mov    (%rax),%eax
  401a44:	85 c0                	test   %eax,%eax
  401a46:	0f 94 c0             	sete   %al
  401a49:	0f b6 c0             	movzbl %al,%eax
  401a4c:	5d                   	pop    %rbp
  401a4d:	c3                   	retq   

0000000000401a4e <_ZN10DoubleLinkISsE4sizeEv>:
  401a4e:	55                   	push   %rbp
  401a4f:	48 89 e5             	mov    %rsp,%rbp
  401a52:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  401a56:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  401a5a:	8b 00                	mov    (%rax),%eax
  401a5c:	5d                   	pop    %rbp
  401a5d:	c3                   	retq   

0000000000401a5e <_ZN10DoubleLinkISsE3getEi>:
  401a5e:	55                   	push   %rbp
  401a5f:	48 89 e5             	mov    %rsp,%rbp
  401a62:	48 83 ec 20          	sub    $0x20,%rsp
  401a66:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  401a6a:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  401a6e:	89 55 ec             	mov    %edx,-0x14(%rbp)
  401a71:	8b 55 ec             	mov    -0x14(%rbp),%edx
  401a74:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  401a78:	89 d6                	mov    %edx,%esi
  401a7a:	48 89 c7             	mov    %rax,%rdi
  401a7d:	e8 68 04 00 00       	callq  401eea <_ZN10DoubleLinkISsE8get_nodeEi>
  401a82:	48 89 c2             	mov    %rax,%rdx
  401a85:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  401a89:	48 89 d6             	mov    %rdx,%rsi
  401a8c:	48 89 c7             	mov    %rax,%rdi
  401a8f:	e8 ec ef ff ff       	callq  400a80 <_ZNSsC1ERKSs@plt>
  401a94:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  401a98:	c9                   	leaveq 
  401a99:	c3                   	retq   

0000000000401a9a <_ZN10DoubleLinkI3stuEC1Ev>:
  401a9a:	55                   	push   %rbp
  401a9b:	48 89 e5             	mov    %rsp,%rbp
  401a9e:	53                   	push   %rbx
  401a9f:	48 83 ec 18          	sub    $0x18,%rsp
  401aa3:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  401aa7:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401aab:	c7 00 00 00 00 00    	movl   $0x0,(%rax)
  401ab1:	bf 28 00 00 00       	mov    $0x28,%edi
  401ab6:	e8 85 f0 ff ff       	callq  400b40 <_Znwm@plt>
  401abb:	48 89 c3             	mov    %rax,%rbx
  401abe:	48 89 df             	mov    %rbx,%rdi
  401ac1:	e8 7e 05 00 00       	callq  402044 <_ZN5DNodeI3stuEC1Ev>
  401ac6:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401aca:	48 89 58 08          	mov    %rbx,0x8(%rax)
  401ace:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401ad2:	48 8b 50 08          	mov    0x8(%rax),%rdx
  401ad6:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401ada:	48 8b 40 08          	mov    0x8(%rax),%rax
  401ade:	48 8b 4d e8          	mov    -0x18(%rbp),%rcx
  401ae2:	48 8b 49 08          	mov    0x8(%rcx),%rcx
  401ae6:	48 89 48 20          	mov    %rcx,0x20(%rax)
  401aea:	48 8b 40 20          	mov    0x20(%rax),%rax
  401aee:	48 89 42 18          	mov    %rax,0x18(%rdx)
  401af2:	48 83 c4 18          	add    $0x18,%rsp
  401af6:	5b                   	pop    %rbx
  401af7:	5d                   	pop    %rbp
  401af8:	c3                   	retq   
  401af9:	90                   	nop

0000000000401afa <_ZN10DoubleLinkI3stuE6insertEiS0_>:
  401afa:	55                   	push   %rbp
  401afb:	48 89 e5             	mov    %rsp,%rbp
  401afe:	53                   	push   %rbx
  401aff:	48 83 ec 68          	sub    $0x68,%rsp
  401b03:	48 89 7d b8          	mov    %rdi,-0x48(%rbp)
  401b07:	89 75 b4             	mov    %esi,-0x4c(%rbp)
  401b0a:	83 7d b4 00          	cmpl   $0x0,-0x4c(%rbp)
  401b0e:	75 2b                	jne    401b3b <_ZN10DoubleLinkI3stuE6insertEiS0_+0x41>
  401b10:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
  401b14:	48 8b 55 10          	mov    0x10(%rbp),%rdx
  401b18:	48 89 14 24          	mov    %rdx,(%rsp)
  401b1c:	48 8b 55 18          	mov    0x18(%rbp),%rdx
  401b20:	48 89 54 24 08       	mov    %rdx,0x8(%rsp)
  401b25:	48 8b 55 20          	mov    0x20(%rbp),%rdx
  401b29:	48 89 54 24 10       	mov    %rdx,0x10(%rsp)
  401b2e:	48 89 c7             	mov    %rax,%rdi
  401b31:	e8 5a 01 00 00       	callq  401c90 <_ZN10DoubleLinkI3stuE12insert_firstES0_>
  401b36:	e9 9f 00 00 00       	jmpq   401bda <_ZN10DoubleLinkI3stuE6insertEiS0_+0xe0>
  401b3b:	8b 55 b4             	mov    -0x4c(%rbp),%edx
  401b3e:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
  401b42:	89 d6                	mov    %edx,%esi
  401b44:	48 89 c7             	mov    %rax,%rdi
  401b47:	e8 02 05 00 00       	callq  40204e <_ZN10DoubleLinkI3stuE8get_nodeEi>
  401b4c:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
  401b50:	48 8b 45 10          	mov    0x10(%rbp),%rax
  401b54:	48 89 45 c0          	mov    %rax,-0x40(%rbp)
  401b58:	48 8b 45 18          	mov    0x18(%rbp),%rax
  401b5c:	48 89 45 c8          	mov    %rax,-0x38(%rbp)
  401b60:	48 8b 45 20          	mov    0x20(%rbp),%rax
  401b64:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
  401b68:	bf 28 00 00 00       	mov    $0x28,%edi
  401b6d:	e8 ce ef ff ff       	callq  400b40 <_Znwm@plt>
  401b72:	48 89 c3             	mov    %rax,%rbx
  401b75:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401b79:	48 8b 40 18          	mov    0x18(%rax),%rax
  401b7d:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  401b81:	48 8b 4d c0          	mov    -0x40(%rbp),%rcx
  401b85:	48 89 0c 24          	mov    %rcx,(%rsp)
  401b89:	48 8b 4d c8          	mov    -0x38(%rbp),%rcx
  401b8d:	48 89 4c 24 08       	mov    %rcx,0x8(%rsp)
  401b92:	48 8b 4d d0          	mov    -0x30(%rbp),%rcx
  401b96:	48 89 4c 24 10       	mov    %rcx,0x10(%rsp)
  401b9b:	48 89 c6             	mov    %rax,%rsi
  401b9e:	48 89 df             	mov    %rbx,%rdi
  401ba1:	e8 8e 05 00 00       	callq  402134 <_ZN5DNodeI3stuEC1ES0_PS1_S2_>
  401ba6:	48 89 5d e0          	mov    %rbx,-0x20(%rbp)
  401baa:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401bae:	48 8b 40 18          	mov    0x18(%rax),%rax
  401bb2:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
  401bb6:	48 89 50 20          	mov    %rdx,0x20(%rax)
  401bba:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401bbe:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
  401bc2:	48 89 50 18          	mov    %rdx,0x18(%rax)
  401bc6:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
  401bca:	8b 00                	mov    (%rax),%eax
  401bcc:	8d 50 01             	lea    0x1(%rax),%edx
  401bcf:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
  401bd3:	89 10                	mov    %edx,(%rax)
  401bd5:	b8 00 00 00 00       	mov    $0x0,%eax
  401bda:	48 83 c4 68          	add    $0x68,%rsp
  401bde:	5b                   	pop    %rbx
  401bdf:	5d                   	pop    %rbp
  401be0:	c3                   	retq   
  401be1:	90                   	nop

0000000000401be2 <_ZN10DoubleLinkI3stuE11append_lastES0_>:
  401be2:	55                   	push   %rbp
  401be3:	48 89 e5             	mov    %rsp,%rbp
  401be6:	53                   	push   %rbx
  401be7:	48 83 ec 48          	sub    $0x48,%rsp
  401beb:	48 89 7d c8          	mov    %rdi,-0x38(%rbp)
  401bef:	48 8b 45 10          	mov    0x10(%rbp),%rax
  401bf3:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
  401bf7:	48 8b 45 18          	mov    0x18(%rbp),%rax
  401bfb:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
  401bff:	48 8b 45 20          	mov    0x20(%rbp),%rax
  401c03:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
  401c07:	bf 28 00 00 00       	mov    $0x28,%edi
  401c0c:	e8 2f ef ff ff       	callq  400b40 <_Znwm@plt>
  401c11:	48 89 c3             	mov    %rax,%rbx
  401c14:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401c18:	48 8b 50 08          	mov    0x8(%rax),%rdx
  401c1c:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401c20:	48 8b 40 08          	mov    0x8(%rax),%rax
  401c24:	48 8b 40 18          	mov    0x18(%rax),%rax
  401c28:	48 8b 4d d0          	mov    -0x30(%rbp),%rcx
  401c2c:	48 89 0c 24          	mov    %rcx,(%rsp)
  401c30:	48 8b 4d d8          	mov    -0x28(%rbp),%rcx
  401c34:	48 89 4c 24 08       	mov    %rcx,0x8(%rsp)
  401c39:	48 8b 4d e0          	mov    -0x20(%rbp),%rcx
  401c3d:	48 89 4c 24 10       	mov    %rcx,0x10(%rsp)
  401c42:	48 89 c6             	mov    %rax,%rsi
  401c45:	48 89 df             	mov    %rbx,%rdi
  401c48:	e8 e7 04 00 00       	callq  402134 <_ZN5DNodeI3stuEC1ES0_PS1_S2_>
  401c4d:	48 89 5d e8          	mov    %rbx,-0x18(%rbp)
  401c51:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401c55:	48 8b 40 08          	mov    0x8(%rax),%rax
  401c59:	48 8b 40 18          	mov    0x18(%rax),%rax
  401c5d:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  401c61:	48 89 50 20          	mov    %rdx,0x20(%rax)
  401c65:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401c69:	48 8b 40 08          	mov    0x8(%rax),%rax
  401c6d:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  401c71:	48 89 50 18          	mov    %rdx,0x18(%rax)
  401c75:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401c79:	8b 00                	mov    (%rax),%eax
  401c7b:	8d 50 01             	lea    0x1(%rax),%edx
  401c7e:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401c82:	89 10                	mov    %edx,(%rax)
  401c84:	b8 00 00 00 00       	mov    $0x0,%eax
  401c89:	48 83 c4 48          	add    $0x48,%rsp
  401c8d:	5b                   	pop    %rbx
  401c8e:	5d                   	pop    %rbp
  401c8f:	c3                   	retq   

0000000000401c90 <_ZN10DoubleLinkI3stuE12insert_firstES0_>:
  401c90:	55                   	push   %rbp
  401c91:	48 89 e5             	mov    %rsp,%rbp
  401c94:	53                   	push   %rbx
  401c95:	48 83 ec 48          	sub    $0x48,%rsp
  401c99:	48 89 7d c8          	mov    %rdi,-0x38(%rbp)
  401c9d:	48 8b 45 10          	mov    0x10(%rbp),%rax
  401ca1:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
  401ca5:	48 8b 45 18          	mov    0x18(%rbp),%rax
  401ca9:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
  401cad:	48 8b 45 20          	mov    0x20(%rbp),%rax
  401cb1:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
  401cb5:	bf 28 00 00 00       	mov    $0x28,%edi
  401cba:	e8 81 ee ff ff       	callq  400b40 <_Znwm@plt>
  401cbf:	48 89 c3             	mov    %rax,%rbx
  401cc2:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401cc6:	48 8b 40 08          	mov    0x8(%rax),%rax
  401cca:	48 8b 50 20          	mov    0x20(%rax),%rdx
  401cce:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401cd2:	48 8b 40 08          	mov    0x8(%rax),%rax
  401cd6:	48 8b 4d d0          	mov    -0x30(%rbp),%rcx
  401cda:	48 89 0c 24          	mov    %rcx,(%rsp)
  401cde:	48 8b 4d d8          	mov    -0x28(%rbp),%rcx
  401ce2:	48 89 4c 24 08       	mov    %rcx,0x8(%rsp)
  401ce7:	48 8b 4d e0          	mov    -0x20(%rbp),%rcx
  401ceb:	48 89 4c 24 10       	mov    %rcx,0x10(%rsp)
  401cf0:	48 89 c6             	mov    %rax,%rsi
  401cf3:	48 89 df             	mov    %rbx,%rdi
  401cf6:	e8 39 04 00 00       	callq  402134 <_ZN5DNodeI3stuEC1ES0_PS1_S2_>
  401cfb:	48 89 5d e8          	mov    %rbx,-0x18(%rbp)
  401cff:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401d03:	48 8b 40 08          	mov    0x8(%rax),%rax
  401d07:	48 8b 40 20          	mov    0x20(%rax),%rax
  401d0b:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  401d0f:	48 89 50 18          	mov    %rdx,0x18(%rax)
  401d13:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401d17:	48 8b 40 08          	mov    0x8(%rax),%rax
  401d1b:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  401d1f:	48 89 50 20          	mov    %rdx,0x20(%rax)
  401d23:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401d27:	8b 00                	mov    (%rax),%eax
  401d29:	8d 50 01             	lea    0x1(%rax),%edx
  401d2c:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401d30:	89 10                	mov    %edx,(%rax)
  401d32:	b8 00 00 00 00       	mov    $0x0,%eax
  401d37:	48 83 c4 48          	add    $0x48,%rsp
  401d3b:	5b                   	pop    %rbx
  401d3c:	5d                   	pop    %rbp
  401d3d:	c3                   	retq   

0000000000401d3e <_ZN10DoubleLinkI3stuE8is_emptyEv>:
  401d3e:	55                   	push   %rbp
  401d3f:	48 89 e5             	mov    %rsp,%rbp
  401d42:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  401d46:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  401d4a:	8b 00                	mov    (%rax),%eax
  401d4c:	85 c0                	test   %eax,%eax
  401d4e:	0f 94 c0             	sete   %al
  401d51:	0f b6 c0             	movzbl %al,%eax
  401d54:	5d                   	pop    %rbp
  401d55:	c3                   	retq   

0000000000401d56 <_ZN10DoubleLinkI3stuE4sizeEv>:
  401d56:	55                   	push   %rbp
  401d57:	48 89 e5             	mov    %rsp,%rbp
  401d5a:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  401d5e:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  401d62:	8b 00                	mov    (%rax),%eax
  401d64:	5d                   	pop    %rbp
  401d65:	c3                   	retq   

0000000000401d66 <_ZN10DoubleLinkI3stuE3getEi>:
  401d66:	55                   	push   %rbp
  401d67:	48 89 e5             	mov    %rsp,%rbp
  401d6a:	48 83 ec 20          	sub    $0x20,%rsp
  401d6e:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  401d72:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  401d76:	89 55 ec             	mov    %edx,-0x14(%rbp)
  401d79:	8b 55 ec             	mov    -0x14(%rbp),%edx
  401d7c:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  401d80:	89 d6                	mov    %edx,%esi
  401d82:	48 89 c7             	mov    %rax,%rdi
  401d85:	e8 c4 02 00 00       	callq  40204e <_ZN10DoubleLinkI3stuE8get_nodeEi>
  401d8a:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  401d8e:	48 8b 08             	mov    (%rax),%rcx
  401d91:	48 89 0a             	mov    %rcx,(%rdx)
  401d94:	48 8b 48 08          	mov    0x8(%rax),%rcx
  401d98:	48 89 4a 08          	mov    %rcx,0x8(%rdx)
  401d9c:	48 8b 40 10          	mov    0x10(%rax),%rax
  401da0:	48 89 42 10          	mov    %rax,0x10(%rdx)
  401da4:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  401da8:	c9                   	leaveq 
  401da9:	c3                   	retq   

0000000000401daa <_ZN5DNodeIiEC1Ev>:
  401daa:	55                   	push   %rbp
  401dab:	48 89 e5             	mov    %rsp,%rbp
  401dae:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  401db2:	5d                   	pop    %rbp
  401db3:	c3                   	retq   

0000000000401db4 <_ZN10DoubleLinkIiE8get_nodeEi>:
  401db4:	55                   	push   %rbp
  401db5:	48 89 e5             	mov    %rsp,%rbp
  401db8:	48 83 ec 40          	sub    $0x40,%rsp
  401dbc:	48 89 7d c8          	mov    %rdi,-0x38(%rbp)
  401dc0:	89 75 c4             	mov    %esi,-0x3c(%rbp)
  401dc3:	83 7d c4 00          	cmpl   $0x0,-0x3c(%rbp)
  401dc7:	78 0b                	js     401dd4 <_ZN10DoubleLinkIiE8get_nodeEi+0x20>
  401dc9:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401dcd:	8b 00                	mov    (%rax),%eax
  401dcf:	3b 45 c4             	cmp    -0x3c(%rbp),%eax
  401dd2:	7f 26                	jg     401dfa <_ZN10DoubleLinkIiE8get_nodeEi+0x46>
  401dd4:	be 90 22 40 00       	mov    $0x402290,%esi
  401dd9:	bf 40 31 60 00       	mov    $0x603140,%edi
  401dde:	e8 cd ec ff ff       	callq  400ab0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  401de3:	be 10 0b 40 00       	mov    $0x400b10,%esi
  401de8:	48 89 c7             	mov    %rax,%rdi
  401deb:	e8 10 ed ff ff       	callq  400b00 <_ZNSolsEPFRSoS_E@plt>
  401df0:	b8 00 00 00 00       	mov    $0x0,%eax
  401df5:	e9 9d 00 00 00       	jmpq   401e97 <_ZN10DoubleLinkIiE8get_nodeEi+0xe3>
  401dfa:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401dfe:	8b 00                	mov    (%rax),%eax
  401e00:	89 c2                	mov    %eax,%edx
  401e02:	c1 ea 1f             	shr    $0x1f,%edx
  401e05:	01 d0                	add    %edx,%eax
  401e07:	d1 f8                	sar    %eax
  401e09:	3b 45 c4             	cmp    -0x3c(%rbp),%eax
  401e0c:	7c 3e                	jl     401e4c <_ZN10DoubleLinkIiE8get_nodeEi+0x98>
  401e0e:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
  401e15:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401e19:	48 8b 40 08          	mov    0x8(%rax),%rax
  401e1d:	48 8b 40 10          	mov    0x10(%rax),%rax
  401e21:	48 89 45 f0          	mov    %rax,-0x10(%rbp)
  401e25:	eb 0c                	jmp    401e33 <_ZN10DoubleLinkIiE8get_nodeEi+0x7f>
  401e27:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  401e2b:	48 8b 40 10          	mov    0x10(%rax),%rax
  401e2f:	48 89 45 f0          	mov    %rax,-0x10(%rbp)
  401e33:	8b 45 fc             	mov    -0x4(%rbp),%eax
  401e36:	8d 50 01             	lea    0x1(%rax),%edx
  401e39:	89 55 fc             	mov    %edx,-0x4(%rbp)
  401e3c:	3b 45 c4             	cmp    -0x3c(%rbp),%eax
  401e3f:	0f 9c c0             	setl   %al
  401e42:	84 c0                	test   %al,%al
  401e44:	75 e1                	jne    401e27 <_ZN10DoubleLinkIiE8get_nodeEi+0x73>
  401e46:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  401e4a:	eb 4b                	jmp    401e97 <_ZN10DoubleLinkIiE8get_nodeEi+0xe3>
  401e4c:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
  401e53:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401e57:	8b 00                	mov    (%rax),%eax
  401e59:	2b 45 c4             	sub    -0x3c(%rbp),%eax
  401e5c:	83 e8 01             	sub    $0x1,%eax
  401e5f:	89 45 dc             	mov    %eax,-0x24(%rbp)
  401e62:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401e66:	48 8b 40 08          	mov    0x8(%rax),%rax
  401e6a:	48 8b 40 08          	mov    0x8(%rax),%rax
  401e6e:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
  401e72:	eb 0c                	jmp    401e80 <_ZN10DoubleLinkIiE8get_nodeEi+0xcc>
  401e74:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  401e78:	48 8b 40 08          	mov    0x8(%rax),%rax
  401e7c:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
  401e80:	8b 45 ec             	mov    -0x14(%rbp),%eax
  401e83:	8d 50 01             	lea    0x1(%rax),%edx
  401e86:	89 55 ec             	mov    %edx,-0x14(%rbp)
  401e89:	3b 45 dc             	cmp    -0x24(%rbp),%eax
  401e8c:	0f 9c c0             	setl   %al
  401e8f:	84 c0                	test   %al,%al
  401e91:	75 e1                	jne    401e74 <_ZN10DoubleLinkIiE8get_nodeEi+0xc0>
  401e93:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  401e97:	c9                   	leaveq 
  401e98:	c3                   	retq   
  401e99:	90                   	nop

0000000000401e9a <_ZN5DNodeIiEC1EiPS0_S1_>:
  401e9a:	55                   	push   %rbp
  401e9b:	48 89 e5             	mov    %rsp,%rbp
  401e9e:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  401ea2:	89 75 f4             	mov    %esi,-0xc(%rbp)
  401ea5:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
  401ea9:	48 89 4d e0          	mov    %rcx,-0x20(%rbp)
  401ead:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  401eb1:	8b 55 f4             	mov    -0xc(%rbp),%edx
  401eb4:	89 10                	mov    %edx,(%rax)
  401eb6:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  401eba:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  401ebe:	48 89 50 08          	mov    %rdx,0x8(%rax)
  401ec2:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  401ec6:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
  401eca:	48 89 50 10          	mov    %rdx,0x10(%rax)
  401ece:	5d                   	pop    %rbp
  401ecf:	c3                   	retq   

0000000000401ed0 <_ZN5DNodeISsEC1Ev>:
  401ed0:	55                   	push   %rbp
  401ed1:	48 89 e5             	mov    %rsp,%rbp
  401ed4:	48 83 ec 10          	sub    $0x10,%rsp
  401ed8:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  401edc:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  401ee0:	48 89 c7             	mov    %rax,%rdi
  401ee3:	e8 38 eb ff ff       	callq  400a20 <_ZNSsC1Ev@plt>
  401ee8:	c9                   	leaveq 
  401ee9:	c3                   	retq   

0000000000401eea <_ZN10DoubleLinkISsE8get_nodeEi>:
  401eea:	55                   	push   %rbp
  401eeb:	48 89 e5             	mov    %rsp,%rbp
  401eee:	48 83 ec 40          	sub    $0x40,%rsp
  401ef2:	48 89 7d c8          	mov    %rdi,-0x38(%rbp)
  401ef6:	89 75 c4             	mov    %esi,-0x3c(%rbp)
  401ef9:	83 7d c4 00          	cmpl   $0x0,-0x3c(%rbp)
  401efd:	78 0b                	js     401f0a <_ZN10DoubleLinkISsE8get_nodeEi+0x20>
  401eff:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401f03:	8b 00                	mov    (%rax),%eax
  401f05:	3b 45 c4             	cmp    -0x3c(%rbp),%eax
  401f08:	7f 26                	jg     401f30 <_ZN10DoubleLinkISsE8get_nodeEi+0x46>
  401f0a:	be 90 22 40 00       	mov    $0x402290,%esi
  401f0f:	bf 40 31 60 00       	mov    $0x603140,%edi
  401f14:	e8 97 eb ff ff       	callq  400ab0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  401f19:	be 10 0b 40 00       	mov    $0x400b10,%esi
  401f1e:	48 89 c7             	mov    %rax,%rdi
  401f21:	e8 da eb ff ff       	callq  400b00 <_ZNSolsEPFRSoS_E@plt>
  401f26:	b8 00 00 00 00       	mov    $0x0,%eax
  401f2b:	e9 9d 00 00 00       	jmpq   401fcd <_ZN10DoubleLinkISsE8get_nodeEi+0xe3>
  401f30:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401f34:	8b 00                	mov    (%rax),%eax
  401f36:	89 c2                	mov    %eax,%edx
  401f38:	c1 ea 1f             	shr    $0x1f,%edx
  401f3b:	01 d0                	add    %edx,%eax
  401f3d:	d1 f8                	sar    %eax
  401f3f:	3b 45 c4             	cmp    -0x3c(%rbp),%eax
  401f42:	7c 3e                	jl     401f82 <_ZN10DoubleLinkISsE8get_nodeEi+0x98>
  401f44:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
  401f4b:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401f4f:	48 8b 40 08          	mov    0x8(%rax),%rax
  401f53:	48 8b 40 10          	mov    0x10(%rax),%rax
  401f57:	48 89 45 f0          	mov    %rax,-0x10(%rbp)
  401f5b:	eb 0c                	jmp    401f69 <_ZN10DoubleLinkISsE8get_nodeEi+0x7f>
  401f5d:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  401f61:	48 8b 40 10          	mov    0x10(%rax),%rax
  401f65:	48 89 45 f0          	mov    %rax,-0x10(%rbp)
  401f69:	8b 45 fc             	mov    -0x4(%rbp),%eax
  401f6c:	8d 50 01             	lea    0x1(%rax),%edx
  401f6f:	89 55 fc             	mov    %edx,-0x4(%rbp)
  401f72:	3b 45 c4             	cmp    -0x3c(%rbp),%eax
  401f75:	0f 9c c0             	setl   %al
  401f78:	84 c0                	test   %al,%al
  401f7a:	75 e1                	jne    401f5d <_ZN10DoubleLinkISsE8get_nodeEi+0x73>
  401f7c:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  401f80:	eb 4b                	jmp    401fcd <_ZN10DoubleLinkISsE8get_nodeEi+0xe3>
  401f82:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
  401f89:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401f8d:	8b 00                	mov    (%rax),%eax
  401f8f:	2b 45 c4             	sub    -0x3c(%rbp),%eax
  401f92:	83 e8 01             	sub    $0x1,%eax
  401f95:	89 45 dc             	mov    %eax,-0x24(%rbp)
  401f98:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401f9c:	48 8b 40 08          	mov    0x8(%rax),%rax
  401fa0:	48 8b 40 08          	mov    0x8(%rax),%rax
  401fa4:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
  401fa8:	eb 0c                	jmp    401fb6 <_ZN10DoubleLinkISsE8get_nodeEi+0xcc>
  401faa:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  401fae:	48 8b 40 08          	mov    0x8(%rax),%rax
  401fb2:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
  401fb6:	8b 45 ec             	mov    -0x14(%rbp),%eax
  401fb9:	8d 50 01             	lea    0x1(%rax),%edx
  401fbc:	89 55 ec             	mov    %edx,-0x14(%rbp)
  401fbf:	3b 45 dc             	cmp    -0x24(%rbp),%eax
  401fc2:	0f 9c c0             	setl   %al
  401fc5:	84 c0                	test   %al,%al
  401fc7:	75 e1                	jne    401faa <_ZN10DoubleLinkISsE8get_nodeEi+0xc0>
  401fc9:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  401fcd:	c9                   	leaveq 
  401fce:	c3                   	retq   
  401fcf:	90                   	nop

0000000000401fd0 <_ZN5DNodeISsEC1ESsPS0_S1_>:
  401fd0:	55                   	push   %rbp
  401fd1:	48 89 e5             	mov    %rsp,%rbp
  401fd4:	53                   	push   %rbx
  401fd5:	48 83 ec 28          	sub    $0x28,%rsp
  401fd9:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  401fdd:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
  401fe1:	48 89 55 d8          	mov    %rdx,-0x28(%rbp)
  401fe5:	48 89 4d d0          	mov    %rcx,-0x30(%rbp)
  401fe9:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401fed:	48 89 c7             	mov    %rax,%rdi
  401ff0:	e8 2b ea ff ff       	callq  400a20 <_ZNSsC1Ev@plt>
  401ff5:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401ff9:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
  401ffd:	48 89 d6             	mov    %rdx,%rsi
  402000:	48 89 c7             	mov    %rax,%rdi
  402003:	e8 58 eb ff ff       	callq  400b60 <_ZNSsaSERKSs@plt>
  402008:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  40200c:	48 8b 55 d8          	mov    -0x28(%rbp),%rdx
  402010:	48 89 50 08          	mov    %rdx,0x8(%rax)
  402014:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  402018:	48 8b 55 d0          	mov    -0x30(%rbp),%rdx
  40201c:	48 89 50 10          	mov    %rdx,0x10(%rax)
  402020:	eb 1a                	jmp    40203c <_ZN5DNodeISsEC1ESsPS0_S1_+0x6c>
  402022:	48 89 c3             	mov    %rax,%rbx
  402025:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  402029:	48 89 c7             	mov    %rax,%rdi
  40202c:	e8 8f ea ff ff       	callq  400ac0 <_ZNSsD1Ev@plt>
  402031:	48 89 d8             	mov    %rbx,%rax
  402034:	48 89 c7             	mov    %rax,%rdi
  402037:	e8 14 eb ff ff       	callq  400b50 <_Unwind_Resume@plt>
  40203c:	48 83 c4 28          	add    $0x28,%rsp
  402040:	5b                   	pop    %rbx
  402041:	5d                   	pop    %rbp
  402042:	c3                   	retq   
  402043:	90                   	nop

0000000000402044 <_ZN5DNodeI3stuEC1Ev>:
  402044:	55                   	push   %rbp
  402045:	48 89 e5             	mov    %rsp,%rbp
  402048:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  40204c:	5d                   	pop    %rbp
  40204d:	c3                   	retq   

000000000040204e <_ZN10DoubleLinkI3stuE8get_nodeEi>:
  40204e:	55                   	push   %rbp
  40204f:	48 89 e5             	mov    %rsp,%rbp
  402052:	48 83 ec 40          	sub    $0x40,%rsp
  402056:	48 89 7d c8          	mov    %rdi,-0x38(%rbp)
  40205a:	89 75 c4             	mov    %esi,-0x3c(%rbp)
  40205d:	83 7d c4 00          	cmpl   $0x0,-0x3c(%rbp)
  402061:	78 0b                	js     40206e <_ZN10DoubleLinkI3stuE8get_nodeEi+0x20>
  402063:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  402067:	8b 00                	mov    (%rax),%eax
  402069:	3b 45 c4             	cmp    -0x3c(%rbp),%eax
  40206c:	7f 26                	jg     402094 <_ZN10DoubleLinkI3stuE8get_nodeEi+0x46>
  40206e:	be 90 22 40 00       	mov    $0x402290,%esi
  402073:	bf 40 31 60 00       	mov    $0x603140,%edi
  402078:	e8 33 ea ff ff       	callq  400ab0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
  40207d:	be 10 0b 40 00       	mov    $0x400b10,%esi
  402082:	48 89 c7             	mov    %rax,%rdi
  402085:	e8 76 ea ff ff       	callq  400b00 <_ZNSolsEPFRSoS_E@plt>
  40208a:	b8 00 00 00 00       	mov    $0x0,%eax
  40208f:	e9 9d 00 00 00       	jmpq   402131 <_ZN10DoubleLinkI3stuE8get_nodeEi+0xe3>
  402094:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  402098:	8b 00                	mov    (%rax),%eax
  40209a:	89 c2                	mov    %eax,%edx
  40209c:	c1 ea 1f             	shr    $0x1f,%edx
  40209f:	01 d0                	add    %edx,%eax
  4020a1:	d1 f8                	sar    %eax
  4020a3:	3b 45 c4             	cmp    -0x3c(%rbp),%eax
  4020a6:	7c 3e                	jl     4020e6 <_ZN10DoubleLinkI3stuE8get_nodeEi+0x98>
  4020a8:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
  4020af:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  4020b3:	48 8b 40 08          	mov    0x8(%rax),%rax
  4020b7:	48 8b 40 20          	mov    0x20(%rax),%rax
  4020bb:	48 89 45 f0          	mov    %rax,-0x10(%rbp)
  4020bf:	eb 0c                	jmp    4020cd <_ZN10DoubleLinkI3stuE8get_nodeEi+0x7f>
  4020c1:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  4020c5:	48 8b 40 20          	mov    0x20(%rax),%rax
  4020c9:	48 89 45 f0          	mov    %rax,-0x10(%rbp)
  4020cd:	8b 45 fc             	mov    -0x4(%rbp),%eax
  4020d0:	8d 50 01             	lea    0x1(%rax),%edx
  4020d3:	89 55 fc             	mov    %edx,-0x4(%rbp)
  4020d6:	3b 45 c4             	cmp    -0x3c(%rbp),%eax
  4020d9:	0f 9c c0             	setl   %al
  4020dc:	84 c0                	test   %al,%al
  4020de:	75 e1                	jne    4020c1 <_ZN10DoubleLinkI3stuE8get_nodeEi+0x73>
  4020e0:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  4020e4:	eb 4b                	jmp    402131 <_ZN10DoubleLinkI3stuE8get_nodeEi+0xe3>
  4020e6:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
  4020ed:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  4020f1:	8b 00                	mov    (%rax),%eax
  4020f3:	2b 45 c4             	sub    -0x3c(%rbp),%eax
  4020f6:	83 e8 01             	sub    $0x1,%eax
  4020f9:	89 45 dc             	mov    %eax,-0x24(%rbp)
  4020fc:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  402100:	48 8b 40 08          	mov    0x8(%rax),%rax
  402104:	48 8b 40 18          	mov    0x18(%rax),%rax
  402108:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
  40210c:	eb 0c                	jmp    40211a <_ZN10DoubleLinkI3stuE8get_nodeEi+0xcc>
  40210e:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  402112:	48 8b 40 18          	mov    0x18(%rax),%rax
  402116:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
  40211a:	8b 45 ec             	mov    -0x14(%rbp),%eax
  40211d:	8d 50 01             	lea    0x1(%rax),%edx
  402120:	89 55 ec             	mov    %edx,-0x14(%rbp)
  402123:	3b 45 dc             	cmp    -0x24(%rbp),%eax
  402126:	0f 9c c0             	setl   %al
  402129:	84 c0                	test   %al,%al
  40212b:	75 e1                	jne    40210e <_ZN10DoubleLinkI3stuE8get_nodeEi+0xc0>
  40212d:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  402131:	c9                   	leaveq 
  402132:	c3                   	retq   
  402133:	90                   	nop

0000000000402134 <_ZN5DNodeI3stuEC1ES0_PS1_S2_>:
  402134:	55                   	push   %rbp
  402135:	48 89 e5             	mov    %rsp,%rbp
  402138:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  40213c:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  402140:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
  402144:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  402148:	48 8b 55 10          	mov    0x10(%rbp),%rdx
  40214c:	48 89 10             	mov    %rdx,(%rax)
  40214f:	48 8b 55 18          	mov    0x18(%rbp),%rdx
  402153:	48 89 50 08          	mov    %rdx,0x8(%rax)
  402157:	48 8b 55 20          	mov    0x20(%rbp),%rdx
  40215b:	48 89 50 10          	mov    %rdx,0x10(%rax)
  40215f:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  402163:	48 8b 55 f0          	mov    -0x10(%rbp),%rdx
  402167:	48 89 50 18          	mov    %rdx,0x18(%rax)
  40216b:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  40216f:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  402173:	48 89 50 20          	mov    %rdx,0x20(%rax)
  402177:	5d                   	pop    %rbp
  402178:	c3                   	retq   
  402179:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000402180 <__libc_csu_init>:
  402180:	41 57                	push   %r15
  402182:	41 89 ff             	mov    %edi,%r15d
  402185:	41 56                	push   %r14
  402187:	49 89 f6             	mov    %rsi,%r14
  40218a:	41 55                	push   %r13
  40218c:	49 89 d5             	mov    %rdx,%r13
  40218f:	41 54                	push   %r12
  402191:	4c 8d 25 40 0c 20 00 	lea    0x200c40(%rip),%r12        # 602dd8 <__frame_dummy_init_array_entry>
  402198:	55                   	push   %rbp
  402199:	48 8d 2d 48 0c 20 00 	lea    0x200c48(%rip),%rbp        # 602de8 <__init_array_end>
  4021a0:	53                   	push   %rbx
  4021a1:	4c 29 e5             	sub    %r12,%rbp
  4021a4:	31 db                	xor    %ebx,%ebx
  4021a6:	48 c1 fd 03          	sar    $0x3,%rbp
  4021aa:	48 83 ec 08          	sub    $0x8,%rsp
  4021ae:	e8 3d e8 ff ff       	callq  4009f0 <_init>
  4021b3:	48 85 ed             	test   %rbp,%rbp
  4021b6:	74 1e                	je     4021d6 <__libc_csu_init+0x56>
  4021b8:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
  4021bf:	00 
  4021c0:	4c 89 ea             	mov    %r13,%rdx
  4021c3:	4c 89 f6             	mov    %r14,%rsi
  4021c6:	44 89 ff             	mov    %r15d,%edi
  4021c9:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
  4021cd:	48 83 c3 01          	add    $0x1,%rbx
  4021d1:	48 39 eb             	cmp    %rbp,%rbx
  4021d4:	75 ea                	jne    4021c0 <__libc_csu_init+0x40>
  4021d6:	48 83 c4 08          	add    $0x8,%rsp
  4021da:	5b                   	pop    %rbx
  4021db:	5d                   	pop    %rbp
  4021dc:	41 5c                	pop    %r12
  4021de:	41 5d                	pop    %r13
  4021e0:	41 5e                	pop    %r14
  4021e2:	41 5f                	pop    %r15
  4021e4:	c3                   	retq   
  4021e5:	90                   	nop
  4021e6:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  4021ed:	00 00 00 

00000000004021f0 <__libc_csu_fini>:
  4021f0:	f3 c3                	repz retq 

Disassembly of section .fini:

00000000004021f4 <_fini>:
  4021f4:	48 83 ec 08          	sub    $0x8,%rsp
  4021f8:	48 83 c4 08          	add    $0x8,%rsp
  4021fc:	c3                   	retq   
