#include "CNWSkill.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CNWSkill::CNWSkill(const CNWSkill&)
{
    __builtin_trap(); // This is an auto-generated stub. You probably shouldn't use it.
}

CNWSkill& CNWSkill::operator=(const CNWSkill&)
{
    __builtin_trap(); // This is an auto-generated stub. You probably shouldn't use it.
}

CNWSkill::CNWSkill()
{
    CNWSkill__CNWSkillCtor__0(this);
}

CNWSkill::~CNWSkill()
{
    CNWSkill__CNWSkillDtor__0(this);
}

CExoString CNWSkill::GetDescriptionText()
{
    return CNWSkill__GetDescriptionText(this);
}

CExoString CNWSkill::GetNameText()
{
    return CNWSkill__GetNameText(this);
}

void CNWSkill__CNWSkillCtor__0(CNWSkill* thisPtr)
{
    using FuncPtrType = void(__attribute__((cdecl)) *)(CNWSkill*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSkill__CNWSkillCtor__0);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    func(thisPtr);
}

void CNWSkill__CNWSkillDtor__0(CNWSkill* thisPtr)
{
    using FuncPtrType = void(__attribute__((cdecl)) *)(CNWSkill*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSkill__CNWSkillDtor__0);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    func(thisPtr, 2);
}

CExoString CNWSkill__GetDescriptionText(CNWSkill* thisPtr)
{
    using FuncPtrType = CExoString(__attribute__((cdecl)) *)(CNWSkill*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSkill__GetDescriptionText);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    return func(thisPtr);
}

CExoString CNWSkill__GetNameText(CNWSkill* thisPtr)
{
    using FuncPtrType = CExoString(__attribute__((cdecl)) *)(CNWSkill*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSkill__GetNameText);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    return func(thisPtr);
}

}

}