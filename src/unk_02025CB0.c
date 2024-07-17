#include <nitro.h>
#include <string.h>

#include "savedata.h"
#include "struct_defs/struct_02055BA8.h"

#include "rtc.h"
#include "savedata.h"
#include "unk_02025CB0.h"

typedef struct SystemData {
    s64 rtcOffset;
    u8 macAddr[6];
    u8 bdayMonth;
    u8 bdayDate;
    UnkStruct_02055BA8 unk_10;
    u8 unk_48;
    u8 unk_49;
    s32 unk_4C;
    u32 unk_50[3];
} SystemData;

int SystemData_SaveSize (void)
{
    return sizeof(SystemData);
}

void SystemData_Init (SystemData * param0)
{
    MI_CpuClearFast(param0, sizeof(SystemData));
    sub_02025D84(&param0->unk_10);
}

SystemData * sub_02025CCC (SaveData * param0) //SystemData_Get
{
    return SaveData_SaveTable(param0, 0);
}

UnkStruct_02055BA8 * sub_02025CD8 (SaveData * param0)
{
    SystemData * systemData;

    v0 =  sub_02025CCC(param0);
    return &v0->unk_10;
}

void sub_02025CE4 (SystemData * param0) //System_CopyFromOS
{
    OSOwnerInfo v0;

    param0->rtcOffset = OS_GetOwnerRtcOffset();

    OS_GetMacAddress(param0->macAddr);
    OS_GetOwnerInfo(&v0);

    param0->bdayMonth = v0.birthday.month;
    param0->bdayDate = v0.birthday.day;
}

BOOL sub_02025D10 (const SystemData * param0) //System_CheckMacAddr
{
    int v0;
    u8 v1[6];

    OS_GetMacAddress(v1);

    for (v0 = 0; v0 < 6; v0++) {
        if (param0->macAddr[v0] != v1[v0]) {
            return 0;
        }
    }

    return 1;
}

BOOL sub_02025D40 (const SystemData * param0) //System_CheckRtcOffset
{
    return OS_GetOwnerRtcOffset() == param0->rtcOffset;
}

u8 sub_02025D5C (const SystemData * param0)
{
    return param0->bdayMonth;
}

u8 sub_02025D60 (const SystemData * param0)
{
    return param0->bdayDate;
}

BOOL sub_02025D64 (const SystemData * param0)
{
    return param0->unk_48;
}

void sub_02025D6C (SystemData * param0, BOOL param1)
{
    param0->unk_48 = param1;
}

s32 sub_02025D74 (const SystemData * param0)
{
    return param0->unk_4C;
}

void sub_02025D78 (SystemData * param0, s32 param1)
{
    if (param0->unk_4C == 0) {
        param0->unk_4C = param1;
    }
}

void sub_02025D84 (UnkStruct_02055BA8 * param0) //SetRTCDateTime
{
    param0->rtcOffset = 1;
    GetCurrentDateTime(&param0->RtcDate, &param0->RtcTime);
    param0->convertedDay = RTC_ConvertDateToDay(&param0->RtcDate);
    param0->convertedSeconds = RTC_ConvertDateTimeToSecond(&param0->RtcDate, &param0->RtcTime);
    param0->unk_2C = 0;
    param0->unk_34 = 0;
}

BOOL sub_02025DB8 (const UnkStruct_02055BA8 * param0)
{
    if (param0->unk_34 != 0) {
        return 1;
    } else {
        return 0;
    }
}

void sub_02025DC8 (UnkStruct_02055BA8 * param0, int param1)
{
    if (param0->unk_34 > 24 * 60) {
        param0->unk_34 = 24 * 60;
    }

    if (param0->unk_34 < param1) {
        param0->unk_34 = 0;
    } else {
        param0->unk_34 -= param1;
    }
}

void sub_02025DE8 (UnkStruct_02055BA8 * param0)
{
    param0->unk_34 = 60 * 24;
    GetCurrentDateTime(&param0->RtcDate, &param0->RtcTime);
    param0->convertedDay = RTC_ConvertDateToDay(&param0->RtcDate);
}
