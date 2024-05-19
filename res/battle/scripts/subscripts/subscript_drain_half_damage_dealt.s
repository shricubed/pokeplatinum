    .include "macros/btlcmd.inc"

    .data

_000:
    UpdateVarFromVar OPCODE_SET, BTLVAR_HP_CALC_TEMP, BTLVAR_HIT_DAMAGE
    CompareVarToValue OPCODE_EQU, BTLVAR_HP_CALC_TEMP, 0, _011
    DivideVarByValue BTLVAR_HP_CALC_TEMP, 2

_011:
    CheckItemHoldEffect CHECK_NOT_HAVE, BTLSCR_ATTACKER, HOLD_EFFECT_LEECH_BOOST, _031
    GetItemEffectParam BTLSCR_ATTACKER, BTLVAR_CALC_TEMP
    UpdateVar OPCODE_ADD, BTLVAR_CALC_TEMP, 0x00000064
    UpdateVarFromVar OPCODE_MUL, BTLVAR_HP_CALC_TEMP, BTLVAR_CALC_TEMP
    UpdateVar OPCODE_DIV, BTLVAR_HP_CALC_TEMP, 100

_031:
    UpdateVarFromVar OPCODE_SET, BTLVAR_MSG_BATTLER_TEMP, BTLVAR_ATTACKER
    UpdateVar OPCODE_FLAG_ON, BTLVAR_BATTLE_CTX_STATUS, SYSCTL_SKIP_SPRITE_BLINK
    CheckAbility CHECK_HAVE, BTLSCR_DEFENDER, ABILITY_LIQUID_OOZE, _077
    CompareMonDataToValue OPCODE_NEQ, BTLSCR_ATTACKER, BATTLEMON_HEAL_BLOCK_TURNS, 0, _064
    UpdateVar OPCODE_MUL, BTLVAR_HP_CALC_TEMP, -1
    Call BATTLE_SUBSCRIPT_UPDATE_HP
    // {0} had its energy drained!
    PrintMessage pl_msg_00000368_00082, TAG_NICKNAME, BTLSCR_DEFENDER
    Wait 
    WaitButtonABTime 30
    End 

_064:
    UpdateVar OPCODE_SET, BTLVAR_MSG_MOVE_TEMP, MOVE_HEAL_BLOCK
    // {0} was prevented from healing due to {1}!
    PrintMessage pl_msg_00000368_01054, TAG_NICKNAME_MOVE, BTLSCR_ATTACKER, BTLSCR_MSG_TEMP
    Wait 
    WaitButtonABTime 30
    End 

_077:
    CheckAbility CHECK_HAVE, BTLSCR_ATTACKER, ABILITY_MAGIC_GUARD, _090
    Call BATTLE_SUBSCRIPT_UPDATE_HP
    // It sucked up the liquid ooze!
    PrintMessage pl_msg_00000368_00720, TAG_NONE
    Wait 
    WaitButtonABTime 30

_090:
    End 