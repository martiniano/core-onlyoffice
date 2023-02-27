﻿/*
 * (c) Copyright Ascensio System SIA 2010-2023
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

#include <map>
#include <string>

namespace XLS
{

class CFRecordType
{
private:
	CFRecordType();
	static CFRecordType& getInst();
public:
	typedef unsigned short TypeId;
	typedef std::string TypeString;

	static const TypeId ANY_TYPE = 0xffff;

	static const TypeId getIdByString(const TypeString& str);
	static const TypeString& getStringById(const TypeId id);
	// Whether the specified type is one of Continue records
	static const bool isContinue(const TypeId type);

private:
	std::map<TypeId, TypeString> all_types_id;
	std::map<TypeString, TypeId> all_types_string;
};



typedef enum CF_RECORD_TYPE
{
	rt_NONE						= 0x0000,
	rt_Formula					= 0x0006,
	rt_BOF_BIFF2				= 0x0009,
	rt_EOF						= 0x000a,
	rt_CalcCount				= 0x000c,
	rt_CalcMode					= 0x000d,
	rt_CalcPrecision			= 0x000e,
	rt_CalcRefMode				= 0x000f,
	rt_CalcDelta				= 0x0010,
	rt_CalcIter					= 0x0011,
	rt_Protect					= 0x0012,
	rt_Password					= 0x0013,
	rt_Header					= 0x0014,
	rt_Footer					= 0x0015,
	rt_ExternSheet				= 0x0017,
	rt_WinProtect				= 0x0019,
	rt_VerticalPageBreaks		= 0x001a,
	rt_HorizontalPageBreaks		= 0x001b,
	rt_Note						= 0x001c,
	rt_Selection				= 0x001d,
	rt_BuiltInFmtCount			= 0x001f,
	rt_ColumnDefault			= 0x0020,
	rt_Date1904					= 0x0022,
	rt_ExternName				= 0x0023,
	rt_ColWidth					= 0x0024,
	rt_LeftMargin				= 0x0026,
	rt_RightMargin				= 0x0027,
	rt_TopMargin				= 0x0028,
	rt_BottomMargin				= 0x0029,
	rt_PrintRowCol				= 0x002a,
	rt_PrintGrid				= 0x002b,
	rt_FilePass					= 0x002f,
	rt_Font						= 0x0031,
	rt_Font2					= 0x0032,
	rt_Font_BIFF34				= 0x0231,
	rt_PrintSize				= 0x0033,
	rt_Continue					= 0x003c,
	rt_Window1					= 0x003d,
	rt_Backup					= 0x0040,
	rt_Pane						= 0x0041,
	rt_CodePage					= 0x0042,
	rt_FontColor				= 0x0045,
	rt_Pls						= 0x004d,
	rt_DCon						= 0x0050,
	rt_DConRef					= 0x0051,
	rt_DConName					= 0x0052,
	rt_DefColWidth				= 0x0055,
	rt_XCT						= 0x0059,
	rt_CRN						= 0x005a,
	rt_FileSharing				= 0x005b,
	rt_WriteAccess				= 0x005c,
	rt_Obj						= 0x005d,
	rt_Uncalced					= 0x005e,
	rt_CalcSaveRecalc			= 0x005f,
	rt_Template					= 0x0060,
	rt_Intl						= 0x0061,
	rt_ObjProtect				= 0x0063,
	rt_ColInfo					= 0x007d,
	rt_IMDATA					= 0x007f,
	rt_Guts						= 0x0080,
	rt_WsBool					= 0x0081,
	rt_GridSet					= 0x0082,
	rt_HCenter					= 0x0083,
	rt_VCenter					= 0x0084,
	rt_BoundSheet8				= 0x0085,
	rt_WriteProtect				= 0x0086,
	rt_Country					= 0x008c,
	rt_HideObj					= 0x008d,
	rt_Sort						= 0x0090,
	rt_Palette					= 0x0092,
	rt_Sync						= 0x0097,
	rt_LPr						= 0x0098,
	rt_DxGCol					= 0x0099,
	rt_FnGroupName				= 0x009a,
	rt_FilterMode				= 0x009b,
	rt_BuiltInFnGroupCount		= 0x009c,
	rt_AutoFilterInfo			= 0x009d,
	rt_AutoFilter				= 0x009e,
	rt_Scl						= 0x00a0,
	rt_Setup					= 0x00a1,
	rt_ScenMan					= 0x00ae,
	rt_SCENARIO					= 0x00af,
	rt_SxView					= 0x00b0,
	rt_Sxvd						= 0x00b1,
	rt_SXVI						= 0x00b2,
	rt_SxIvd					= 0x00b4,
	rt_SXLI						= 0x00b5,
	rt_SXPI						= 0x00b6,
	rt_DocRoute					= 0x00b8,
	rt_RecipName				= 0x00b9,
	rt_MulRk					= 0x00bd,
	rt_MulBlank					= 0x00be,
	rt_Mms						= 0x00c1,
	rt_SXDI						= 0x00c5,
	rt_SXDB						= 0x00c6,
	rt_SXFDB					= 0x00c7,
	rt_SXDBB					= 0x00c8,
	rt_SXNum					= 0x00c9,
	rt_SxBool					= 0x00ca,
	rt_SxErr					= 0x00cb,
	rt_SXInt					= 0x00cc,
	rt_SXString					= 0x00cd,
	rt_SXDtr					= 0x00ce,
	rt_SxNil					= 0x00cf,
	rt_SXTbl					= 0x00d0,
	rt_SXTBRGIITM				= 0x00d1,
	rt_SxTbpg					= 0x00d2,
	rt_ObProj					= 0x00d3,
	rt_SXStreamID				= 0x00d5,
	rt_DBCell					= 0x00d7,
	rt_SXRng					= 0x00d8,
	rt_SxIsxoper				= 0x00d9,
	rt_BookBool					= 0x00da,
	rt_DbOrParamQry				= 0x00dc,
	rt_ScenarioProtect			= 0x00dd,
	rt_OleObjectSize			= 0x00de,
	rt_XF						= 0x00e0,
	rt_InterfaceHdr				= 0x00e1,
	rt_InterfaceEnd				= 0x00e2,
	rt_SXVS						= 0x00e3,
	rt_MergeCells				= 0x00e5,
	rt_BkHim					= 0x00e9,
	rt_MsoDrawingGroup			= 0x00eb,
	rt_MsoDrawing				= 0x00ec,
	rt_MsoDrawingSelection		= 0x00ed,
	rt_PhoneticInfo				= 0x00ef,
	rt_SxRule					= 0x00f0,
	rt_SXEx						= 0x00f1,
	rt_SxFilt					= 0x00f2,
	rt_SxDXF					= 0x00f4,
	rt_SxItm					= 0x00f5,
	rt_SxName					= 0x00f6,
	rt_SxSelect					= 0x00f7,
	rt_SXPair					= 0x00f8,
	rt_SxFmla					= 0x00f9,
	rt_SxFormat					= 0x00fb,
	rt_SST						= 0x00fc,
	rt_LabelSst					= 0x00fd,
	rt_ExtSST					= 0x00ff,
	rt_SXVDEx					= 0x0100,
	rt_SXFormula				= 0x0103,
	rt_SXDBEx					= 0x0122,
	rt_RRDInsDel				= 0x0137,
	rt_RRDHead					= 0x0138,
	rt_RRDChgCell				= 0x013b,
	rt_RRTabId					= 0x013d,
	rt_RRDRenSheet				= 0x013e,
	rt_RRSort					= 0x013f,
	rt_RRDMove					= 0x0140,
	rt_RRFormat					= 0x014a,
	rt_RRAutoFmt				= 0x014b,
	rt_RRInsertSh				= 0x014d,
	rt_RRDMoveBegin				= 0x014e,
	rt_RRDMoveEnd				= 0x014f,
	rt_RRDInsDelBegin			= 0x0150,
	rt_RRDInsDelEnd				= 0x0151,
	rt_RRDConflict				= 0x0152,
	rt_RRDDefName				= 0x0153,
	rt_RRDRstEtxp				= 0x0154,
	rt_LRng						= 0x015f,
	rt_UsesELFs					= 0x0160,
	rt_DSF						= 0x0161,
	rt_CUsr						= 0x0191,
	rt_CbUsr					= 0x0192,
	rt_UsrInfo					= 0x0193,
	rt_UsrExcl					= 0x0194,
	rt_FileLock					= 0x0195,
	rt_RRDInfo					= 0x0196,
	rt_BCUsrs					= 0x0197,
	rt_UsrChk					= 0x0198,
	rt_UserBView				= 0x01a9,
	rt_UserSViewBegin			= 0x01aa,
	rt_UserSViewBegin_Chart		= rt_UserSViewBegin,
	rt_UserSViewEnd				= 0x01ab,
	rt_RRDUserView				= 0x01ac,
	rt_Qsi						= 0x01ad,
	rt_SupBook					= 0x01ae,
	rt_Prot4Rev					= 0x01af,
	rt_CondFmt					= 0x01b0,
	rt_CF						= 0x01b1,
	rt_DVal						= 0x01b2,
	rt_DConBin					= 0x01b5,
	rt_TxO						= 0x01b6,
	rt_RefreshAll				= 0x01b7,
	rt_HLink					= 0x01b8,
	rt_Lel						= 0x01b9,
	rt_CodeName					= 0x01ba,
	rt_SXFDBType				= 0x01bb,
	rt_Prot4RevPass				= 0x01bc,
	rt_ObNoMacros				= 0x01bd,
	rt_Dv						= 0x01be,
	rt_Excel9File				= 0x01c0,
	rt_RecalcId					= 0x01c1,
	rt_EntExU2					= 0x01c2,
	rt_Dimensions_BIFF2			= 0x0200,
	rt_Dimensions				= 0x0200,
	rt_Blank_BIFF2				= 0x0001,
	rt_Blank					= 0x0201,
	rt_Integer_BIFF2			= 0x0002,
	rt_Number_BIFF2				= 0x0003,
	rt_Number					= 0x0203,
	rt_Label_BIFF2				= 0x0004,
	rt_Label					= 0x0204,
	rt_BoolErr_BIFF2			= 0x0005,
	rt_BoolErr					= 0x0205,
	rt_String_BIFF2				= 0x0007,
	rt_Formula_BIFF3			= 0x0206,
	rt_String					= 0x0207,
	rt_Row_BIFF2				= 0x0008,
	rt_Row						= 0x0208,
	rt_BOF_BIFF3				= 0x0209,
	rt_Index_BIFF2				= 0x000b,
	rt_Index					= 0x020b,
	rt_Lbl						= 0x0018,
	rt_Lbl_BIFF34				= 0x0218,
	rt_Array_BIFF2				= 0x0021,
	rt_Array					= 0x0221,
	rt_DefaultRowHeight_BIFF2	= 0x0025,
	rt_DefaultRowHeight			= 0x0225,
	rt_Table					= 0x0236,
	rt_Window2					= 0x023e,
	rt_CommentText				= 0x027d,//??
	rt_RK						= 0x027e,
	rt_Style					= 0x0293,
	rt_Formula_BIFF4			= 0x0406,
	rt_BOF_BIFF4				= 0x0409,
	rt_BigName					= 0x0418,
	rt_Format					= 0x041e,
	rt_Format_BIFF23			= 0x001e,
	rt_ContinueBigName			= 0x043c,
	rt_ShrFmla					= 0x04bc,
	rt_XF_BIFF2					= 0x0043,
	rt_XF_BIFF3					= 0x0243,
	rt_XF_BIFF4					= 0x0443,
	rt_HLinkTooltip				= 0x0800,
	rt_WebPub					= 0x0801,
	rt_QsiSXTag					= 0x0802,
	rt_DBQueryExt				= 0x0803,
	rt_ExtString				= 0x0804,
	rt_TxtQry					= 0x0805,
	rt_Qsir						= 0x0806,
	rt_Qsif						= 0x0807,
	rt_RRDTQSIF					= 0x0808,
	rt_BOF_BIFF8				= 0x0809,
	rt_OleDbConn				= 0x080a,
	rt_WOpt						= 0x080b,
	rt_SXViewEx					= 0x080c,
	rt_SXTH						= 0x080d,
	rt_SXPIEx					= 0x080e,
	rt_SXVDTEx					= 0x080f,
	rt_SXViewEx9				= 0x0810,
	rt_ContinueFrt				= 0x0812,
	rt_RealTimeData				= 0x0813,
	rt_ChartFrtInfo				= 0x0850,
	rt_FrtWrapper				= 0x0851,
	rt_StartBlock				= 0x0852,
	rt_EndBlock					= 0x0853,
	rt_StartObject				= 0x0854,
	rt_EndObject				= 0x0855,
	rt_CatLab					= 0x0856,
	rt_YMult					= 0x0857,
	rt_SXViewLink				= 0x0858,
	rt_PivotChartBits			= 0x0859,
	rt_FrtFontList				= 0x085a,
	rt_SheetExt					= 0x0862,
	rt_BookExt					= 0x0863,
	rt_SXAddl					= 0x0864,
	rt_CrErr					= 0x0865,
	rt_HFPicture				= 0x0866,
	rt_FeatHdr					= 0x0867,
	rt_Feat						= 0x0868,
	rt_DataLabExt				= 0x086a,
	rt_DataLabExtContents		= 0x086b,
	rt_CellWatch				= 0x086c,
	rt_FeatHdr11				= 0x0871,
	rt_Feature11				= 0x0872,
	rt_DropDownObjIds			= 0x0874,
	rt_ContinueFrt11			= 0x0875,
	rt_DConn					= 0x0876,
	rt_List12					= 0x0877,
	rt_Feature12				= 0x0878,
	rt_CondFmt12				= 0x0879,
	rt_CF12						= 0x087a,
	rt_CFEx						= 0x087b,
	rt_XFCRC					= 0x087c,
	rt_XFExt					= 0x087d,
	rt_AutoFilter12				= 0x087e,
	rt_ContinueFrt12			= 0x087f,
	rt_MDTInfo					= 0x0884,
	rt_MDXStr					= 0x0885,
	rt_MDXTuple					= 0x0886,
	rt_MDXSet					= 0x0887,
	rt_MDXProp					= 0x0888,
	rt_MDXKPI					= 0x0889,
	rt_MDB						= 0x088a,
	rt_PLV						= 0x088b,
	rt_Compat12					= 0x088c,
	rt_DXF						= 0x088d,
	rt_TableStyles				= 0x088e,
	rt_TableStyle				= 0x088f,
	rt_TableStyleElement		= 0x0890,
	rt_StyleExt					= 0x0892,
	rt_NamePublish				= 0x0893,
	rt_NameCmt					= 0x0894,
	rt_SortData					= 0x0895,
	rt_Theme					= 0x0896,
	rt_GUIDTypeLib				= 0x0897,
	rt_FnGrp12					= 0x0898,
	rt_NameFnGrp12				= 0x0899,
	rt_MTRSettings				= 0x089a,
	rt_CompressPictures			= 0x089b,
	rt_HeaderFooter				= 0x089c,
	rt_CrtLayout12				= 0x089d,
	rt_CrtMlFrt					= 0x089e,
	rt_CrtMlFrtContinue			= 0x089f,
	rt_ForceFullCalculation		= 0x08a3,
	rt_ShapePropsStream			= 0x08a4,
	rt_TextPropsStream			= 0x08a5,
	rt_RichTextStream			= 0x08a6,
	rt_CrtLayout12A				= 0x08a7,
	rt_Units					= 0x1001,
	rt_Chart					= 0x1002,
	rt_Series					= 0x1003,
	rt_DataFormat				= 0x1006,
	rt_LineFormat				= 0x1007,
	rt_MarkerFormat				= 0x1009,
	rt_AreaFormat				= 0x100a,
	rt_PieFormat				= 0x100b,
	rt_AttachedLabel			= 0x100c,
	rt_SeriesText				= 0x100d,
	rt_ChartFormat				= 0x1014,
	rt_Legend					= 0x1015,
	rt_SeriesList				= 0x1016,
	rt_Bar						= 0x1017,
	rt_Line						= 0x1018,
	rt_Pie						= 0x1019,
	rt_Area						= 0x101a,
	rt_Scatter					= 0x101b,
	rt_CrtLine					= 0x101c,
	rt_Axis						= 0x101d,
	rt_Tick						= 0x101e,
	rt_ValueRange				= 0x101f,
	rt_CatSerRange				= 0x1020,
	rt_AxisLine					= 0x1021,
	rt_CrtLink					= 0x1022,
	rt_DefaultText				= 0x1024,
	rt_Text						= 0x1025,
	rt_FontX					= 0x1026,
	rt_ObjectLink				= 0x1027,
	rt_Frame					= 0x1032,
	rt_Begin					= 0x1033,
	rt_End						= 0x1034,
	rt_PlotArea					= 0x1035,
	rt_Chart3d					= 0x103a,
	rt_PicF						= 0x103c,
	rt_DropBar					= 0x103d,
	rt_Radar					= 0x103e,
	rt_Surf						= 0x103f,
	rt_RadarArea				= 0x1040,
	rt_AxisParent				= 0x1041,
	rt_LegendException			= 0x1043,
	rt_ShtProps					= 0x1044,
	rt_SerToCrt					= 0x1045,
	rt_AxesUsed					= 0x1046,
	rt_SBaseRef					= 0x1048,
	rt_SerParent				= 0x104a,
	rt_SerAuxTrend				= 0x104b,
	rt_IFmtRecord				= 0x104e,
	rt_Pos						= 0x104f,
	rt_AlRuns					= 0x1050,
	rt_BRAI						= 0x1051,
	rt_SerAuxErrBar				= 0x105b,
	rt_ClrtClient				= 0x105c,
	rt_SerFmt					= 0x105d,
	rt_Chart3DBarShape			= 0x105f,
	rt_Fbi						= 0x1060,
	rt_BopPop					= 0x1061,
	rt_AxcExt					= 0x1062,
	rt_Dat						= 0x1063,
	rt_PlotGrowth				= 0x1064,
	rt_SIIndex					= 0x1065,
	rt_GelFrame					= 0x1066,
	rt_BopPopCustom				= 0x1067,
	rt_Fbi2						= 0x1068,
 	rt_STRUCT_DXFN12			= 0xfffc,
	rt_STRUCT_CFVOParsedFormula	= 0xfffd,
	rt_STRUCT_DXFNumUsr			= 0xfffe,
	rt_ANY_TYPE					= 0xffff
} RecordType;

} // namespace XLS


