#include "TimeScaleBehaviorContainer.h"


void CRecordTimeScaleBehaviorContainer::ReadFromStream(SRecordHeader &oHeader, POLE::Stream *pStream)
{
    m_oHeader			=	oHeader;

    SRecordHeader ReadHeader;

    if ( ReadHeader.ReadFromStream(pStream) )
        m_oScaleBehaviorAtom.ReadFromStream ( ReadHeader, pStream );

    if ( ReadHeader.ReadFromStream(pStream) )
        m_oBehavior.ReadFromStream ( ReadHeader, pStream );
}
