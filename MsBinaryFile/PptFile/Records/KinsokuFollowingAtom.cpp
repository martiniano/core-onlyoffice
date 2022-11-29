#include "KinsokuFollowingAtom.h"


void CRecordKinsokuFollowingAtom::ReadFromStream(SRecordHeader &oHeader, POLE::Stream *pStream)
{
    m_oHeader = oHeader;

    m_arKinsokuFollowing = StreamUtils::ReadStringW(pStream, m_oHeader.RecLen - sizeof (oHeader));
}
