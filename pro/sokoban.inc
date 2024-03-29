ifndef SOKOBAN_INC
SOKOBAN_INC equ <1>

include windows.inc
include user32.inc
include kernel32.inc
include comctl32.inc
include masm32.inc
include shell32.inc
include gdi32.inc
include msvcrt.inc

includelib user32.lib
includelib kernel32.lib
includelib comctl32.lib
includelib masm32.lib
includelib gdi32.lib
includelib msvcrt.lib

MAX_LEN		EQU	100
REC_LEN		EQU	100
BRUSH_LEN	EQU 6
Number0		EQU 00b4c1cdh
Number1		EQU 008cfeffh
Number2		EQU 0097d0e8h
Number3		EQU 0091d2ffh
Number4		EQU 007999e8h
Number5		EQU 00918fffh

DialogBack	EQU 0aaaaaah
StageBack   EQU 00a0adbbh
TextColor   EQU 00000000h
ButtonColor EQU 00ffffffh

WinMain             PROTO :DWORD, :DWORD, :DWORD, :DWORD	; 窗口主程序
Calculate           PROTO :DWORD, :DWORD, :DWORD, :DWORD	; 消息处理程序
InitRec             PROTO :DWORD							; 初始化方格矩阵
InitBack            PROTO       							; 初始化颜色数组
InitBrush           PROTO       							; 初始化笔刷数组
RefreshRec			PROTO
MoveUp				PROTO
MoveDown			PROTO
MoveLeft			PROTO
MoveRight			PROTO
CreateMap1			PROTO
CreateMap2			PROTO
CreateMap3			PROTO
CreateMap4			PROTO
CreateMap5			PROTO
CreateMap6			PROTO
CreateMap7			PROTO
CreateMap8			PROTO
CreateMap9			PROTO
CreateMap10			PROTO
ShowNumber			PROTO
WindowShow          PROTO
WindowHide          PROTO
DragUp				PROTO
DragDown            PROTO
DragLeft            PROTO
DragRight           PROTO
JumpUp				PROTO
JumpDown			PROTO
JumpLeft			PROTO
JumpRight			PROTO

IDD_DIALOG1            EQU         102
IDR_ACCELERATOR2       EQU         109
IDC_NEW                EQU         1007
IDC_UP                 EQU         1118
IDC_DOWN               EQU         1119
IDC_LEFT               EQU         1120
IDC_RIGHT              EQU         1121
IDC_STEP               EQU         1122
IDC_STEPTEXT           EQU         1123
IDC_LEVEL              EQU         1124
IDC_LEVELTEXT          EQU         1125
IDC_BACK               EQU         1145
IDC_BACKTEXT           EQU         1146
IDC_REMAKE             EQU         1126
IDCP_UP                EQU         1141
IDCP_DOWN              EQU         1142
IDCP_LEFT              EQU         1143
IDCP_RIGHT             EQU         1144
IDC_BLEVEL1            EQU         1130
IDC_BLEVEL2            EQU         1131
IDC_BLEVEL3            EQU         1132
IDC_BLEVEL4            EQU         1133
IDC_BLEVEL5            EQU         1134
IDC_BLEVEL6            EQU         1135
IDC_BLEVEL7            EQU         1136
IDC_BLEVEL8            EQU         1137
IDC_BLEVEL9            EQU         1138
IDC_BLEVEL10           EQU         1139
IDC_AGAIN              EQU         1140
IDCQ_DOWN			   EQU		   40028
IDCQ_LEFT			   EQU		   40029
IDCQ_UP				   EQU		   40030
IDCQ_RIGHT			   EQU		   40031
externdef CurrentMapText: dword
externdef OriginMapText: dword

endif
