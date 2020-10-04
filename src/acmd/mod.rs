use smash::lib::lua_const::*;
use smash::app::lua_bind::EffectModule;
use smash::lua2cpp::L2CFighterCommon;
use acmd::{acmd, acmd_func};

use crate::custom::{TIME_SLOW_EFFECT_VECTOR, TIME_SLOW_EFFECT_HASH};

pub fn install() {
    acmd::add_hooks!(
        appeal_hi_r,
        appeal_hi_l,

        appeal_lw_r,
        appeal_lw_l
    );
}

#[acmd_func(
    battle_object_category = BATTLE_OBJECT_CATEGORY_FIGHTER, 
    battle_object_kind = FIGHTER_KIND_ALL, 
    animation = "appeal_hi_r",
    animcmd = "game_appealhir")]
pub fn appeal_hi_r(fighter: &mut L2CFighterCommon) {
acmd!({
    frame(3)
    if(is_execute) {
        SLOW_OPPONENT(20, 600)
        rust {
            EffectModule::req_on_joint(module_accessor, smash::phx::Hash40::new_raw(TIME_SLOW_EFFECT_HASH), smash::phx::Hash40::new("head"), &TIME_SLOW_EFFECT_VECTOR, &TIME_SLOW_EFFECT_VECTOR, 1.0, &TIME_SLOW_EFFECT_VECTOR, &TIME_SLOW_EFFECT_VECTOR, false, 0, 0, 0);
        }
    }
});
}

#[acmd_func(
    battle_object_category = BATTLE_OBJECT_CATEGORY_FIGHTER, 
    battle_object_kind = FIGHTER_KIND_ALL, 
    animation = "appeal_hi_l",
    animcmd = "game_appealhil")]
pub fn appeal_hi_l(fighter: &mut L2CFighterCommon) {
    acmd!({
        frame(3)
        if(is_execute) {
            SLOW_OPPONENT(20, 600)
            rust {
                EffectModule::req_on_joint(module_accessor, smash::phx::Hash40::new_raw(TIME_SLOW_EFFECT_HASH), smash::phx::Hash40::new("head"), &TIME_SLOW_EFFECT_VECTOR, &TIME_SLOW_EFFECT_VECTOR, 1.0, &TIME_SLOW_EFFECT_VECTOR, &TIME_SLOW_EFFECT_VECTOR, false, 0, 0, 0);
            }
        }
    });
}



#[acmd_func(
    battle_object_category = BATTLE_OBJECT_CATEGORY_FIGHTER, 
    battle_object_kind = FIGHTER_KIND_ALL, 
    animation = "appeal_lw_r",
    animcmd = "game_appeallwr")]
pub fn appeal_lw_r(fighter: &mut L2CFighterCommon) {
acmd!({
    frame(3)
    if(is_execute) {
        SLOW_OPPONENT(0, 0)
    }
});
}

#[acmd_func(
    battle_object_category = BATTLE_OBJECT_CATEGORY_FIGHTER, 
    battle_object_kind = FIGHTER_KIND_ALL, 
    animation = "appeal_lw_l",
    animcmd = "game_appeallwl")]
pub fn appeal_lw_l(fighter: &mut L2CFighterCommon) {
    acmd!({
        frame(3)
        if(is_execute) {
            SLOW_OPPONENT(0, 0)
        }
    });
}
