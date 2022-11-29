﻿/*
 * (c) Copyright Ascensio System SIA 2010-2019
 *
 * This program is a free software product. You can redistribute it and/or
 * modify it under the terms of the GNU Affero General Public License (AGPL)
 * version 3 as published by the Free Software Foundation. In accordance with
 * Section 7(a) of the GNU AGPL its Section 15 shall be amended to the effect
 * that Ascensio System SIA expressly excludes the warranty of non-infringement
 * of any third-party rights.
 *
 * This program is distributed WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR  PURPOSE. For
 * details, see the GNU AGPL at: http://www.gnu.org/licenses/agpl-3.0.html
 *
 * You can contact Ascensio System SIA at 20A-12 Ernesta Birznieka-Upisha
 * street, Riga, Latvia, EU, LV-1050.
 *
 * The  interactive user interfaces in modified source and object code versions
 * of the Program must display Appropriate Legal Notices, as required under
 * Section 5 of the GNU AGPL version 3.
 *
 * Pursuant to Section 7(b) of the License you must retain the original Product
 * logo when distributing the program. Pursuant to Section 7(e) we decline to
 * grant you any rights under trademark law for use of our trademarks.
 *
 * All the Product's GUI elements, including illustrations and icon sets, as
 * well as technical writing content are licensed under the terms of the
 * Creative Commons Attribution-ShareAlike 4.0 International. See the License
 * terms at http://creativecommons.org/licenses/by-sa/4.0/legalcode
 *
 */
#pragma once

#include "../Drawing/Document.h"

#include "ImageManager.h"

namespace PPT_FORMAT
{
    std::wstring GetPhType(const int & lType);

	class CShapeWriter
	{
	private:
		PPT_FORMAT::CStringWriter		m_oWriterPath;
		PPT_FORMAT::CStringWriter		m_oWriterVML;
		PPT_FORMAT::CStringWriter		m_oWriter;

		PPT_FORMAT::CElementPtr		m_pElement;
		
		PPT_FORMAT::CRelsGenerator*	m_pRels;

		PPT_FORMAT::CTheme*			m_pTheme;

        LONG									m_lNextShapeID;

		bool									m_bWordArt;
		bool									m_bTextBox;
		
		std::wstring							m_xmlGeomAlternative;
		std::wstring							m_xmlTxBodyAlternative;
		std::wstring							m_xmlAlternative;
	public:	

		CShapeWriter();
		~CShapeWriter()
		{
            RELEASEOBJECT(m_pSimpleGraphicsConverter);
		}

		friend class CPPTXWriter;

        void InitNextId();

		bool SetElement(CElementPtr pElem);
//--------------------------------------------------------------------
            std::wstring	ConvertTable	();
			std::wstring	ConvertGroup	();
			std::wstring	ConvertShape	();
            std::wstring	ConvertImage	();
            std::wstring	ConvertLine		(CPen		& pen);
            std::wstring	ConvertShadow	(CShadow	& shadow);
            std::wstring	ConvertBrush	(CBrush		& brush);
			std::wstring	ConvertLineEnd	(unsigned char cap, unsigned char length, unsigned char width);
    static	std::wstring	ConvertColor	(CColor		& color, long alpha = 255);

	void	ParseXmlAlternative(const std::wstring & xml);
// тип рендерера-----------------------------------------------------------------------------
    virtual HRESULT get_Type(LONG* lType)	;
//-------- Функции для работы со страницей --------------------------------------------------
	virtual HRESULT NewPage()				;
	virtual HRESULT get_Height(double* dHeight);
	virtual HRESULT put_Height(const double& dHeight);
	virtual HRESULT get_Width(double* dWidth);
	virtual HRESULT put_Width(const double& dWidth)	;
	virtual HRESULT get_DpiX(double* dDpiX)	;
	virtual HRESULT get_DpiY(double* dDpiY)	;

// pen --------------------------------------------------------------------------------------
    virtual HRESULT get_PenColor(LONG* lColor)		;
    virtual HRESULT put_PenColor(const LONG& lColor);
    virtual HRESULT get_PenAlpha(LONG* lAlpha)		;
    virtual HRESULT put_PenAlpha(const LONG& lAlpha);
	virtual HRESULT get_PenSize(double* dSize)		;
	virtual HRESULT put_PenSize(const double& dSize);
	virtual HRESULT get_PenDashStyle(BYTE* val)		;
	virtual HRESULT put_PenDashStyle(const BYTE& val);
	virtual HRESULT get_PenLineStartCap(BYTE* val)	;
	virtual HRESULT put_PenLineStartCap(const BYTE& val)	;
	virtual HRESULT get_PenLineEndCap(BYTE* val)	;
	virtual HRESULT put_PenLineEndCap(const BYTE& val);
	virtual HRESULT get_PenLineJoin(BYTE* val)		;
	virtual HRESULT put_PenLineJoin(const BYTE& val);
	virtual HRESULT get_PenDashOffset(double* dOffset);
	virtual HRESULT put_PenDashOffset(const double& dOffset);
    virtual HRESULT get_PenAlign(LONG* lAlign)		;
    virtual HRESULT put_PenAlign(const LONG& lAlign);
	virtual HRESULT get_PenMiterLimit(double* dOffset);
	virtual HRESULT put_PenMiterLimit(const double& dOffset);
    virtual HRESULT PenDashPattern(double* pPattern, LONG lCount);

// brush ------------------------------------------------------------------------------------
    virtual HRESULT get_BrushType(LONG* lType)				;
    virtual HRESULT put_BrushType(const LONG& lType)		;
    virtual HRESULT get_BrushColor1(LONG* lColor)			;
    virtual HRESULT put_BrushColor1(const LONG& lColor)		;
    virtual HRESULT get_BrushAlpha1(LONG* lAlpha)			;
    virtual HRESULT put_BrushAlpha1(const LONG& lAlpha)		;
    virtual HRESULT get_BrushColor2(LONG* lColor)			;
    virtual HRESULT put_BrushColor2(const LONG& lColor)		;
    virtual HRESULT get_BrushAlpha2(LONG* lAlpha)			;
    virtual HRESULT put_BrushAlpha2(const LONG& lAlpha)		;
	virtual HRESULT get_BrushTexturePath(std::wstring* bsPath); 
	virtual HRESULT put_BrushTexturePath(const std::wstring& bsPath); 
    virtual HRESULT get_BrushTextureMode(LONG* lMode)		;
    virtual HRESULT put_BrushTextureMode(const LONG& lMode)	;
    virtual HRESULT get_BrushTextureAlpha(LONG* lTxAlpha)	;
    virtual HRESULT put_BrushTextureAlpha(const LONG& lTxAlpha);
	virtual HRESULT get_BrushLinearAngle(double* dAngle)	;
	virtual HRESULT put_BrushLinearAngle(const double& dAngle);
	virtual HRESULT BrushRect(const INT& val, const double& left, const double& top, const double& width, const double& height);
	virtual HRESULT BrushBounds(const double& left, const double& top, const double& width, const double& height);

    virtual HRESULT put_BrushGradientColors(LONG* lColors, double* pPositions, LONG nCount);

// font -------------------------------------------------------------------------------------
	virtual HRESULT get_FontName(std::wstring* bsName);
	virtual HRESULT put_FontName(const std::wstring& bsName);
	virtual HRESULT get_FontPath(std::wstring* bsName);
	virtual HRESULT put_FontPath(const std::wstring& bsName);
	virtual HRESULT get_FontSize(double* dSize)		;
	virtual HRESULT put_FontSize(const double& dSize);
    virtual HRESULT get_FontStyle(LONG* lStyle)		;
    virtual HRESULT put_FontStyle(const LONG& lStyle);
	virtual HRESULT get_FontStringGID(INT* bGID)	;
	virtual HRESULT put_FontStringGID(const INT& bGID);
	virtual HRESULT get_FontCharSpace(double* dSpace);
	virtual HRESULT put_FontCharSpace(const double& dSpace)	;
	virtual HRESULT get_FontFaceIndex(int* lFaceIndex);
	virtual HRESULT put_FontFaceIndex(const int& lFaceIndex);

//-------- Функции для вывода текста --------------------------------------------------------
    virtual HRESULT CommandDrawTextCHAR(const LONG& c, const double& x, const double& y, const double& w, const double& h) ;
    virtual HRESULT CommandDrawText(const std::wstring& bsText, const double& x, const double& y, const double& w, const double& h) ;

    virtual HRESULT CommandDrawTextExCHAR(const LONG& c, const LONG& gid, const double& x, const double& y, const double& w, const double& h) ;
    virtual HRESULT CommandDrawTextEx(const std::wstring& bsUnicodeText, const unsigned int* pGids, const unsigned int nGidsCount, const double& x, const double& y, const double& w, const double& h);

//-------- Маркеры для команд ---------------------------------------------------------------
	virtual HRESULT BeginCommand(const _UINT32& lType);
	virtual HRESULT EndCommand(const _UINT32& lType)	;

//-------- Функции для работы с Graphics Path -----------------------------------------------
	virtual HRESULT PathCommandMoveTo(const double& x, const double& y);
	virtual HRESULT PathCommandLineTo(const double& x, const double& y);
	virtual HRESULT PathCommandLinesTo(double* points, const int& count)	;
	virtual HRESULT PathCommandCurveTo(const double& x1, const double& y1, const double& x2, const double& y2, const double& x3, const double& y3)	;
	virtual HRESULT PathCommandCurvesTo(double* points, const int& count)	;
	virtual HRESULT PathCommandArcTo(const double& x, const double& y, const double& w, const double& h, const double& startAngle, const double& sweepAngle);
	virtual HRESULT PathCommandClose()								;
	virtual HRESULT PathCommandEnd()								;
    virtual HRESULT DrawPath(const LONG& nType)						;
	virtual HRESULT PathCommandStart()								;
	virtual HRESULT PathCommandGetCurrentPoint(double* x, double* y);

    virtual HRESULT PathCommandTextCHAR(const LONG& c, const double& x, const double& y, const double& w, const double& h) ;
    virtual HRESULT PathCommandText(const std::wstring& bsText, const double& x, const double& y, const double& w, const double& h);

    virtual HRESULT PathCommandTextExCHAR(const LONG& c, const LONG& gid, const double& x, const double& y, const double& w, const double& h);
    virtual HRESULT PathCommandTextEx(const std::wstring& sText, const unsigned int* pGids, const unsigned int nGidsCount, const double& x, const double& y, const double& w, const double& h) ;

//-------- Функции для вывода изображений ---------------------------------------------------
	virtual HRESULT DrawImage(IGrObject* pImage, const double& x, const double& y, const double& w, const double& h)	;
	virtual HRESULT DrawImageFromFile(const std::wstring&, const double& x, const double& y, const double& w, const double& h, const BYTE& lAlpha = 255);	

// transform --------------------------------------------------------------------------------
	virtual HRESULT GetCommandParams(double* dAngle, double* dLeft, double* dTop, double* dWidth, double* dHeight, _UINT32* lFlags);
	virtual HRESULT SetCommandParams(double dAngle, double dLeft, double dTop, double dWidth, double dHeight, _UINT32 lFlags);
	virtual HRESULT SetTransform(const double& m1, const double& m2, const double& m3, const double& m4, const double& m5, const double& m6);
	virtual HRESULT GetTransform(double *pdA, double *pdB, double *pdC, double *pdD, double *pdE, double *pdF);
	virtual HRESULT ResetTransform();

// -----------------------------------------------------------------------------------------
    virtual HRESULT get_ClipMode(LONG* plMode);
    virtual HRESULT put_ClipMode(const LONG& lMode)	;

// additiaonal params ----------------------------------------------------------------------
    virtual HRESULT CommandLong(const LONG& lType, const LONG& lCommand);
    virtual HRESULT CommandDouble(const LONG& lType, const double& dCommand)	;
    virtual HRESULT CommandString(const LONG& lType, const std::wstring& sCommand);
//////////////////////////////////////////////////////////////////////////////////////////////////
        // shadow -----------------------------------------------------------------------------------
        HRESULT SetShadow (std::wstring bsXML);
        HRESULT get_ShadowDistanceX (double* val);
        HRESULT put_ShadowDistanceX (double val);
        HRESULT get_ShadowDistanceY (double* val);
        HRESULT put_ShadowDistanceY (double val);
        HRESULT get_ShadowBlurSize (double* val);
        HRESULT put_ShadowBlurSize (double val);
        HRESULT get_ShadowColor (LONG* val);
        HRESULT put_ShadowColor (LONG val);
        HRESULT get_ShadowAlpha (LONG* val);
        HRESULT put_ShadowAlpha (LONG val);
        HRESULT get_ShadowVisible (bool* val);
        HRESULT put_ShadowVisible (bool val);
        // edge -------------------------------------------------------------------------------------
        HRESULT SetEdgeText (std::wstring bsXML);
        HRESULT get_EdgeVisible (LONG* val);
        HRESULT put_EdgeVisible (LONG val);
        HRESULT get_EdgeColor (LONG* val);
        HRESULT put_EdgeColor (LONG val);
        HRESULT get_EdgeAlpha (LONG* val);
        HRESULT put_EdgeAlpha (LONG val);
        HRESULT get_EdgeDist (double* val);
        HRESULT put_EdgeDist (double val);


        HRESULT SetFont(std::wstring bsXML);
        HRESULT SetPen(std::wstring bsXML);
        HRESULT SetBrush(std::wstring bsXML);
    public:
        void SetRelsGenerator(CRelsGenerator* pGenerator);

    protected:
        void CalculateFullTransform();
        void _SetFont();


	public:

		Aggplus::CGraphicsPathSimpleConverter*		m_pSimpleGraphicsConverter;		// конвертер сложных гафических путей в простые
        NSFonts::IFontManager*						m_pFontManager;					// менеджер шрифтов

		Aggplus::CMatrix							m_oBaseTransform;	// матрица перерасчета координатных осей (здесь: миллиметры -> пикселы)
		Aggplus::CMatrix							m_oTransform;		// текущая матрица преобразований рендерера
		Aggplus::CMatrix							m_oFullTransform;	// полная матрица преобразований (m_oBaseTransform * m_oTransform)

		double							m_dTransformAngle;

        LONG							m_lCurrentCommandType;	// текущая команда

		double							m_dDpiX;				
		double							m_dDpiY;

        LONG							m_lClipMode;

		CPen							m_oPen;				// настройки всей графики (скопирован ашник из AVSGraphics)
		CBrush							m_oBrush;
		CFont							m_oFont;
		CShadow							m_oShadow;
		CEdgeText						m_oEdge;

		CFont							m_oInstalledFont;

	public:
        void MoveTo(const double& dX, const double& dY);
        void LineTo(const double& dX, const double& dY);
        void CurveTo(const double& x1, const double& y1, const double& x2, const double& y2, const double& x3, const double& y3);
        void Start();
        void End();
        void Close();

        void WriteGroupInfo();
        void WriteTableInfo();
        void WriteHyperlink(const std::vector<CInteractiveInfo> &actions);
        std::vector<CInteractiveInfo> getActionsByNum(const int num);
        std::wstring ConvertTableCells();
        std::wstring ConvertTableRow();
        std::wstring ConvertTableCell();
		void WriteShapeInfo();
		void WriteImageInfo();
        void WriteTextInfo(CTextCFRun *pLastCF = nullptr);
        static std::wstring WriteBullets(CTextPFRun* pPF, CRelsGenerator *pRels);
		void Write3dShape();
        std::wstring getOWriterStr() const;
    };
}
