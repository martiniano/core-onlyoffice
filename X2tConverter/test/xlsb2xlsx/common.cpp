/*
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
 * You can contact Ascensio System SIA at 20A-6 Ernesta Birznieka-Upish
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

#include "common.h"

#include "../../../DesktopEditor/common/Directory.h"
#include "../../../DesktopEditor/common/Path.h"
#include "../../../OfficeUtils/src/OfficeUtils.h"
#include "tchar.h"
#include <cstdlib> 
#include <locale>
#include <codecvt>
#include <boost/filesystem.hpp>

const std::wstring testFilesPath{std::wstring{L".."} + FILE_SEPARATOR_STR + L"ExampleFiles"};

void Xlsb2XlsxConversion1::SetUp()
{
    auto filePath = NSDirectory::GetFolderPath(testFilesPath) + FILE_SEPARATOR_STR + L"ExampleFiles" + FILE_SEPARATOR_STR + L"xlsb2xlsx" + FILE_SEPARATOR_STR;

    auto examplePath = filePath;
    filePath += L"simple1.xlsb";
    examplePath += L"simple1.xlsx";
    ConvertFile(filePath, consoleArgs);
    PrepareFiles(filePath, examplePath, tempDirName);
}

void Xlsb2XlsxConversion1::TearDown()
{
    NSDirectory::DeleteDirectory(tempDirName);
}

_UINT32 ConvertFile(std::wstring &fileName, std::vector<std::wstring> &consoleArgs)
{
    auto exPos = fileName.find(L".xlsb");
    if(exPos == std::string::npos)
        return - 1;
    
    auto newName = fileName.substr(0, exPos);
    newName+= L"Result.xlsx";

    boost::filesystem::path path1 = fileName;
    boost::filesystem::path path2 = newName;
    path1 = boost::filesystem::absolute(path1);
    path2 = boost::filesystem::absolute(path2);


    auto wCommand = consoleArgs.back() + L" \"" + path1.wstring() + L"\" \"" + path2.wstring() +  L"\"";

    // Создание объекта std::wstring_convert с кодировкой UTF-8
    std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;
    ///conversion
    // Преобразование std::wstring в std::string
    auto  command = converter.to_bytes(wCommand);
    
    

    int result = std::system(command.c_str());

    fileName = newName;
    return result;
}

void PrepareFiles(std::wstring &fileName, std::wstring &exampleFileName, std::wstring &tempDirName)
{
    tempDirName = NSDirectory::CreateDirectoryWithUniqueName(NSDirectory::GetFolderPath(fileName));
    std::wstring oldName = fileName;
    fileName  = tempDirName + fileName.substr(fileName.rfind(FILE_SEPARATOR_STR));
    boost::filesystem::rename(oldName, fileName);

    std::wstring sTempUnpackedXLSB = tempDirName + FILE_SEPARATOR_STR + _T("result_unpacked");
    NSDirectory::CreateDirectory(sTempUnpackedXLSB);
    COfficeUtils oCOfficeUtils(NULL);
    _UINT32 nRes = oCOfficeUtils.ExtractToDirectory(fileName, sTempUnpackedXLSB, NULL, 0);

    std::wstring sTempUnpackedXLSX = tempDirName + FILE_SEPARATOR_STR + _T("xlsx_unpacked");
    NSDirectory::CreateDirectory(sTempUnpackedXLSX);
    nRes = oCOfficeUtils.ExtractToDirectory(exampleFileName, sTempUnpackedXLSX, NULL, 0);
}
