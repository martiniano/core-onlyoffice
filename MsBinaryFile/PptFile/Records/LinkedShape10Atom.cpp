#include "LinkedShape10Atom.h"


void CRecordLinkedShape10Atom::ReadFromStream(SRecordHeader &oHeader, POLE::Stream *pStream)
{
    m_oHeader = oHeader;

    m_nShapeIdRef           = StreamUtils::ReadLONG(pStream);
    m_nLinkedShapeIdRef     = StreamUtils::ReadLONG(pStream);
}
