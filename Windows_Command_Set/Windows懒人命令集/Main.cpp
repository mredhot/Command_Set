#include <iostream>
#include "0.Command_Set.h"
#include "1.SystemInfo.h"
#include "2.Ipconfig.h"
#include "3.Appwiz.h"
#include "4.Control.h"
#include "5.Cleanmgr.h"
#include "6.Certmgr.h"
#include "7.Charmap.h"
#include "8.Shutdown.h"
#include "9.Lock.h"
#include "10.Colorcpl.h"
#include "11.Compmgmt.h"
#include "12.Credwiz.h"
#include "13.Comexp.h"
#include "14.Dccw.h"
#include "15.Devmgmt.h"
#include "16.Desk_cpl.h"
#include "17.Dfrgui.h"
#include "18.Dfrg_Win7.h"
#include "19.Dialer.h"
#include "20.Diskmgmt.h"
#include "21.DVDplay.h"
#include "22.Dxdiag.h"
#include "23.Eudcedit.h"
#include "24.Eventvwr.h"
#include "25.Explorer.h"
#include "26.Firewall.h"
#include "27.FXSCOVER.h"
#include "28.Fsmgmt.h"
#include "29.Gpedit.h"
#include "30.Hdwwiz.h"
#include "31.Inetcpl.h"
#include "32.Intl.h"
#include "33.Iexpress.h"
#include "34.Joy.h"
#include "35.Logoff.h"
#include "36.Lusrmgr.h"
#include "37.Lpksetup.h"
#include "38.magnify.h"
#include "39.Mouse.h"
#include "40.Mmsys.h"
#include "41.MdSched.h"
#include "42.Mmc.h"
#include "43.Msconfig.h"
#include "44.Msdt.h"
#include "45.Msinfo32.h"
#include "46.Mspaint.h"
#include "47.Msra.h"
#include "48.Mstsc.h"
#include "49.NAPCLCFG.h"
#include "50.Ncpa.h"
#include "51.Narrator.h"
#include "52.Netplwiz.h"
#include "53.Netstat.h"
#include "54.Notepad.h"
#include "55.Nslookup.h"
#include "56.Odbcad32.h"
#include "57.OptionalFeatures.h"
#include "58.Osk.h"
#include "59.Perfmon.h"
#include "60.Printmanagement.h"
#include "61.Powercfg.h"
#include "62.Rasphone.h"
#include "63.Recdisc.h"
#include "64.Resmon.h"
#include "65.Rstrui.h"
#include "66.Regedit.h"
#include "67.Regedt32.h"
#include "68.Rsop.h"
#include "69.Sdclt.h"
#include "70.Secpol.h"
#include "71.Services.h"
#include "72.Sysedit.h"
#include "73.Ciadv.h"
#include "74.Shrpubw.h"
#include "75.Sndvol32.h"
#include "76.Taskmgr.h"
#include "77.Packager.h"
#include "78.Winver.h"
#include "79.Clipbrd.h"
#include "80.Sndrec32.h"
#include "81.Tree.h"
#include "82.Dir.h"
#include "83.Delet_C.h"

using namespace std;

int main()
{
	system("title Windows-Command_Set");
	system("color 37");
	system("mode con cols=100 lines=45");
	Command_Set Menu;
	int select = 0;
	while (1)
	{
		Menu.Commadn_Menu();
		cin >> select;
		switch (select)
		{
		case 0:
			Menu.Exit();
			break;
		case 1:
		{
			Command_Set *command = new System_Info;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 2:
		{
			Command_Set *command = new Ipconfig;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 3:
		{
			Command_Set *command = new Appwiz;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 4:
		{
			Command_Set *command = new Control;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 5:
		{
			Command_Set *command = new Cleanmgr;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 6:
		{
			Command_Set *command = new Certmgr;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 7:
		{
			Command_Set *command = new Charmap;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 8:
		{
			Command_Set *command = new Shutdonw;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 9:
		{
			Command_Set *command = new Lock;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 10:
		{
			Command_Set *command = new Colorcpl;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 11:
		{
			Command_Set *command = new Compmgmt;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 12:
		{
			Command_Set *command = new Credwiz;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 13:
		{
			Command_Set *command = new Comexp;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 14:
		{
			Command_Set *command = new Dccw;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 15:
		{
			Command_Set *command = new Devmgmt;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 16:
		{
			Command_Set *command = new Desk_Cpl;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 17:
		{
			Command_Set *command = new Dfrgui;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 18:
		{
			Command_Set *command = new Dfrg_Win7;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 19:
		{
			Command_Set *command = new Dialer;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 20:
		{
			Command_Set *command = new Diskmgmt;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 21:
		{
			Command_Set *command = new DVDplay;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 22:
		{
			Command_Set *command = new Dxdiag;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 23:
		{
			Command_Set *command = new Eudcedit;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 24:
		{
			Command_Set *command = new Eventvwr;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 25:
		{
			Command_Set *command = new Explorer;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 26:
		{
			Command_Set *command = new Firewall;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 27:
		{
			Command_Set *command = new FXSCOVER;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 28:
		{
			Command_Set *command = new Fsmgmt;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 29:
		{
			Command_Set *command = new Gpedit;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 30:
		{
			Command_Set *command = new Hdwwiz;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 31:
		{
			Command_Set *command = new Inetcpl;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 32:
		{
			Command_Set *command = new Intl;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 33:
		{
			Command_Set *command = new Iexpress;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 34:
		{
			Command_Set *command = new Joy;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 35:
		{
			Command_Set *command = new Logoff;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 36:
		{
			Command_Set *command = new Lusrmgr;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 37:
		{
			Command_Set *command = new Lpksetup;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 38:
		{
			Command_Set *command = new Magnify;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 39:
		{
			Command_Set *command = new Mouse;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 40:
		{
			Command_Set *command = new Mmsys;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 41:
		{
			Command_Set *command = new MdSched;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 42:
		{
			Command_Set *command = new Mmc;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 43:
		{
			Command_Set *command = new Msconfig;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 44:
		{
			Command_Set *command = new Msdt;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 45:
		{
			Command_Set *command = new Msinfo32;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 46:
		{
			Command_Set *command = new Mspaint;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 47:
		{
			Command_Set *command = new Msra;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 48:
		{
			Command_Set *command = new Mstsc;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 49:
		{
			Command_Set *command = new NAPCLCFG;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 50:
		{
			Command_Set *command = new Ncpa;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 51:
		{
			Command_Set *command = new Narrator;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 52:
		{
			Command_Set *command = new Netplwiz;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 53:
		{
			Command_Set *command = new Netstat;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 54:
		{
			Command_Set *command = new Notepad;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 55:
		{
			Command_Set *command = new Nslookup;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 56:
		{
			Command_Set *command = new Odbcad32;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 57:
		{
			Command_Set *command = new OptionalFeatures;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 58:
		{
			Command_Set *command = new Osk;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 59:
		{
			Command_Set *command = new Perfmon;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 60:
		{
			Command_Set *command = new Printmanagement;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 61:
		{
			Command_Set *command = new Powercfg;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 62:
		{
			Command_Set *command = new Rasphone;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 63:
		{
			Command_Set *command = new Recdisc;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 64:
		{
			Command_Set *command = new Resmon;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 65:
		{
			Command_Set *command = new Rstrui;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 66:
		{
			Command_Set *command = new Regedit;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 67:
		{
			Command_Set *command = new Regedt32;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 68:
		{
			Command_Set *command = new Rsop;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 69:
		{
			Command_Set *command = new Sdclt;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 70:
		{
			Command_Set *command = new Secpol;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 71:
		{
			Command_Set *command = new Services;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 72:
		{
			Command_Set *command = new Sysedit;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 73:
		{
			Command_Set *command = new Ciadv;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 74:
		{
			Command_Set *command = new Shrpubw;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 75:
		{
			Command_Set *command = new Sndvol32;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 76:
		{
			Command_Set *command = new Taskmgr;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 77:
		{
			Command_Set *command = new Packager;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 78:
		{
			Command_Set *command = new Winver;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 79:
		{
			Command_Set *command = new Clipbrd;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 80:
		{
			Command_Set *command = new Sndrec32;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 81:
		{
			Command_Set *command = new Tree;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 82:
		{
			Command_Set *command = new Dir;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		case 83:
		{
			Command_Set *command = new Delet_C;
			command->Command_Realize();
			delete command;
			command = NULL;
			break;
		}
		default:
		{
			cout << "ÄúµÄÊäÈëÓÐÎó" << endl;
			system("pause");
			system("cls");
			break;
		}
		}
	}



	system("pause");
	return 0;
}