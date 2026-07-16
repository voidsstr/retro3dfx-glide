
;----------------------------------------------------------------------
; Assembler offsets for SSTREGS struct
;----------------------------------------------------------------------



;----------------------------------------------------------------------
; Assembler offsets for GC struct
;----------------------------------------------------------------------

base_ptr		equ 00000078h
reg_ptr			equ 00000080h
lfb_ptr			equ 00000090h
cull_mode		equ 000001f8h
tsuDataList		equ 0000013ch
triPacketHdr	equ 00000e30h
cullStripHdr	equ 00000e34h
paramMask	equ 00000e38h
fifoStart	equ 00000e78h
fifoEnd	equ 00000e80h
fifoOffset	equ 00000e88h
fifoSize	equ 00000e8ch
fifoJmpHdr	equ 00000e90h
fifoPtr	equ 00000e40h
fifoRead	equ 00000e48h
fifoRoom	equ 00000e50h
roomToReadPtr	equ 00000e98h
roomToEnd	equ 00000e9ch
lfbLockCount	equ 00000ea0h
kTriProcOffset	equ 000095c0h
triSetupProc	equ 00000e08h
drawTrianglesProc	equ 00000e10h
drawVertexList	equ 00000e08h
vertexSize	equ 00000ba0h
vertexStride	equ 00000b9ch
invalid	equ 00000ba8h
CoordinateSpace	equ 00000dd4h
paramIndex	equ 000001fch
vp_hwidth	equ 00000b30h
vp_hheight	equ 00000b34h
vp_hdepth	equ 00000b38h
vp_ox	equ 00000b24h
vp_oy	equ 00000b28h
vp_oz	equ 00000b2ch
colorType	equ 00000ba4h
wInfo_offset	equ 00000b50h
qInfo_mode	equ 00000b84h
qInfo_offset	equ 00000b88h
q0Info_offset	equ 00000b90h
q1Info_offset	equ 00000b98h
q0Info_mode	equ 00000b8ch
q1Info_mode	equ 00000b94h
fogInfo_offset	equ 00000b60h
fogInfo_mode	equ 00000b5ch
depth_range	equ 00000a74h
tmu0_s_scale	equ 00000a24h
tmu0_t_scale	equ 00000a28h
tmu1_s_scale	equ 00000a4ch
tmu1_t_scale	equ 00000a50h
fbi_fbzMode	equ 00000228h
curTriSize		equ 0000004ch
trisProcessed		equ 0000000ch
trisDrawn		equ 00000010h
lostContext		equ 000097b8h
windowed		equ 000097c4h
bInfo		equ 00000130h

;----------------------------------------------------------------------
; Assembler offsets for GlideRoot struct
;----------------------------------------------------------------------

p6Fencer		equ 00000000h
current_sst		equ 00000018h
tlsOffset			equ 00000010h
pool_f255	equ 0000003ch
pool_f1	equ 00000038h
SIZEOF_GrState		equ 00000be4h
SIZEOF_GC		equ 00009818h

SIZEOF_GlideRoot	equ 000be7e0h

