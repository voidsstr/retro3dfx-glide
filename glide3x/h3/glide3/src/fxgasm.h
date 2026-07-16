
;----------------------------------------------------------------------
; Assembler offsets for SSTREGS struct
;----------------------------------------------------------------------



;----------------------------------------------------------------------
; Assembler offsets for GC struct
;----------------------------------------------------------------------

base_ptr		equ 00000078h
reg_ptr			equ 00000080h
lfb_ptr			equ 00000090h
cull_mode		equ 000001e8h
tsuDataList		equ 0000012ch
triPacketHdr	equ 00000a90h
cullStripHdr	equ 00000a94h
paramMask	equ 00000a98h
fifoStart	equ 00000ad8h
fifoEnd	equ 00000ae0h
fifoOffset	equ 00000ae8h
fifoSize	equ 00000aech
fifoJmpHdr	equ 00000af0h
fifoPtr	equ 00000aa0h
fifoRead	equ 00000aa8h
fifoRoom	equ 00000ab0h
roomToReadPtr	equ 00000af8h
roomToEnd	equ 00000afch
lfbLockCount	equ 00000b00h
kTriProcOffset	equ 000091e0h
triSetupProc	equ 00000a68h
drawTrianglesProc	equ 00000a70h
drawVertexList	equ 00000a68h
vertexSize	equ 00000970h
vertexStride	equ 0000096ch
invalid	equ 00000978h
CoordinateSpace	equ 00000a38h
paramIndex	equ 000001ech
vp_hwidth	equ 00000900h
vp_hheight	equ 00000904h
vp_hdepth	equ 00000908h
vp_ox	equ 000008f4h
vp_oy	equ 000008f8h
vp_oz	equ 000008fch
colorType	equ 00000974h
wInfo_offset	equ 00000920h
qInfo_mode	equ 00000954h
qInfo_offset	equ 00000958h
q0Info_offset	equ 00000960h
q1Info_offset	equ 00000968h
q0Info_mode	equ 0000095ch
q1Info_mode	equ 00000964h
fogInfo_offset	equ 00000930h
fogInfo_mode	equ 0000092ch
tmu0_s_scale	equ 0000086ch
tmu0_t_scale	equ 00000870h
tmu1_s_scale	equ 00000888h
tmu1_t_scale	equ 0000088ch
fbi_fbzMode	equ 00000204h
curTriSize		equ 0000004ch
trisProcessed		equ 0000000ch
trisDrawn		equ 00000010h
lostContext		equ 00009308h
windowed		equ 00009314h
bInfo		equ 00000120h

;----------------------------------------------------------------------
; Assembler offsets for GlideRoot struct
;----------------------------------------------------------------------

p6Fencer		equ 00000000h
current_sst		equ 00000018h
tlsOffset			equ 00000010h
pool_f255	equ 00000034h
SIZEOF_GrState		equ 00000854h
SIZEOF_GC		equ 00009368h

SIZEOF_GlideRoot	equ 000b85f8h

