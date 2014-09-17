#pragma once
#include "./../BaseShape.h"
#include "CustomGeomShape.h"
#include "PPTShapeEnum.h"

using namespace NSOfficeDrawing;
using namespace NSPresentationEditor;

class CPPTShape : public CBaseShape
{
public:
	PPTShapes::ShapeType			m_eType;
	NSGuidesVML::CFormulasManager	m_oManager;

	NSCustomVML::CCustomVML m_oCustomVML;

	CString m_strPathLimoX;
	CString m_strPathLimoY;

	CAtlArray<CString> m_arStringTextRects;
	bool m_bIsShapeType;

	bool m_bIsFilled;
	bool m_bIsStroked;

public:
	CPPTShape() : CBaseShape(), m_arStringTextRects()
	{
		m_eType = PPTShapes::sptMin;

		m_arStringTextRects.Add(_T("0,0,21600,21600"));

		m_strPathLimoX = _T("");
		m_strPathLimoY = _T("");
		m_bIsShapeType = false;

		m_bIsFilled = true;
		m_bIsStroked = true;
	}

	~CPPTShape()
	{
	}
	virtual bool LoadFromXML(const CString& xml)
	{
		XmlUtils::CXmlNode oNodePict;
		if (oNodePict.FromXmlString(xml))
		{
			return LoadFromXML(oNodePict);
		}
		return false;
	}

	//virtual bool LoadFromXML(const CString& xml)
	//{
	//	XmlUtils::CXmlNode oNodePict;
	//	if (oNodePict.FromXmlString(xml))
	//	{
	//		if (_T("shape") == oNodePict.GetName())
	//		{
	//			CString id = oNodePict.GetAttributeOrValue(_T("type"));
	//			if (id != _T(""))
	//			{
	//				SetShapeType((PPTShapes::ShapeType)Strings::ToInteger(id));
	//			}
	//			else
	//			{
	//				XmlUtils::CXmlNode oNodeTemplate;
	//				if (oNodePict.GetNode(_T("template"), oNodeTemplate))
	//				{	
	//					CString strAdj = oNodeTemplate.GetAttributeOrValue(_T("adj"));
	//					LoadAdjustValuesList(strAdj);

	//					XmlUtils::CXmlNode oNodeGuides;
	//					if (oNodeTemplate.GetNode(_T("v:formulas"), oNodeGuides))
	//					{
	//						LoadGuidesList(oNodeGuides.GetXml());
	//					}

	//					CString strPath = oNodeTemplate.GetAttributeOrValue(_T("path"));
	//					LoadPathList(strPath);
	//				}
	//			}

	//			XmlUtils::CXmlNode oNodeGuides;
	//			if (oNodePict.GetNode(_T("path"), oNodeGuides))
	//			{
	//				CString strPath = oNodeGuides.GetAttributeOrValue(_T("val"));
	//				LoadPathList(strPath);
	//			}

	//			/*XmlUtils::CXmlNode oNodeShapeType;
	//			if (oNodePict.GetNode(_T("v:shapetype"), oNodeShapeType))
	//			{
	//				CString strAdj = oNodeShapeType.GetAttributeOrValue(_T("adj"));
	//				LoadAdjustValuesList(strAdj);

	//				XmlUtils::CXmlNode oNodeGuides;
	//				if (oNodeShapeType.GetNode(_T("v:formulas"), oNodeGuides))
	//				{
	//					LoadGuidesList(oNodeGuides.GetXml());
	//				}

	//				CString strPath = oNodeShapeType.GetAttributeOrValue(_T("path"));
	//				LoadAdjustValuesList(strPath);
	//			}
	//			else
	//			{
	//				XmlUtils::CXmlNode oNodeShape;
	//				if (oNodePict.GetNode(_T("v:shape"), oNodeShape))
	//				{
	//					CString strAdj = oNodeShape.GetAttributeOrValue(_T("adj"));
	//					LoadAdjustValuesList(strAdj);

	//					XmlUtils::CXmlNode oNodeGuides;
	//					if (oNodeShape.GetNode(_T("v:formulas"), oNodeGuides))
	//					{
	//						LoadGuidesList(oNodeGuides.GetXml());
	//					}

	//					CString strPath = oNodeShape.GetAttributeOrValue(_T("path"));
	//					LoadPathList(strPath);
	//				}
	//			}*/

	//			return true;
	//		}
	//	}

	//	return false;
	//}

	virtual bool LoadFromXML(XmlUtils::CXmlNode& oNodePict)
	{		
		CString id = oNodePict.GetAttributeOrValue(_T("type"));
		bool isPathList = false;
		if (id != _T(""))
		{
			SetShapeType((PPTShapes::ShapeType)XmlUtils::GetInteger(id));
		}
		else
		{
			XmlUtils::CXmlNode oNodeTemplate;
			if (oNodePict.GetNode(_T("template"), oNodeTemplate))
			{	
				CString strAdj = oNodeTemplate.GetAttributeOrValue(_T("adj"));
				LoadAdjustValuesList(strAdj);

				XmlUtils::CXmlNode oNodeGuides;
				if (oNodeTemplate.GetNode(_T("v:formulas"), oNodeGuides))
				{
					LoadGuidesList(oNodeGuides.GetXml());
				}

				CString strPath = oNodeTemplate.GetAttributeOrValue(_T("path"));
				if (strPath != _T(""))
				{
					LoadPathList(strPath);
					isPathList = true;
				}
			}
		}

		XmlUtils::CXmlNode oNodeGuides;
		if (oNodePict.GetNode(_T("path"), oNodeGuides))
		{
			CString strPath = oNodeGuides.GetAttributeOrValue(_T("val"));
			if (strPath != _T(""))
			{
				LoadPathList(strPath);
				isPathList = true;
			}
		}

		if (!isPathList)
			ReCalculate();
		return true;
	}

	virtual bool LoadFromXMLShapeType(XmlUtils::CXmlNode& oNodeShapeType)
	{		
		CString id = oNodeShapeType.GetAttributeOrValue(_T("o:spt"));
		bool bIsNeedRecalc = true;
		if (id != _T(""))
		{
			SetShapeType((PPTShapes::ShapeType)XmlUtils::GetInteger(id));
			//ReCalculate();

			m_eType = (PPTShapes::ShapeType)XmlUtils::GetInteger(id);
		}
		//else
		{
			CString strAdj = oNodeShapeType.GetAttributeOrValue(_T("adj"));
			if (strAdj != _T(""))
				LoadAdjustValuesList(strAdj);

			XmlUtils::CXmlNode oNodeGuides;
			if (oNodeShapeType.GetNode(_T("v:formulas"), oNodeGuides))
			{
				LoadGuidesList(oNodeGuides.GetXml());
			}

			XmlUtils::CXmlNode oNodePath;
			if (oNodeShapeType.GetNode(_T("v:path"), oNodePath))
			{
				CString strTextR = oNodePath.GetAttribute(_T("textboxrect"));
				if (strTextR != _T(""))
					LoadTextRect(strTextR);
			}

			XmlUtils::CXmlNode oNodeAHs;
			if (oNodeShapeType.GetNode(_T("v:handles"), oNodeAHs))
			{
				LoadAHList(oNodeAHs);
			}

			CString strPath = oNodeShapeType.GetAttributeOrValue(_T("path"));
			if (strPath != _T(""))
			{
				LoadPathList(strPath);
			}
		}

		CString strFilled = oNodeShapeType.GetAttribute(_T("filled"));
		CString strStroked = oNodeShapeType.GetAttribute(_T("stroked"));

		if (strFilled != _T(""))
		{
			if (strFilled == _T("false") || strFilled == _T("f"))
				m_bIsFilled = false;
			else
				m_bIsFilled = true;
		}
		
		if (strStroked != _T(""))
		{
			if (strStroked == _T("false") || strStroked == _T("f"))
				m_bIsStroked = false;
			else
				m_bIsStroked = true;
		}

		ReCalculate();
		return true;
	}
	
	virtual bool LoadAdjustValuesList(const CString& xml)
	{
		CString strXml = xml;
		if (0 == strXml.Find((TCHAR)','))
			strXml = (_T("defaultAdj") + strXml);
		LONG lLastIndex = strXml.GetLength() - 1;
		if (lLastIndex >= 0 && lLastIndex == strXml.ReverseFind((TCHAR)','))
		{
			strXml = strXml + _T("defaultAdj");
		}
		strXml.Replace(_T(",,"), _T(",defaultAdj,"));

		CSimpleArray<CString> arAdj;
		NSStringUtils::ParseString(_T(","), strXml, &arAdj);
		
		CSimpleArray<long> oOldAdj;
		int nOldLen = m_arAdjustments.GetSize();
		for (int ii = 0; ii < nOldLen; ++ii)
			oOldAdj.Add(m_arAdjustments[ii]);

		m_arAdjustments.RemoveAll();
		for (int nIndex = 0; nIndex < arAdj.GetSize(); ++nIndex)
		{
			if (_T("defaultAdj") == arAdj[nIndex])
			{
				if (nIndex >= nOldLen)
					m_arAdjustments.Add(0);
				else
					m_arAdjustments.Add(oOldAdj[nIndex]);
			}
			else
			{
				m_arAdjustments.Add((LONG)XmlUtils::GetInteger(arAdj[nIndex]));
			}
		}

		int newLen = m_arAdjustments.GetSize();
		for (int i = newLen; i < nOldLen; ++i)
			m_arAdjustments.Add(oOldAdj[i]);
		return true;
	}

	virtual bool LoadGuidesList(const CString& xml)
	{
		XmlUtils::CXmlNode oNodeGuides;
		if (oNodeGuides.FromXmlString(xml) && (_T("v:formulas") == oNodeGuides.GetName()))
		{
			m_oManager.RemoveAll();
			
			XmlUtils::CXmlNodes oList;
			if (oNodeGuides.GetNodes(_T("v:f"), oList))
			{
				int lCount = oList.GetCount();
				for (int nIndex = 0; nIndex < lCount; ++nIndex)
				{
					XmlUtils::CXmlNode oNodeFormula;
					oList.GetAt(nIndex, oNodeFormula);

					m_oManager.AddFormula(oNodeFormula.GetAttributeOrValue(_T("eqn")));
				}
			}

			m_oManager.Clear(&m_arAdjustments);
			m_oManager.CalculateResults();
			return true;
		}

		return false;
	}

	virtual void AddGuide(const CString& strGuide)
	{
		m_oManager.AddFormula(strGuide);
	}

	virtual bool LoadAdjustHandlesList(const CString& xml)
	{
		return true;
	}

	void LoadAHList(XmlUtils::CXmlNode& oNode)
	{
		m_arHandles.RemoveAll();

		XmlUtils::CXmlNodes oNodes;
		if (oNode.GetNodes(_T("v:h"), oNodes))
		{
			int nCount = oNodes.GetCount();
			for (int i = 0; i < nCount; ++i)
			{
				XmlUtils::CXmlNode oNodeH;
				oNodes.GetAt(i, oNodeH);

				CHandle_ oH;
				oH.polar = oNodeH.GetAttribute(_T("polar"));
				oH.position = oNodeH.GetAttribute(_T("position"));
				oH.radiusrange = oNodeH.GetAttribute(_T("radiusrange"));
				oH.switchHandle = oNodeH.GetAttribute(_T("switch"));
				oH.xrange = oNodeH.GetAttribute(_T("xrange"));
				oH.yrange = oNodeH.GetAttribute(_T("yrange"));

				m_arHandles.Add(oH);
			}
		}
	}

	virtual bool LoadConnectorsList(const CString& xml)
	{
		return true;
	}

	virtual bool LoadTextRect(const CString& xml)
	{
		CSimpleArray<CString> oArray;
		NSStringUtils::ParseString(_T(";"), xml, &oArray);

		LONG lCount = (LONG)oArray.GetSize();

		if (lCount <= 0)
			return true;

		m_arStringTextRects.RemoveAll();
		for (LONG i = 0; i < lCount; ++i)
		{
			m_arStringTextRects.Add(oArray[i]);
		}
		
		return true;
	}

	virtual bool LoadPathList(const CString& xml)
	{
		m_strPath = xml;
		if (!m_bIsShapeType)
			m_oPath.FromXML(xml, m_oManager);
		return true;
	}

	virtual bool SetAdjustment(long index, long value)
	{
		return (TRUE == m_arAdjustments.SetAtIndex(index, value));
	}

	virtual CString ToXML(CGeomShapeInfo& GeomInfo, CMetricInfo& MetricInfo, double StartTime, double EndTime, CBrush& Brush, CPen& Pen)
	{
		if ((_T("") != m_strPathLimoX) || _T("") != m_strPathLimoY)
		{
			m_strPath = (GeomInfo.m_dWidth >= GeomInfo.m_dHeight) ? m_strPathLimoX : m_strPathLimoY;
			ReCalculate();
			m_oPath.SetCoordsize(21600, 21600);
		}
		
		return m_oPath.ToXml(GeomInfo, StartTime, EndTime, Pen, Brush, MetricInfo, NSBaseShape::ppt);
	}

	virtual void ReCalculate()
	{
		m_oManager.Clear(&m_arAdjustments);
		
		if (!m_bIsShapeType)
			m_oManager.CalculateResults();

		if (_T("") == m_strPath)
			return;

		LoadPathList(m_strPath);
	}

	static CPPTShape* CreateByType(PPTShapes::ShapeType type);
	virtual const ClassType GetClassType()const
	{
		return NSBaseShape::ppt;
	}

	virtual bool SetProperties(CBaseShape* Shape)
	{
		if(Shape == NULL)
			return false;

		if(Shape->GetClassType() != NSBaseShape::ppt)
			return false;

		m_oManager = ((CPPTShape*)Shape)->m_oManager;

		m_strPathLimoX = ((CPPTShape*)Shape)->m_strPathLimoX;
		m_strPathLimoY = ((CPPTShape*)Shape)->m_strPathLimoY;

		m_arStringTextRects.Copy(((CPPTShape*)Shape)->m_arStringTextRects);
		
		return CBaseShape::SetProperties(Shape);
	}

	virtual bool SetToDublicate(CBaseShape* Shape)
	{
		if(Shape == NULL)
			return false;

		if(Shape->GetClassType() != NSBaseShape::ppt)
			return false;

		((CPPTShape*)Shape)->m_oManager = m_oManager;

		((CPPTShape*)Shape)->m_bIsFilled = m_bIsFilled;
		((CPPTShape*)Shape)->m_bIsStroked = m_bIsStroked;

		((CPPTShape*)Shape)->m_strPathLimoX = m_strPathLimoX;
		((CPPTShape*)Shape)->m_strPathLimoY = m_strPathLimoY;

		((CPPTShape*)Shape)->m_arStringTextRects.Copy(m_arStringTextRects);

		return CBaseShape::SetToDublicate(Shape);
	}

	bool SetShapeType(PPTShapes::ShapeType type)
	{
		CPPTShape* l_pShape = CreateByType(type);
		if(l_pShape != NULL)
		{
			m_eType = type;

			SetProperties(l_pShape);
			delete l_pShape;
			return true;
		}

		m_eType = PPTShapes::sptCustom;
		return false;
	}

	
	void CalcTextRectOffsets(double& dPercentLeft, double& dPercentTop, double& dPercentRight, double& dPercentBottom, LONG nIndex = 0)
	{
		dPercentLeft	= 0;
		dPercentTop		= 0;
		dPercentRight	= 0;
		dPercentBottom	= 0;

		if ((nIndex < 0) || (nIndex >= (LONG)m_arStringTextRects.GetCount()))
			return;

		if (m_oPath.m_arParts.GetSize() == 0)
			return;

		LONG lWidth		= m_oPath.m_arParts[0].width;
		LONG lHeight	= m_oPath.m_arParts[0].height;

		CSimpleArray<CString> oArray;
		NSStringUtils::ParseString(_T(","), m_arStringTextRects[nIndex], &oArray);

		if (4 != oArray.GetSize())
			return;
		
		LONG lLeft		= 0;
		LONG lTop		= 0;
		LONG lRight		= 0;
		LONG lBottom	= 0;

		bool bOk = true;

		bOk = (bOk && GetPos(oArray[0], lLeft));
		bOk = (bOk && GetPos(oArray[1], lTop));
		bOk = (bOk && GetPos(oArray[2], lRight));
		bOk = (bOk && GetPos(oArray[3], lBottom));

		if (!bOk)
			return;

		dPercentLeft	= (double)lLeft		/ lWidth;
		dPercentTop		= (double)lTop		/ lHeight;

		dPercentRight	= (double)(lWidth - lRight)		/ lWidth;
		dPercentBottom	= (double)(lHeight - lBottom)	/ lHeight;
	}

protected:

	bool GetPos(CString str, LONG& lValue)
	{
		if (str.GetLength() == 0)
			return false;

		TCHAR mem = str.GetAt(0);

		bool bFormula = false;
		if ('@' == mem)
		{
			bFormula = true;
			str.Delete(0);
		}
		
		if (!NSStringUtils::IsNumber(str))
			return false;

		lValue = 0;
		lValue = _ttoi(str);

		if (bFormula)
		{
			if (lValue >= 0 || lValue < m_oManager.m_arResults.GetSize())
			{
				lValue = m_oManager.m_arResults[lValue];
				return true;
			}
			return false;
		}

		return true;
	}
};