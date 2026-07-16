
;----------------------------------------------------------------------
; Assembler offsets for SSTREGS struct
;----------------------------------------------------------------------



;----------------------------------------------------------------------
; Assembler offsets for GC struct
;----------------------------------------------------------------------

base_ptr		equ 00000030h
reg_ptr			equ 00000038h
lfb_ptr			equ 00000048h
tex_ptr			equ 00000040h
cull_mode		equ 00000418h
regDataList		equ 00000060h
tsuDataList		equ 00000350h
triPacketHdr	equ 00000550h
cullStripHdr	equ 00000554h
paramMask	equ 00000558h
fifoStart	equ 00000560h
fifoEnd	equ 00000568h
fifoOffset	equ 00000570h
fifoSize	equ 00000574h
fifoJmpHdr	equ 00000578h
fifoPtr	equ 00000580h
fifoRead	equ 00000588h
fifoRoom	equ 0000058ch
roomToReadPtr	equ 00000590h
roomToEnd	equ 00000594h
lfbLockCount	equ 00000598h

;----------------------------------------------------------------------
; Assembler offsets for GC Stuff for Chris struct
;----------------------------------------------------------------------

gc_totBuffers	equ 00000000h
    gc_strideInTiles	equ 00000004h
gc_heightInTiles	equ 00000008h
gc_tileStride	equ 0000000ch
gc_bufSizeInTiles	equ 00000010h
gc_bufSize	equ 00000014h
gc_fbOffset	equ 00000018h
gc_tramOffset	equ 0000001ch
gc_base_ptr	equ 00000030h
gc_reg_ptr	equ 00000038h
gc_tex_ptr	equ 00000040h
gc_lfb_ptr	equ 00000048h
gc_bInfo	equ 00000058h
gc_cmdTransportInfo_fifoStart	equ 00000560h
gc_cmdTransportInfo_fifoEnd	equ 00000568h
gc_cmdTransportInfo_fifoOffset	equ 00000570h
gc_cmdTransportInfo_fifoSize	equ 00000574h
gc_cmdTransportInfo_fifoJmpHdr	equ 00000578h
gc_cmdTransportInfo_fifoPtr	equ 00000580h
gc_cmdTransportInfo_fifoRead	equ 00000588h
gc_cmdTransportInfo_fifoRoom	equ 0000058ch
gc_cmdTransportInfo_roomToReadPtr	equ 00000590h
gc_cmdTransportInfo_roomToEnd	equ 00000594h
gc_cmdTransportInfo_lfbLockCount	equ 00000598h
gc_ioRegs	equ 000005b8h
gc_cRegs	equ 000005c0h
gc_gRegs	equ 000005c8h
gc_sstRegs	equ 000005d0h
gc_rawLfb	equ 000005d8h
gc_nBuffers	equ 000005e0h
gc_curBuffer	equ 000005e4h
gc_frontBuffer	equ 000005e8h
gc_backBuffer	equ 000005ech
gc_buffers	equ 000005f0h
gc_counter	equ 000346ach
gc_expected_counter	equ 000346b0h
gc_checkCounter	equ 000346b4h
gc_checkPtr	equ 000346b8h
SIZEOF_GrState		equ 0000010ch
SIZEOF_GrHwConfiguration	equ 00000094h
SIZEOF_GC		equ 000346d8h


;----------------------------------------------------------------------
; Assembler offsets for GlideRoot struct
;----------------------------------------------------------------------

p6Fencer		equ 00000000h
current_sst		equ 00000004h
CPUType			equ 00000008h
curGC			equ 00000010h
curTriSize		equ 00000020h
trisProcessed		equ 000000a0h
trisDrawn		equ 000000a4h
SIZEOF_GlideRoot	equ 000d1cd8h


;----------------------------------------------------------------------
; Assembler offsets for GrVertex struct
;----------------------------------------------------------------------

x	equ 00000000h
y	equ 00000004h
r	equ 0000000ch
g	equ 00000010h
b	equ 00000014h
a	equ 0000001ch
SIZEOF_GrVertex	equ 0000003ch

