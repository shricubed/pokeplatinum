    .include "macros/scrcmd.inc"

    .data

    .long _0012-.-4
    .long _0088-.-4
    .long _009F-.-4
    .long _00B4-.-4
    .short 0xFD13

_0012:
    ScrCmd_049 0x5DC
    ScrCmd_060
    ScrCmd_020 198
    ScrCmd_01C 1, _0066
    ScrCmd_02C 0
    ScrCmd_034
    ScrCmd_068
    ScrCmd_05E 0x800D, _0080
    ScrCmd_05F
    ScrCmd_02C 1
    ScrCmd_028 0x8004, 0x194
    ScrCmd_028 0x8005, 1
    ScrCmd_07D 0x8004, 0x8005, 0x800C
    ScrCmd_011 0x800C, 0
    ScrCmd_01C 1, _0073
    ScrCmd_014 0x7FC
    ScrCmd_01E 198
    ScrCmd_016 _0066

_0066:
    ScrCmd_068
    ScrCmd_02C 2
    ScrCmd_031
    ScrCmd_034
    ScrCmd_061
    ScrCmd_002

_0073:
    ScrCmd_014 0x7E1
    ScrCmd_034
    ScrCmd_061
    ScrCmd_002

    .balign 4, 0
_0080:
    .short 75, 1
    .short 0xFE, 0x00

_0088:
    ScrCmd_036 3, 1, 0, 0x800C
    ScrCmd_038 3
    ScrCmd_039
    ScrCmd_03B 0x800C
    ScrCmd_014 0x7D0
    ScrCmd_002

_009F:
    ScrCmd_037 3, 0
    ScrCmd_038 3
    ScrCmd_039
    ScrCmd_03A 4, 0x800C
    ScrCmd_014 0x7D0
    ScrCmd_002

_00B4:
    ScrCmd_036 5, 1, 0, 0x800C
    ScrCmd_038 3
    ScrCmd_039
    ScrCmd_03B 0x800C
    ScrCmd_014 0x7D0
    ScrCmd_002

    .byte 0