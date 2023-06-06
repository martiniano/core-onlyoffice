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

#pragma once

#include <vector>
#include <iostream>
#include <algorithm>

// Commands
std::wstring sCmdHelp =                         L"--h";
std::wstring sCmdHelpFull =                     L"--help";

std::wstring sCmdUser =                         L"--user";
std::wstring sCmdPassword =                     L"--password";

std::wstring sCmdDebianUrl =                    L"--debian-url";
std::wstring sCmdRedhatUrl =                    L"--redhat-url";

std::wstring sCmdStartAll =                     L"--start-all";

std::wstring sCmdStartDebian =                  L"--start-debian";
std::wstring sCmdStartRedHat =                  L"--start-redhat";

std::vector<std::wstring> arrCommands {sCmdHelp, sCmdHelpFull, sCmdUser, sCmdPassword,
										sCmdDebianUrl, sCmdRedhatUrl,
										sCmdStartAll, sCmdStartDebian, sCmdStartRedHat};

bool IsCommandExists(std::wstring sCommand)
{
	return std::find(arrCommands.begin(), arrCommands.end(), sCommand) != arrCommands.end();
}

bool IsNeedSetValue(std::wstring sParam)
{
	return sParam == sCmdUser ||
			sParam == sCmdPassword ||
			sParam == sCmdDebianUrl ||
			sParam == sCmdRedhatUrl;
}

std::wstring sHelpText =
L"\nVirtualBox Tester Options\n\n" \

L"  --h                                            \n" \
L"  --help               = Print usage information.\n\n" \

L"  --user               = Required parameter.\n\n" \

L"  --password           = Required parameter.\n\n" \

L"  --debian-url         = Required parameter if --start-all or --start-debian.\n\n" \

L"  --redhat-url         = Required parameter if --start-all or --start-redhat.\n\n" \

L"  --start-all          = Optional parameter. Start Debian and RedHat VMs\n\n" \

L"  --start-debian       = Optional parameter. Start Debian VMs\n\n" \

L"  --start-redhat       = Optional parameter. Start RedHat VMs\n\n" \
;
