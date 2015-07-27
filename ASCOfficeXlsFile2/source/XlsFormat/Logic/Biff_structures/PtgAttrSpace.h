#pragma once

#include "Ptg.h"
#include <Logic/Biff_structures/BitMarkedStructs.h>

namespace XLS
{;

class CFRecord;

class PtgAttrSpace : public Ptg
{
	BASE_STRUCTURE_DEFINE_CLASS_NAME(PtgAttrSpace)
public:
	BiffStructurePtr clone();

	virtual void loadFields(CFRecord& record);
	virtual void storeFields(CFRecord& record);

	virtual void assemble(AssemblerStack& ptg_stack, PtgQueue& extra_data);

};

} // namespace XLS

