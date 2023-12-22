#include "../cstarmathpars.h"
#include "../cconversionsmtoooxml.h"
#include "gtest/gtest.h"



TEST(SMConvectorTest, BinOperatorPlus)
{
	std::wstring wsBinOperator = L"2 + 3";
	StarMath::CParserStarMathString m_oTempO;
	StarMath::CConversionSMtoOOXML m_oTest;
	m_oTest.StartConversion(m_oTempO.Parse(wsBinOperator));
	std::wstring XmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>+3</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(m_oTest.GetOOXML(),XmlString);
}

TEST(SMConvectorTest,BinOperatorOver)
{
	std::wstring wsBinOperator = L"2 over 3";
	StarMath::CParserStarMathString m_oTempO;
	StarMath::CConversionSMtoOOXML m_oTest;
	m_oTest.StartConversion(m_oTempO.Parse(wsBinOperator));
	std::wstring XmlString = L"<m:oMathPara><m:oMath><m:f><m:fPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:fPr><m:num><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r></m:num><m:den><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>3</m:t></m:r></m:den></m:f></m:oMath></m:oMathPara>";
	EXPECT_EQ(m_oTest.GetOOXML(),XmlString);
}

TEST(SMConvectorTest,BinOperatorCdot)
{
	std::wstring wsBinOperator = L"5 cdot 8";
	StarMath::CParserStarMathString m_oTempO;
	StarMath::CConversionSMtoOOXML m_oTest;
	m_oTest.StartConversion(m_oTempO.Parse(wsBinOperator));
	std::wstring XmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>5</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u00B78</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(m_oTest.GetOOXML(),XmlString);
}

TEST(SMConvectorTest,BinOperatorTimes)
{
	std::wstring wsBinOperator = L"5 times 8";
	StarMath::CParserStarMathString m_oTempO;
	StarMath::CConversionSMtoOOXML m_oTest;
	m_oTest.StartConversion(m_oTempO.Parse(wsBinOperator));
	std::wstring XmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>5</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u00D78</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(m_oTest.GetOOXML(),XmlString);
}

TEST(SMConvectorTest,BinOperatorMultipl)
{
	std::wstring wsBinOperator = L"4 * 2";
	StarMath::CParserStarMathString m_oTempO;
	StarMath::CConversionSMtoOOXML m_oTest;
	m_oTest.StartConversion(m_oTempO.Parse(wsBinOperator));
	std::wstring XmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>4</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>*2</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(m_oTest.GetOOXML(),XmlString);
}

TEST(SMConvectorTest,BinOperatorDiv)
{
	std::wstring wsBinOperator = L"4div2";
	StarMath::CParserStarMathString m_oTempO;
	StarMath::CConversionSMtoOOXML m_oTest;
	m_oTest.StartConversion(m_oTempO.Parse(wsBinOperator));
	std::wstring XmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>4</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u00F72</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(m_oTest.GetOOXML(),XmlString);
}

TEST(SMConvectorTest,BinOperatorDivision)
{
	std::wstring wsBinOperator = L"4/2";
	StarMath::CParserStarMathString m_oTempO;
	StarMath::CConversionSMtoOOXML m_oTest;
	m_oTest.StartConversion(m_oTempO.Parse(wsBinOperator));
	std::wstring XmlString = L"<m:oMathPara><m:oMath><m:f><m:fPr><m:type m:val=\"lin\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:fPr><m:num><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>4</m:t></m:r></m:num><m:den><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r></m:den></m:f></m:oMath></m:oMathPara>";
	EXPECT_EQ(m_oTest.GetOOXML(),XmlString);
}

TEST(SMConvectorTest,BinOperatorOplus)
{
	std::wstring wsBinOperator = L"226oplus179";
	StarMath::CParserStarMathString m_oTempO;
	StarMath::CConversionSMtoOOXML m_oTest;
	m_oTest.StartConversion(m_oTempO.Parse(wsBinOperator));
	std::wstring XmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>226</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2295179</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(m_oTest.GetOOXML(),XmlString);
}

TEST(SMConvectorTest,BinOperatorOdot)
{
	std::wstring wsBinOperator = L"226 odot 179";
	StarMath::CParserStarMathString m_oTempO;
	StarMath::CConversionSMtoOOXML m_oTest;
	m_oTest.StartConversion(m_oTempO.Parse(wsBinOperator));
	std::wstring XmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>226</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2299179</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(m_oTest.GetOOXML(),XmlString);
}

TEST(SMConvectorTest,BinOperatorOtimes)
{
	std::wstring wsBinOperator = L"226 otimes 179";
	StarMath::CParserStarMathString m_oTempO;
	StarMath::CConversionSMtoOOXML m_oTest;
	m_oTest.StartConversion(m_oTempO.Parse(wsBinOperator));
	std::wstring XmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>226</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2297179</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(m_oTest.GetOOXML(),XmlString);
}

TEST(SMConvectorTest,OperatorSum)
{
	std::wstring wsOperator = L"sum 5";
	StarMath::CParserStarMathString m_oTempO;
	StarMath::CConversionSMtoOOXML m_oTest;
	m_oTest.StartConversion(m_oTempO.Parse(wsOperator));
	std::wstring XmlString = L"<m:oMathPara><m:oMath><m:nary><m:naryPr><m:chr m:val=\"\u2211\" /><m:limLoc m:val=\"undOvr\" /><m:subHide m:val=\"1\" /><m:supHide m:val=\"1\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:naryPr><m:sub/><m:sup/><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>5</m:t></m:r></m:e></m:nary></m:oMath></m:oMathPara>";
	EXPECT_EQ(m_oTest.GetOOXML(),XmlString);
}

TEST(SMConvectorTest,OperatorSumFrom)
{
	std::wstring wsOperator = L"sum from 10 5";
	StarMath::CParserStarMathString m_oTempO;
	StarMath::CConversionSMtoOOXML m_oTest;
	m_oTest.StartConversion(m_oTempO.Parse(wsOperator));
	std::wstring XmlString = L"<m:oMathPara><m:oMath><m:nary><m:naryPr><m:chr m:val=\"\u2211\" /><m:limLoc m:val=\"undOvr\" /><m:supHide m:val=\"1\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:naryPr><m:sub><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>10</m:t></m:r></m:sub><m:sup/><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>5</m:t></m:r></m:e></m:nary></m:oMath></m:oMathPara>";
	EXPECT_EQ(m_oTest.GetOOXML(),XmlString);
}

TEST(SMConvectorTest,OperatorSumTo)
{
	std::wstring wsOperator = L"sum to 10 5";
	StarMath::CParserStarMathString m_oTempO;
	StarMath::CConversionSMtoOOXML m_oTest;
	m_oTest.StartConversion(m_oTempO.Parse(wsOperator));
	std::wstring XmlString = L"<m:oMathPara><m:oMath><m:nary><m:naryPr><m:chr m:val=\"\u2211\" /><m:limLoc m:val=\"undOvr\" /><m:subHide m:val=\"1\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:naryPr><m:sub/><m:sup><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>10</m:t></m:r></m:sup><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>5</m:t></m:r></m:e></m:nary></m:oMath></m:oMathPara>";
	EXPECT_EQ(m_oTest.GetOOXML(),XmlString);
}

TEST(SMConvectorTest,OperatorSumFromTo)
{
	std::wstring wsOperator = L"sum from 666 to 777 567";
	StarMath::CParserStarMathString m_oTempO;
	StarMath::CConversionSMtoOOXML m_oTest;
	m_oTest.StartConversion(m_oTempO.Parse(wsOperator));
	std::wstring XmlString = L"<m:oMathPara><m:oMath><m:nary><m:naryPr><m:chr m:val=\"\u2211\" /><m:limLoc m:val=\"undOvr\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:naryPr><m:sub><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>666</m:t></m:r></m:sub><m:sup><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>777</m:t></m:r></m:sup><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>567</m:t></m:r></m:e></m:nary></m:oMath></m:oMathPara>";
	EXPECT_EQ(m_oTest.GetOOXML(),XmlString);
}

TEST(SMConvectorTest,SetOperationUnion)
{
	std::wstring wsString = L"23 union 45";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>23</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u22C3</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>45</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,SetOperationIntersection)
{
	std::wstring wsString = L"15 intersection 1234";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>15</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u22C2</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>1234</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,SetOperationSetminus)
{
	std::wstring wsString = L"7 setminus 15745";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>7</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2216</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>15745</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,SetOperationSetquotient)
{
	std::wstring wsString = L"91 setquotient 45";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>91</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2215</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>45</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,SetOperationSubset)
{
	std::wstring wsString = L"1 subset 2";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>1</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2282</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,SetOperationSubseteq)
{
	std::wstring wsString = L"77subseteq66";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>77</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2286</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>66</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,SetOperationSupset)
{
	std::wstring wsString = L"11supset22";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>11</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2283</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>22</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,SetOperationSupseteq)
{
	std::wstring wsString = L"1 supseteq 2";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>1</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2287</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,SetOperationNsubset)
{
	std::wstring wsString = L"21nsubset2";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>21</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2284</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,SetOperationNsubseteq)
{
	std::wstring wsString = L"782nsubseteq250";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>782</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2288</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>250</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,SetOperationNsupset)
{
	std::wstring wsString = L"1nsupset2";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>1</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2285</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,SetOperationNsupseteq)
{
	std::wstring wsString = L"1nsupseteq2";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>1</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2289</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,SetOperationIn)
{
	std::wstring wsString = L"1 in 2";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>1</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2208</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,SetOperationNotin)
{
	std::wstring wsString = L"3 notin 4";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>3</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2209</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>4</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,SetOperationOwns)
{
	std::wstring wsString = L"5owns6";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>5</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u220B</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>6</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionDlarrow)
{
	std::wstring wsString = L"7 dlarrow 8";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>7</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u21D0</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>8</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionDlrarrow)
{
	std::wstring wsString = L"9 dlrarrow 10";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>9</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u21D4</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>10</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionDrarrow)
{
	std::wstring wsString = L"11drarrow12";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>11</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u21D2</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>12</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionEquals)
{
	std::wstring wsString = L"13=14";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>13</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>=</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>14</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionNotequals)
{
	std::wstring wsString = L"15 <> 16";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>15</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2260</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>16</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionLearrow)
{
	std::wstring wsString = L"17<18";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>17</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t><</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>18</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionLearrowequals)
{
	std::wstring wsString = L"19<= 20";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>19</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2264</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>20</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionRiarrow)
{
	std::wstring wsString = L"21 >22";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>21</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>></m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>22</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionRiarrowequals)
{
	std::wstring wsString = L"23 >=24";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>23</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2265</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>24</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionDllearrow)
{
	std::wstring wsString = L"25 <<26";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>25</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u226A</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>26</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionDlriarrow)
{
	std::wstring wsString = L"27 >> 28";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>27</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u226B</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>28</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionApprox)
{
	std::wstring wsString = L"29 approx30";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>29</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2248</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>30</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionSim)
{
	std::wstring wsString = L"31sim 32";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>31</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u223C</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>32</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionSimeq)
{
	std::wstring wsString = L"33 simeq 34";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>33</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2243</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>34</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionEquiv)
{
	std::wstring wsString = L"35 equiv 36";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>35</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2261</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>36</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionProp)
{
	std::wstring wsString = L"37 prop 38";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>37</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u221D</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>38</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionParallel)
{
	std::wstring wsString = L"39 parallel 40";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>39</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2225</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>40</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionOrtho)
{
	std::wstring wsString = L"41ortho42";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>41</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u22A5</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>42</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionDivides)
{
	std::wstring wsString = L"43 divides 44";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>43</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2223</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>44</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionNdivides)
{
	std::wstring wsString = L"45 ndivides 46";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>45</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2224</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>46</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionToward)
{
	std::wstring wsString = L"47 toward 48";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>47</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2192</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>48</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionTransl)
{
	std::wstring wsString = L"49 transl 50";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>49</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u22B7</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>50</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionTransr)
{
	std::wstring wsString = L"51 transr 52";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>51</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u22B6</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>52</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionDef)
{
	std::wstring wsString = L"53def54";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>53</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u225D</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>54</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionPrec)
{
	std::wstring wsString = L"55prec56";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>55</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u227A</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>56</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionSucc)
{
	std::wstring wsString = L"57 succ 58";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>57</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u227B</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>58</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionPreccurlyeq)
{
	std::wstring wsString = L"59 preccurlyeq 60";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>59</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u227C</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>60</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionSucccurlyeq)
{
	std::wstring wsString = L"61 succcurlyeq 62";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>61</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u227D</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>62</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionPrecsim)
{
	std::wstring wsString = L"63 precsim 64";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>63</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u227E</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>64</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionSuccsim)
{
	std::wstring wsString = L"65 succsim 66";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>65</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u227F</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>66</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionNprec)
{
	std::wstring wsString = L"67nprec68";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>67</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2280</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>68</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,ConnectionNsucc)
{
	std::wstring wsString = L"69nsucc70";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>69</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2281</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>70</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,BracketRound)
{
	std::wstring wsString = L"(2+3)";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:d><m:dPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:dPr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>+3</m:t></m:r></m:e></m:d></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,BracketSquare)
{
	std::wstring wsString = L"[4-5]";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:d><m:dPr><m:begChr m:val=\"\u005B\" /><m:endChr m:val=\"\u005D\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:dPr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>4</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>-5</m:t></m:r></m:e></m:d></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,BracketLdbracket)
{
	std::wstring wsString = L"ldbracket 6+7 rdbracket";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:d><m:dPr><m:begChr m:val=\"\u27E6\" /><m:endChr m:val=\"\u27E7\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:dPr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>6</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>+7</m:t></m:r></m:e></m:d></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,BracketLbrace)
{
	std::wstring wsString = L"lbrace 8 - 9 rbrace";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:d><m:dPr><m:begChr m:val=\"\u007B\" /><m:endChr m:val=\"\u007D\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:dPr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>8</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>-9</m:t></m:r></m:e></m:d></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,BracketLangle)
{
	std::wstring wsString = L"langle 10 over 11 rangle";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:d><m:dPr><m:begChr m:val=\"\u2329\" /><m:endChr m:val=\"\u232A\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:dPr><m:e><m:f><m:fPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:fPr><m:num><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>10</m:t></m:r></m:num><m:den><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>11</m:t></m:r></m:den></m:f></m:e></m:d></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,BracketLceil)
{
	std::wstring wsString = L"lceil 12 ominus 13 rceil";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:d><m:dPr><m:begChr m:val=\"\u23A1\" /><m:endChr m:val=\"\u23A4\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:dPr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>12</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u229613</m:t></m:r></m:e></m:d></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,BracketLfloor)
{
	std::wstring wsString = L"lfloor 14 union 15 rfloor";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:d><m:dPr><m:begChr m:val=\"\u23A3\" /><m:endChr m:val=\"\u23A6\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:dPr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>14</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u22C3</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>15</m:t></m:r></m:e></m:d></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,BracketLline)
{
	std::wstring wsString = L"lline 16 / 17 rline";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:d><m:dPr><m:begChr m:val=\"\u23AA\" /><m:endChr m:val=\"\u23AA\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:dPr><m:e><m:f><m:fPr><m:type m:val=\"lin\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:fPr><m:num><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>16</m:t></m:r></m:num><m:den><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>17</m:t></m:r></m:den></m:f></m:e></m:d></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,BracketLdline)
{
	std::wstring wsString = L"ldline 18 oplus 19 rdline";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:d><m:dPr><m:begChr m:val=\"\u2016\" /><m:endChr m:val=\"\u2016\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:dPr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>18</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u229519</m:t></m:r></m:e></m:d></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,FunctionCos)
{
	std::wstring wsString = L"cos{2+3}";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:func><m:funcPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:funcPr><m:fName><m:r><m:rPr><m:sty m:val=\"p\" /></m:rPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>cos</m:t></m:r></m:fName><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>+3</m:t></m:r></m:e></m:func></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,FunctionSin)
{
	std::wstring wsString = L"sin 4 over 5";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:func><m:funcPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:funcPr><m:fName><m:r><m:rPr><m:sty m:val=\"p\" /></m:rPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>sin</m:t></m:r></m:fName><m:e><m:f><m:fPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:fPr><m:num><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>4</m:t></m:r></m:num><m:den><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>5</m:t></m:r></m:den></m:f></m:e></m:func></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,FunctionTan)
{
	std::wstring wsString = L"tan{6 / 7}";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:func><m:funcPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:funcPr><m:fName><m:r><m:rPr><m:sty m:val=\"p\" /></m:rPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>tan</m:t></m:r></m:fName><m:e><m:f><m:fPr><m:type m:val=\"lin\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:fPr><m:num><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>6</m:t></m:r></m:num><m:den><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>7</m:t></m:r></m:den></m:f></m:e></m:func></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,FunctionCot)
{
	std::wstring wsString = L"cot(8 over 9)";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:func><m:funcPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:funcPr><m:fName><m:r><m:rPr><m:sty m:val=\"p\" /></m:rPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>cot</m:t></m:r></m:fName><m:e><m:d><m:dPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:dPr><m:e><m:f><m:fPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:fPr><m:num><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>8</m:t></m:r></m:num><m:den><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>9</m:t></m:r></m:den></m:f></m:e></m:d></m:e></m:func></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,FunctionSinh)
{
	std::wstring wsString = L"sinh 2 supset 3";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:func><m:funcPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:funcPr><m:fName><m:r><m:rPr><m:sty m:val=\"p\" /></m:rPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>sinh</m:t></m:r></m:fName><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2283</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>3</m:t></m:r></m:e></m:func></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,FunctionCosh)
{
	std::wstring wsString = L"cosh 2 + 3";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:func><m:funcPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:funcPr><m:fName><m:r><m:rPr><m:sty m:val=\"p\" /></m:rPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>cosh</m:t></m:r></m:fName><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>+3</m:t></m:r></m:e></m:func></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,FunctionTanh)
{
	std::wstring wsString = L"tanh(11otimes12)";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:func><m:funcPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:funcPr><m:fName><m:r><m:rPr><m:sty m:val=\"p\" /></m:rPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>tanh</m:t></m:r></m:fName><m:e><m:d><m:dPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:dPr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>11</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u229712</m:t></m:r></m:e></m:d></m:e></m:func></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,FunctionCoth222)
{
	std::wstring wsString = L"coth222";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:func><m:funcPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:funcPr><m:fName><m:r><m:rPr><m:sty m:val=\"p\" /></m:rPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>coth</m:t></m:r></m:fName><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>222</m:t></m:r></m:e></m:func></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,FunctionArcsin)
{
	std::wstring wsString = L"arcsin{13 ominus 14}";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:func><m:funcPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:funcPr><m:fName><m:r><m:rPr><m:sty m:val=\"p\" /></m:rPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>arcsin</m:t></m:r></m:fName><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>13</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u229614</m:t></m:r></m:e></m:func></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,FunctionArccos)
{
	std::wstring wsString = L"arccos{15 - 16}";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:func><m:funcPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:funcPr><m:fName><m:r><m:rPr><m:sty m:val=\"p\" /></m:rPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>arccos</m:t></m:r></m:fName><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>15</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>-16</m:t></m:r></m:e></m:func></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,FunctionArctan)
{
	std::wstring wsString = L"arctan 17 over 18";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:func><m:funcPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:funcPr><m:fName><m:r><m:rPr><m:sty m:val=\"p\" /></m:rPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>arctan</m:t></m:r></m:fName><m:e><m:f><m:fPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:fPr><m:num><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>17</m:t></m:r></m:num><m:den><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>18</m:t></m:r></m:den></m:f></m:e></m:func></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,FunctionArccot)
{
	std::wstring wsString = L"arccot 20 + 30";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:func><m:funcPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:funcPr><m:fName><m:r><m:rPr><m:sty m:val=\"p\" /></m:rPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>arccot</m:t></m:r></m:fName><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>20</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>+30</m:t></m:r></m:e></m:func></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,FunctionArsinh)
{
	std::wstring wsString = L"{arsinh{2/3}} over sum from 1 to 5 10";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:f><m:fPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:fPr><m:num><m:func><m:funcPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:funcPr><m:fName><m:r><m:rPr><m:sty m:val=\"p\" /></m:rPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>arsinh</m:t></m:r></m:fName><m:e><m:f><m:fPr><m:type m:val=\"lin\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:fPr><m:num><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r></m:num><m:den><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>3</m:t></m:r></m:den></m:f></m:e></m:func></m:num><m:den><m:nary><m:naryPr><m:chr m:val=\"\u2211\" /><m:limLoc m:val=\"undOvr\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:naryPr><m:sub><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>1</m:t></m:r></m:sub><m:sup><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>5</m:t></m:r></m:sup><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>10</m:t></m:r></m:e></m:nary></m:den></m:f></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,FunctionArcosh)
{
	std::wstring wsString = L"35 + 27 over  {arcosh binom 23 78}";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>35</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>+</m:t></m:r><m:f><m:fPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:fPr><m:num><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>27</m:t></m:r></m:num><m:den><m:func><m:funcPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:funcPr><m:fName><m:r><m:rPr><m:sty m:val=\"p\" /></m:rPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>arcosh</m:t></m:r></m:fName><m:e><m:m><m:mPr><m:mcs><m:mc><m:mcPr><m:count m:val=\"1\" /><m:mcJc m:val=\"center\" /></m:mcPr></m:mc></m:mcs><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:mPr><m:mr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>23</m:t></m:r></m:e></m:mr><m:mr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>78</m:t></m:r></m:e></m:mr></m:m></m:e></m:func></m:den></m:f></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,FunctionArtanhArcoth)
{
	std::wstring wsString = L"arcoth 30 subset {artanh 27}";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:func><m:funcPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:funcPr><m:fName><m:r><m:rPr><m:sty m:val=\"p\" /></m:rPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>arcoth</m:t></m:r></m:fName><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>30</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2282</m:t></m:r><m:func><m:funcPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:funcPr><m:fName><m:r><m:rPr><m:sty m:val=\"p\" /></m:rPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>artanh</m:t></m:r></m:fName><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>27</m:t></m:r></m:e></m:func></m:e></m:func></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,MatrixBinom)
{
	std::wstring wsString = L"binom{2 over 7 supset 277}{arcoth 89}";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:m><m:mPr><m:mcs><m:mc><m:mcPr><m:count m:val=\"1\" /><m:mcJc m:val=\"center\" /></m:mcPr></m:mc></m:mcs><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:mPr><m:mr><m:e><m:f><m:fPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:fPr><m:num><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r></m:num><m:den><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>7</m:t></m:r></m:den></m:f><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2283</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>277</m:t></m:r></m:e></m:mr><m:mr><m:e><m:func><m:funcPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:funcPr><m:fName><m:r><m:rPr><m:sty m:val=\"p\" /></m:rPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>arcoth</m:t></m:r></m:fName><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>89</m:t></m:r></m:e></m:func></m:e></m:mr></m:m></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,MatrixMatrix)
{
	std::wstring wsString = L"matrix{2  / 8 -5  # sum from 2 over 10 union 3 to 10*10 100  ## cosh(10)  # 2 oplus 10over100 }";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:m><m:mPr><m:mcs><m:mc><m:mcPr><m:count m:val=\"2\" /><m:mcJc m:val=\"center\" /></m:mcPr></m:mc></m:mcs><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:mPr><m:mr><m:e><m:f><m:fPr><m:type m:val=\"lin\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:fPr><m:num><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r></m:num><m:den><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>8</m:t></m:r></m:den></m:f><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>-5</m:t></m:r></m:e><m:e><m:nary><m:naryPr><m:chr m:val=\"\u2211\" /><m:limLoc m:val=\"undOvr\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:naryPr><m:sub><m:f><m:fPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:fPr><m:num><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r></m:num><m:den><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>10</m:t></m:r></m:den></m:f><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u22C3</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>3</m:t></m:r></m:sub><m:sup><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>10</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>*10</m:t></m:r></m:sup><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>100</m:t></m:r></m:e></m:nary></m:e></m:mr><m:mr><m:e><m:func><m:funcPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:funcPr><m:fName><m:r><m:rPr><m:sty m:val=\"p\" /></m:rPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>cosh</m:t></m:r></m:fName><m:e><m:d><m:dPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:dPr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>10</m:t></m:r></m:e></m:d></m:e></m:func></m:e><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u2295</m:t></m:r><m:f><m:fPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:fPr><m:num><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>10</m:t></m:r></m:num><m:den><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>100</m:t></m:r></m:den></m:f></m:e></m:mr></m:m></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,MatrixStack)
{
	std::wstring wsString = L"stack{2 over 10 # binom 2 3 # matrix{1 # 2 ## 3 # 4}}";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:m><m:mPr><m:mcs><m:mc><m:mcPr><m:count m:val=\"1\" /><m:mcJc m:val=\"center\" /></m:mcPr></m:mc></m:mcs><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:mPr><m:mr><m:e><m:f><m:fPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:fPr><m:num><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r></m:num><m:den><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>10</m:t></m:r></m:den></m:f></m:e></m:mr><m:mr><m:e><m:m><m:mPr><m:mcs><m:mc><m:mcPr><m:count m:val=\"1\" /><m:mcJc m:val=\"center\" /></m:mcPr></m:mc></m:mcs><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:mPr><m:mr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r></m:e></m:mr><m:mr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>3</m:t></m:r></m:e></m:mr></m:m></m:e></m:mr><m:mr><m:e><m:m><m:mPr><m:mcs><m:mc><m:mcPr><m:count m:val=\"2\" /><m:mcJc m:val=\"center\" /></m:mcPr></m:mc></m:mcs><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:mPr><m:mr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>1</m:t></m:r></m:e><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r></m:e></m:mr><m:mr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>3</m:t></m:r></m:e><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>4</m:t></m:r></m:e></m:mr></m:m></m:e></m:mr><m:mr></m:mr></m:m></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,IndexLower)
{
	std::wstring wsString = L"25 over 1 _ 2 ";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:f><m:fPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:fPr><m:num><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>25</m:t></m:r></m:num><m:den><m:sSub><m:sSubPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:sSubPr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>1</m:t></m:r></m:e><m:sub><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r></m:sub></m:sSub></m:den></m:f></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,IndexUpper)
{
	std::wstring wsString = L"{binom {cos 5}  2 over 4 }^ 10";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:sSup><m:sSupPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:sSupPr><m:e><m:m><m:mPr><m:mcs><m:mc><m:mcPr><m:count m:val=\"1\" /><m:mcJc m:val=\"center\" /></m:mcPr></m:mc></m:mcs><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:mPr><m:mr><m:e><m:func><m:funcPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:funcPr><m:fName><m:r><m:rPr><m:sty m:val=\"p\" /></m:rPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>cos</m:t></m:r></m:fName><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>5</m:t></m:r></m:e></m:func></m:e></m:mr><m:mr><m:e><m:f><m:fPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:fPr><m:num><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r></m:num><m:den><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>4</m:t></m:r></m:den></m:f></m:e></m:mr></m:m></m:e><m:sup><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>10</m:t></m:r></m:sup></m:sSup></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,IndexLsup)
{
	std::wstring wsString = L"{2 over 7} lsup binom 2+3 {cos 15}";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:sPre><m:sPrePr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:sPrePr><m:sup><m:m><m:mPr><m:mcs><m:mc><m:mcPr><m:count m:val=\"1\" /><m:mcJc m:val=\"center\" /></m:mcPr></m:mc></m:mcs><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:mPr><m:mr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>+3</m:t></m:r></m:e></m:mr><m:mr><m:e><m:func><m:funcPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:funcPr><m:fName><m:r><m:rPr><m:sty m:val=\"p\" /></m:rPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>cos</m:t></m:r></m:fName><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>15</m:t></m:r></m:e></m:func></m:e></m:mr></m:m></m:sup><m:e><m:f><m:fPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:fPr><m:num><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r></m:num><m:den><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>7</m:t></m:r></m:den></m:f></m:e></m:sPre></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,IndexLsub)
{
	std::wstring wsString = L"2222^10 lsub 2 over 3";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:f><m:fPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:fPr><m:num><m:sPre><m:sPrePr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:sPrePr><m:sub><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2</m:t></m:r></m:sub><m:e><m:sSup><m:sSupPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:sSupPr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>2222</m:t></m:r></m:e><m:sup><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>10</m:t></m:r></m:sup></m:sSup></m:e></m:sPre></m:num><m:den><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>3</m:t></m:r></m:den></m:f></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,BracketWithIndexOverbrace)
{
	std::wstring wsString = L"color red size 16 {2/3} overbrace color navy size 18  stack{10 # 100 # 10 }";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:limUpp><m:limUppPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:limUppPr><m:e><m:groupChr><m:groupChrPr><m:chr m:val=\"\u23DE\" /><m:pos m:val=\"top\" /><m:vertJc m:val=\"bot\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:groupChrPr><m:e><m:f><m:fPr><m:type m:val=\"lin\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"32\" /><w:szCs w:val=\"32\" /><w:color w:val=\"FF0000\" /></w:rPr></m:ctrlPr></m:fPr><m:num><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"32\" /><w:szCs w:val=\"32\" /><w:color w:val=\"FF0000\" /></w:rPr><m:t>2</m:t></m:r></m:num><m:den><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"32\" /><w:szCs w:val=\"32\" /><w:color w:val=\"FF0000\" /></w:rPr><m:t>3</m:t></m:r></m:den></m:f></m:e></m:groupChr></m:e><m:lim><m:m><m:mPr><m:mcs><m:mc><m:mcPr><m:count m:val=\"1\" /><m:mcJc m:val=\"center\" /></m:mcPr></m:mc></m:mcs><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"36\" /><w:szCs w:val=\"36\" /><w:color w:val=\"000080\" /></w:rPr></m:ctrlPr></m:mPr><m:mr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"36\" /><w:szCs w:val=\"36\" /><w:color w:val=\"000080\" /></w:rPr><m:t>10</m:t></m:r></m:e></m:mr><m:mr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"36\" /><w:szCs w:val=\"36\" /><w:color w:val=\"000080\" /></w:rPr><m:t>100</m:t></m:r></m:e></m:mr><m:mr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"36\" /><w:szCs w:val=\"36\" /><w:color w:val=\"000080\" /></w:rPr><m:t>10</m:t></m:r></m:e></m:mr><m:mr></m:mr></m:m></m:lim></m:limUpp></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,OperatorLllint)
{
	std::wstring wsString = L"color red bold  lllint  from color navy bold 2 over color crimson  10 to color green  (2 color orange bold + 3) 100";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:nary><m:naryPr><m:chr m:val=\"\u2230\" /><m:limLoc m:val=\"undOvr\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"FF0000\" /><m:sty m:val=\"b\" /><w:b /><w:bCs /></w:rPr></m:ctrlPr></m:naryPr><m:sub><m:f><m:fPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"FF0000\" /><m:sty m:val=\"b\" /><w:b /><w:bCs /></w:rPr></m:ctrlPr></m:fPr><m:num><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"000080\" /><m:sty m:val=\"b\" /><w:b /><w:bCs /></w:rPr><m:t>2</m:t></m:r></m:num><m:den><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"DC143C\" /><m:sty m:val=\"b\" /><w:b /><w:bCs /></w:rPr><m:t>10</m:t></m:r></m:den></m:f></m:sub><m:sup><m:d><m:dPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"00FF00\" /><m:sty m:val=\"b\" /><w:b /><w:bCs /></w:rPr></m:ctrlPr></m:dPr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"00FF00\" /><m:sty m:val=\"b\" /><w:b /><w:bCs /></w:rPr><m:t>2</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"FFA500\" /><m:sty m:val=\"b\" /><w:b /><w:bCs /></w:rPr><m:t>+3</m:t></m:r></m:e></m:d></m:sup><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"FF0000\" /><m:sty m:val=\"b\" /><w:b /><w:bCs /></w:rPr><m:t>100</m:t></m:r></m:e></m:nary></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,BracketLdlineAttribute)
{
	std::wstring wsString = L"color green left ldline color navy bold 10 over color purple  dot underline   100 color orange bold ital + 3 right rdline + ital bold 10";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:d><m:dPr><m:begChr m:val=\"\u2016\" /><m:endChr m:val=\"\u2016\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"00FF00\" /></w:rPr></m:ctrlPr></m:dPr><m:e><m:f><m:fPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"00FF00\" /></w:rPr></m:ctrlPr></m:fPr><m:num><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"000080\" /><m:sty m:val=\"b\" /><w:b /><w:bCs /></w:rPr><m:t>10</m:t></m:r></m:num><m:den><m:acc><m:accPr><m:chr m:val=\"\u0307\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"800080\" /></w:rPr></m:ctrlPr></m:accPr><m:e><m:acc><m:accPr><m:chr m:val=\"\u0332\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"800080\" /></w:rPr></m:ctrlPr></m:accPr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"800080\" /></w:rPr><m:t>100</m:t></m:r></m:e></m:acc></m:e></m:acc></m:den></m:f><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"FFA500\" /><m:sty m:val=\"bi\" /></w:rPr><m:t>+3</m:t></m:r></m:e></m:d><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>+</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><m:sty m:val=\"bi\" /></w:rPr><m:t>10</m:t></m:r></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,Example11)
{
	std::wstring wsString = L"f(x) = sum from { n=0 } to { infinity } { {f^{(n)}(x_0) } over { fact{n} } (x-x_0)^n }";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>f</m:t></m:r><m:d><m:dPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:dPr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>x</m:t></m:r></m:e></m:d><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>=</m:t></m:r><m:nary><m:naryPr><m:chr m:val=\"\u2211\" /><m:limLoc m:val=\"undOvr\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:naryPr><m:sub><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>n</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>=</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>0</m:t></m:r></m:sub><m:sup><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u221E</m:t></m:r></m:sup><m:e><m:f><m:fPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:fPr><m:num><m:sSup><m:sSupPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:sSupPr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>f</m:t></m:r></m:e><m:sup><m:d><m:dPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:dPr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>n</m:t></m:r></m:e></m:d></m:sup></m:sSup><m:d><m:dPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:dPr><m:e><m:sSub><m:sSubPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:sSubPr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>x</m:t></m:r></m:e><m:sub><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>0</m:t></m:r></m:sub></m:sSub></m:e></m:d></m:num><m:den><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>n</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>\u0021</m:t></m:r></m:den></m:f><m:sSup><m:sSupPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:sSupPr><m:e><m:d><m:dPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:dPr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>x</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>-</m:t></m:r><m:sSub><m:sSubPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr></m:ctrlPr></m:sSubPr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>x</m:t></m:r></m:e><m:sub><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>0</m:t></m:r></m:sub></m:sSub></m:e></m:d></m:e><m:sup><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /></w:rPr><m:t>n</m:t></m:r></m:sup></m:sSup></m:e></m:nary></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

TEST(SMConvectorTest,AttributeGrade)
{
	std::wstring wsString = L"color green bold evaluate {E = color black m c^ color yellow 2} from {color crimson b over color teal   a} to color navy overstrike infinity";
	StarMath::CParserStarMathString oTemp;
	StarMath::CConversionSMtoOOXML oTest;
	oTest.StartConversion(oTemp.Parse(wsString));
	std::wstring wsXmlString = L"<m:oMathPara><m:oMath><m:sSubSup><m:sSubSupPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"00FF00\" /><m:sty m:val=\"b\" /><w:b /><w:bCs /></w:rPr></m:ctrlPr></m:sSubSupPr><m:e><m:d><m:dPr><m:begChr m:val=\"\" /><m:endChr m:val=\"\u23AA\" /><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"00FF00\" /><m:sty m:val=\"b\" /><w:b /><w:bCs /></w:rPr></m:ctrlPr></m:dPr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"00FF00\" /><m:sty m:val=\"b\" /><w:b /><w:bCs /></w:rPr><m:t>E</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"00FF00\" /><m:sty m:val=\"b\" /><w:b /><w:bCs /></w:rPr><m:t>=</m:t></m:r><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"000000\" /><m:sty m:val=\"b\" /><w:b /><w:bCs /></w:rPr><m:t>m</m:t></m:r><m:sSup><m:sSupPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"00FF00\" /><m:sty m:val=\"b\" /><w:b /><w:bCs /></w:rPr></m:ctrlPr></m:sSupPr><m:e><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"00FF00\" /><m:sty m:val=\"b\" /><w:b /><w:bCs /></w:rPr><m:t>c</m:t></m:r></m:e><m:sup><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"FFFF00\" /><m:sty m:val=\"b\" /><w:b /><w:bCs /></w:rPr><m:t>2</m:t></m:r></m:sup></m:sSup></m:e></m:d></m:e><m:sub><m:f><m:fPr><m:ctrlPr><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"00FF00\" /><m:sty m:val=\"b\" /><w:b /><w:bCs /></w:rPr></m:ctrlPr></m:fPr><m:num><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"DC143C\" /><m:sty m:val=\"b\" /><w:b /><w:bCs /></w:rPr><m:t>b</m:t></m:r></m:num><m:den><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"008080\" /><m:sty m:val=\"b\" /><w:b /><w:bCs /></w:rPr><m:t>a</m:t></m:r></m:den></m:f></m:sub><m:sup><m:r><w:rPr><w:rFonts w:hAnsi=\"Cambria Math\" w:ascii=\"Cambria Math\" /><w:sz w:val=\"40\" /><w:szCs w:val=\"40\" /><w:color w:val=\"000080\" /><m:sty m:val=\"b\" /><w:b /><w:bCs /><w:strike /></w:rPr><m:t>\u221E</m:t></m:r></m:sup></m:sSubSup></m:oMath></m:oMathPara>";
	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
}

//TEST(SMConvectorTest,AttributeMatrix)
//{
//	std::wstring wsString = L"";
//	StarMath::CParserStarMathString oTemp;
//	StarMath::CConversionSMtoOOXML oTest;
//	oTest.StartConversion(oTemp.Parse(wsString));
//	std::wstring wsXmlString = L"";
//	EXPECT_EQ(oTest.GetOOXML(),wsXmlString);
//}





