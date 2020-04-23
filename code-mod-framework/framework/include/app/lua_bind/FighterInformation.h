#pragma once

namespace app::lua_bind {
    namespace FighterInformation { //ones commented out are ones where i was unsure of the return type... if you know one, fill it in
        int dead_count(u64 FighterInfoStruct, int) asm("_ZN3app8lua_bind35FighterInformation__dead_count_implEPNS_18FighterInformationEi") LINKABLE;
        int fighter_category(u64 FighterInfoStruct) asm("_ZN3app8lua_bind41FighterInformation__fighter_category_implEPNS_18FighterInformationE") LINKABLE;
        int fighter_color(u64 FighterInfoStruct) asm("_ZN3app8lua_bind38FighterInformation__fighter_color_implEPNS_18FighterInformationE") LINKABLE;
        int get_log_int(u64 FighterInfoStruct,int,int,int) asm("_ZN3app8lua_bind36FighterInformation__get_log_int_implEPNS_18FighterInformationEiii") LINKABLE;
        //u64 get_no_change_hp(u64 FighterInfoStruct) asm("_ZN3app8lua_bind41FighterInformation__get_no_change_hp_implEPNS_18FighterInformationE") LINKABLE;
        //u64 gravity(u64 FighterInfoStruct) asm("_ZN3app8lua_bind32FighterInformation__gravity_implEPNS_18FighterInformationE") LINKABLE;
        //u64 hit_point(u64 FighterInfoStruct) asm("_ZN3app8lua_bind34FighterInformation__hit_point_implEPNS_18FighterInformationE") LINKABLE;
        bool is_last_dead_suicide(u64 FighterInfoStruct) asm("_ZN3app8lua_bind45FighterInformation__is_last_dead_suicide_implEPNS_18FighterInformationE") LINKABLE;
        bool is_operation_cpu(u64 FighterInfoStruct) asm("_ZN3app8lua_bind41FighterInformation__is_operation_cpu_implEPNS_18FighterInformationE") LINKABLE;
        int stock_count(u64 FighterInfoStruct) asm("_ZN3app8lua_bind36FighterInformation__stock_count_implEPNS_18FighterInformationE") LINKABLE;
        int suicide_count(u64 FighterInfoStruct,int) asm("_ZN3app8lua_bind38FighterInformation__suicide_count_implEPNS_18FighterInformationEi") LINKABLE;
        void summon_bomb_ready_frame(u64 FighterInfoStruct) asm("_ZN3app8lua_bind48FighterInformation__summon_bomb_ready_frame_implEPNS_18FighterInformationE") LINKABLE;
        void summon_boss_id(u64 FighterInfoStruct) asm("_ZN3app8lua_bind39FighterInformation__summon_boss_id_implEPNS_18FighterInformationE") LINKABLE;
        void summon_pre_bomb_effect_frame(u64 FighterInfoStruct) asm("_ZN3app8lua_bind53FighterInformation__summon_pre_bomb_effect_frame_implEPNS_18FighterInformationE") LINKABLE;
        void summon_suicide_bomb_attack_mul(u64 FighterInfoStruct) asm("_ZN3app8lua_bind55FighterInformation__summon_suicide_bomb_attack_mul_implEPNS_18FighterInformationE") LINKABLE;
        void summon_suicide_bomb_reaction_mul(u64 FighterInfoStruct) asm("_ZN3app8lua_bind57FighterInformation__summon_suicide_bomb_reaction_mul_implEPNS_18FighterInformationE") LINKABLE;
        //u64 total_beat_count(u64 FighterInfoStruct,int) asm("_ZN3app8lua_bind41FighterInformation__total_beat_count_implEPNS_18FighterInformationEi") LINKABLE;
    }
}

/*
Probably used similarly to KineticEnergyNormal functions.... get a pointer to the FighterInformation struct and pass that in as the first arg

void* info = FighterManager::get_fighter_information(boma, something);

*/