#include <switch_min.h>

#include <stdint.h>

#include "useful/const_value_table.h"
#include "useful/raygun_printer.h"
#include "useful/useful.h"

#include "acmd_wrapper.h"

using namespace lib;
using namespace app::sv_animcmd;
using namespace app::sv_math;
using namespace app::sv_kinetic_energy;
using namespace app::sv_battle_object;
using namespace app::sv_module_access;
using namespace app::FL_sv_module_access;
using namespace app::sv_system;
using namespace app::lua_bind;

Vector3f time_slow_effect_vector = {0,0,0};
u64 time_slow_effect_hash = hash40("sys_sp_flash");
ACMD acmd_objs[] = {
        ACMD("BATTLE_OBJECT_CATEGORY_FIGHTER", NULL, "appeal_hi_r", "game_appealhir",
         [](ACMD *acmd) -> void {
             acmd->frame(2);
             if(acmd->is_excute()){
                 acmd->wrap(SLOW_OPPONENT, {L2CValue(20), L2CValue(600)});
                 EffectModule::req_on_joint(acmd->module_accessor, time_slow_effect_hash, hash40("waist"), &time_slow_effect_vector, &time_slow_effect_vector, 1.0, &time_slow_effect_vector, &time_slow_effect_vector, false, 0, 0, 0);
             }
         }),
        ACMD("BATTLE_OBJECT_CATEGORY_FIGHTER", NULL, "appeal_hi_l", "game_appealhil",
         [](ACMD *acmd) -> void {
             acmd->frame(2);
             if(acmd->is_excute()){
                 acmd->wrap(SLOW_OPPONENT, {L2CValue(20), L2CValue(600)});
                 EffectModule::req_on_joint(acmd->module_accessor, time_slow_effect_hash, hash40("waist"), &time_slow_effect_vector, &time_slow_effect_vector, 1.0, &time_slow_effect_vector, &time_slow_effect_vector, false, 0, 0, 0);
             }
         }),


        ACMD("BATTLE_OBJECT_CATEGORY_FIGHTER", NULL, "appeal_lw_r", "game_appeallwr",
         [](ACMD *acmd) -> void {
             acmd->frame(2);
             if(acmd->is_excute()){
                 acmd->wrap(SLOW_OPPONENT, {L2CValue(0), L2CValue(0)});
             }
         }),
        ACMD("BATTLE_OBJECT_CATEGORY_FIGHTER", NULL, "appeal_lw_l", "game_appeallwl",
         [](ACMD *acmd) -> void {
             acmd->frame(2);
             if(acmd->is_excute()){
                 acmd->wrap(SLOW_OPPONENT, {L2CValue(0), L2CValue(0)});
             }
         })
};