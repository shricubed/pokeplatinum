#include <nitro.h>
#include <string.h>

#include "inlines.h"

#include "struct_decls/struct_0202440C_decl.h"
#include "struct_decls/struct_party_decl.h"

#include "field/field_system.h"
#include "struct_defs/struct_02055BA8.h"

#include "rtc.h"
#include "savedata/save_table.h"
#include "unk_02025CB0.h"
#include "unk_0202854C.h"
#include "unk_0202B37C.h"
#include "unk_0202C858.h"
#include "unk_0202D7A8.h"
#include "unk_0202E2CC.h"
#include "field_system.h"
#include "unk_0203E880.h"
#include "vars_flags.h"
#include "unk_020559DC.h"
#include "unk_02055C50.h"
#include "unk_0206AFE0.h"
#include "unk_0206B9D8.h"
#include "unk_0206C2D0.h"
#include "unk_0206CCB0.h"
#include "pokemon.h"
#include "party.h"

static void sub_02055AC0(FieldSystem * fieldSystem, s32 param1);
static void sub_02055B64(FieldSystem * fieldSystem, s32 param1, const RTCTime * param2);
static void sub_02055A14(FieldSystem * fieldSystem, UnkStruct_02055BA8 * param1, const RTCDate * param2);
static void inline_020559DC(FieldSystem * fieldSystem, UnkStruct_02055BA8 * param1, const RTCDate * param2, const RTCTime * param3);

void FieldSystem_SetDateTime (FieldSystem * fieldSystem)
{
    RTCDate date;
    RTCTime time;
    UnkStruct_02055BA8 * v2 = sub_02025CD8(fieldSystem->saveData);

    if (v2->unk_00 == 0) {
        return;
    }

    GetCurrentDateTime(&date, &time);
    sub_02055A14(fieldSystem, v2, &date);

    inline_020559DC(fieldSystem, v2, &date, &time);
}

static void sub_02055A14 (FieldSystem * fieldSystem, UnkStruct_02055BA8 * param1, const RTCDate * param2)
{
    s32 day;

    day = RTC_ConvertDateToDay(param2);

    if (day < param1->convertedDay) {
        param1->convertedDay = day;
    } else if (day > param1->convertedDay) {
        sub_02055AC0(fieldSystem, day - param1->convertedDay);
        param1->convertedDay = day;
    }
}

static void inline_020559DC (FieldSystem * fieldSystem, UnkStruct_02055BA8 * param1, const RTCDate * param2, const RTCTime * param3)
{
    s64 v0, v1;
    s32 v2;

    v0 = RTC_ConvertDateTimeToSecond(param2, param3);
    v1 = RTC_ConvertDateTimeToSecond(&param1->RtcDate, &param1->RtcTime);

    if (v0 < v1) {
        param1->RtcDate = *param2;
        param1->RtcTime = *param3;
    } else {
        v2 = (v0 - v1) / 60;

        if (v2 > 0) {
            sub_02025DC8(param1, v2);
            sub_02055B64(fieldSystem, v2, param3);

            param1->RtcDate = *param2;
            param1->RtcTime = *param3;
        }
    }
}

static void sub_02055AC0 (FieldSystem * fieldSystem, s32 param1)
{
    sub_02028658(FieldSystem_SaveData(fieldSystem), param1);
    sub_0203F1FC(fieldSystem);
    sub_0206C2D0(fieldSystem->saveData, param1);
    sub_0202B3D8(sub_0202B4A0(fieldSystem->saveData), param1);
    sub_0202D80C(sub_0202D834(fieldSystem->saveData), sub_0202B428(sub_0202B4A0(fieldSystem->saveData)));

    {
        Party * party = Party_GetFromSavedata(fieldSystem->saveData);
        Party_UpdatePokerusStatus(party, param1);
    }

    {
        VarsFlags * v1 = SaveData_GetVarsFlags(fieldSystem->saveData);
        u16 v2 = sub_0206B260(v1);

        if (v2 > param1) {
            v2 -= param1;
        } else {
            v2 = 0;
        }

        sub_0206B270(v1, v2);
    }

    {
        sub_0206B2E4(fieldSystem->saveData, param1);
    }

    {
        sub_0206B334(fieldSystem->saveData);
    }

    sub_0206B514(fieldSystem->saveData);
    sub_0203F310(fieldSystem);
    sub_0206C008(fieldSystem->saveData);
    sub_0202C9A0(sub_0202C878(fieldSystem->saveData));
    sub_0206F2F0(fieldSystem->saveData);
}

static void sub_02055B64 (FieldSystem * fieldSystem, s32 param1, const RTCTime * param2)
{
    sub_02055CD4(fieldSystem, param1);
    sub_0202D854(fieldSystem->saveData, param1);
    sub_02028758(fieldSystem->saveData, param1, sub_02055C40(fieldSystem));

    {
        TVBroadcast * v0 = SaveData_TVBroadcast(fieldSystem->saveData);
        sub_0202E324(v0, param1, param2->minute);
    }

    {
        Party * v1;

        v1 = Party_GetFromSavedata(fieldSystem->saveData);
        Party_SetShayminForm(v1, param1, param2);
    }
}

int GetTimeOfDay (const FieldSystem * fieldSystem)
{
    UnkStruct_02055BA8 * v0 = sub_02025CD8(fieldSystem->saveData);
    return TimeOfDayForHour(v0->RtcTime.hour);
}

int GetMonth (const FieldSystem * fieldSystem)
{
    UnkStruct_02055BA8 * v0 = sub_02025CD8(fieldSystem->saveData);
    return v0->RtcDate.month;
}

int GetDay (const FieldSystem * fieldSystem)
{
    UnkStruct_02055BA8 * v0 = sub_02025CD8(fieldSystem->saveData);
    return v0->RtcDate.day;
}

int GetWeek (const FieldSystem * fieldSystem)
{
    UnkStruct_02055BA8 * v0 = sub_02025CD8(fieldSystem->saveData);
    return v0->RtcDate.week;
}

int GetHour (const FieldSystem * fieldSystem)
{
    UnkStruct_02055BA8 * v0 = sub_02025CD8(fieldSystem->saveData);
    return v0->RtcTime.hour;
}

int GetMinute (const FieldSystem * fieldSystem)
{
    UnkStruct_02055BA8 * v0 = sub_02025CD8(fieldSystem->saveData);
    return v0->RtcTime.minute;
}

void sub_02055BF4 (const FieldSystem * fieldSystem, RTCDate * param1, RTCTime * param2)
{
    UnkStruct_02055BA8 * v0 = sub_02025CD8(fieldSystem->saveData);
    RTC_ConvertSecondToDateTime(param1, param2, v0->convertedSeconds);
}

void sub_02055C10 (const FieldSystem * fieldSystem, RTCDate * param1, RTCTime * param2)
{
    UnkStruct_02055BA8 * v0 = sub_02025CD8(fieldSystem->saveData);
    RTC_ConvertSecondToDateTime(param1, param2, v0->unk_2C);
}

void SetTimestamp (const FieldSystem * fieldSystem) //SetTimestamp
{
    UnkStruct_02055BA8 * v0 = sub_02025CD8(fieldSystem->saveData);

    v0->unk_2C = GetTimestamp();
}

BOOL sub_02055C40 (FieldSystem * fieldSystem)
{
    UnkStruct_02055BA8 * v0 = sub_02025CD8(fieldSystem->saveData);
    return sub_02025DB8(v0);
}
