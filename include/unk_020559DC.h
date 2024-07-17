#ifndef POKEPLATINUM_UNK_020559DC_H
#define POKEPLATINUM_UNK_020559DC_H

#include "field/field_system_decl.h"

#include <nitro/rtc.h>

void FieldSystem_SetDateTime(FieldSystem * fieldSystem);
int GetTimeOfDay(const FieldSystem * fieldSystem);
int GetMonth(const FieldSystem * fieldSystem);
int GetDay(const FieldSystem * fieldSystem);
int GetWeek(const FieldSystem * fieldSystem);
int GetHour(const FieldSystem * fieldSystem);
int GetMinute(const FieldSystem * fieldSystem);
void sub_02055BF4(const FieldSystem * fieldSystem, RTCDate * param1, RTCTime * param2);
void sub_02055C10(const FieldSystem * fieldSystem, RTCDate * param1, RTCTime * param2);
void SetTimestamp(const FieldSystem * fieldSystem);
BOOL sub_02055C40(FieldSystem * fieldSystem);

#endif // POKEPLATINUM_UNK_020559DC_H
