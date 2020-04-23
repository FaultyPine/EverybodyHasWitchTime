#pragma once

namespace app::lua_bind {
    namespace KineticEnergyNormal {
        void off_consider_ground_normal(u64 EnergyStruct) asm("_ZN3app8lua_bind52KineticEnergyNormal__off_consider_ground_normal_implEPNS_19KineticEnergyNormalE") LINKABLE;
        u64 on_consider_ground_normal(u64 EnergyStruct) asm("_ZN3app8lua_bind51KineticEnergyNormal__on_consider_ground_normal_implEPNS_19KineticEnergyNormalE") LINKABLE;
        u64 set_accel(u64 EnergyStruct, const Vector2f*) asm("_ZN3app8lua_bind35KineticEnergyNormal__set_accel_implEPNS_19KineticEnergyNormalERKN3phx8Vector2fE") LINKABLE;
        u64 set_brake(u64 EnergyStruct, const Vector2f*) asm("_ZN3app8lua_bind35KineticEnergyNormal__set_brake_implEPNS_19KineticEnergyNormalERKN3phx8Vector2fE") LINKABLE;
        u64 set_limit_speed(u64 EnergyStruct,const Vector2f*) asm("_ZN3app8lua_bind41KineticEnergyNormal__set_limit_speed_implEPNS_19KineticEnergyNormalERKN3phx8Vector2fE") LINKABLE;
        u64 set_speed(u64 EnergyStruct,const Vector2f*) asm("_ZN3app8lua_bind35KineticEnergyNormal__set_speed_implEPNS_19KineticEnergyNormalERKN3phx8Vector2fE") LINKABLE;
        u64 set_speed_3d(u64 EnergyStruct,const Vector3f*) asm("_ZN3app8lua_bind38KineticEnergyNormal__set_speed_3d_implEPNS_19KineticEnergyNormalERKN3phx8Vector3fE") LINKABLE;
        u64 set_stable_speed(u64 EnergyStruct,const Vector2f*) asm("_ZN3app8lua_bind42KineticEnergyNormal__set_stable_speed_implEPNS_19KineticEnergyNormalERKN3phx8Vector2fE") LINKABLE;
    }
}

/*
Usage example....??

void* gravity = KineticModule::get_energy(boma, FIGHTER_KINETIC_ENERGY_ID_GRAVITY); //get_energy returns the specified energy struct
FighterKineticEnergyGravity::set_stable_speed(gravity, 0.5);
FighterKineticEnergyGravity::set_accel(gravity, 0.025);

*/
