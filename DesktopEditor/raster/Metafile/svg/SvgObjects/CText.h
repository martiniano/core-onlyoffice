#ifndef CTEXT_H
#define CTEXT_H

#include "../../../graphics/pro/Fonts.h"

#include "CContainer.h"
#include "CObjectBase.h"
#include "../SvgTypes.h"

namespace SVG
{
	class CText;

	class CTSpan : public CSvgGraphicsObject, public CContainer<CSvgGraphicsObject>
	{
	public:
		CTSpan(XmlUtils::CXmlNode& oNode, CTSpan* pParent = NULL, NSFonts::IFontManager* pFontManager = NULL);
		virtual ~CTSpan();

		static CTSpan* Create(XmlUtils::CXmlNode& oNode, CSvgGraphicsObject* pParent = NULL, NSFonts::IFontManager* pFontManager = NULL);

		void SetData(const std::map<std::wstring, std::wstring>& mAttributes, unsigned short ushLevel, bool bHardMode = false) override;

		bool Draw(IRenderer* pRenderer, const CDefs *pDefs, bool bIsClip = false) const override;

		bool AddObject(CSvgGraphicsObject* pObject) override;

		CTSpan* Copy() const override;
	private:
		void ApplyStyle(IRenderer* pRenderer, const CDefs *pDefs, int& nTypePath, Aggplus::CMatrix& oOldMatrix) const override;
		void ApplyFont(IRenderer* pRenderer, double& dX, double& dY) const;

		TBounds GetBounds() const override;

		double GetWidth() const;

		void Normalize();

		NSFonts::IFontManager* m_pFontManager;

		SvgDigit     m_oX;
		SvgDigit     m_oY;

		std::wstring m_wsText;

		SvgFont m_oFont;
		SvgText m_oText;

		friend class CText;
	};

	class CText : public CTSpan
	{
	public:
		CText(XmlUtils::CXmlNode& oNode, CSvgGraphicsObject* pParent = NULL, NSFonts::IFontManager* pFontManager = NULL);

		static CText* Create(XmlUtils::CXmlNode& oNode, CSvgGraphicsObject* pParent = NULL, NSFonts::IFontManager* pFontManager = NULL);

		bool Draw(IRenderer* pRenderer, const CDefs *pDefs, bool bIsClip = false) const override;

		bool AddObject(CSvgGraphicsObject* pObject) override;
	};
}

#endif // CTEXT_H
