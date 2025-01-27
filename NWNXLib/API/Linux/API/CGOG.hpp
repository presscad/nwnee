#pragma once

#include <cstdint>

#include "CExoString.hpp"

namespace NWNXLib {

namespace API {

// Forward class declarations (defined in the source file)
struct CExoArrayListTemplatedCGOGFriendRichPresencePtr;
struct CGOGInternal;

struct CGOG
{
    CGOGInternal* m_internal;

    // The below are auto generated stubs.
    CGOG(const CGOG&) = default;
    CGOG& operator=(const CGOG&) = default;

    CGOG();
    ~CGOG();
    void ClearPresenceData();
    CExoArrayListTemplatedCGOGFriendRichPresencePtr& GetFriendList();
    CExoString GetLanguage();
    int32_t IsLoggedOn();
    void RequestFriendsUpdate();
    void SetConnectedToModuleName(const CExoString&);
    void SetConnectedToServerAddress(const CExoString&, int32_t);
    void SetConnectedToServerName(const CExoString&);
    const char* ShowInviteOverlay();
    void Update(float);
};

void CGOG__CGOGCtor(CGOG* thisPtr);
void CGOG__CGOGDtor(CGOG* thisPtr);
void CGOG__ClearPresenceData(CGOG* thisPtr);
CExoArrayListTemplatedCGOGFriendRichPresencePtr& CGOG__GetFriendList(CGOG* thisPtr);
CExoString CGOG__GetLanguage(CGOG* thisPtr);
int32_t CGOG__IsLoggedOn(CGOG* thisPtr);
void CGOG__RequestFriendsUpdate(CGOG* thisPtr);
void CGOG__SetConnectedToModuleName(CGOG* thisPtr, const CExoString&);
void CGOG__SetConnectedToServerAddress(CGOG* thisPtr, const CExoString&, int32_t);
void CGOG__SetConnectedToServerName(CGOG* thisPtr, const CExoString&);
const char* CGOG__ShowInviteOverlay(CGOG* thisPtr);
void CGOG__Update(CGOG* thisPtr, float);

}

}
