//stamp:198ddd9f960b0e70
/*<------------------------------------------------------------------------------------------------->*/
/*该文件由uiresbuilder生成，请不要手动修改*/
/*<------------------------------------------------------------------------------------------------->*/
#pragma once
#include <res.mgr/snamedvalue.h>
#define ROBJ_IN_CPP \
namespace SOUI \
{\
    const _R R;\
    const _UIRES UIRES;\
}
namespace SOUI
{
	class _UIRES{
		public:
		class _UIDEF{
			public:
			_UIDEF(){
				XML_INIT = _T("UIDEF:XML_INIT");
			}
			const TCHAR * XML_INIT;
		}UIDEF;
		class _values{
			public:
			_values(){
				string = _T("values:string");
				color = _T("values:color");
				skin = _T("values:skin");
			}
			const TCHAR * string;
			const TCHAR * color;
			const TCHAR * skin;
		}values;
		class _LAYOUT{
			public:
			_LAYOUT(){
				XML_MAINWND = _T("LAYOUT:XML_MAINWND");
				XML_WELCOME = _T("LAYOUT:XML_WELCOME");
				XML_AGREEMENT = _T("LAYOUT:XML_AGREEMENT");
				XML_CHOOSE = _T("LAYOUT:XML_CHOOSE");
				XML_INSTALLING = _T("LAYOUT:XML_INSTALLING");
				XML_FINISH = _T("LAYOUT:XML_FINISH");
				XML_MSGBOX = _T("LAYOUT:XML_MSGBOX");
				XML_UNSTALLSTART = _T("LAYOUT:XML_UNSTALLSTART");
				XML_UNSTALLCHOOSE = _T("LAYOUT:XML_UNSTALLCHOOSE");
				XML_UNSTALLING = _T("LAYOUT:XML_UNSTALLING");
				XML_UNSTALLFINISH = _T("LAYOUT:XML_UNSTALLFINISH");
			}
			const TCHAR * XML_MAINWND;
			const TCHAR * XML_WELCOME;
			const TCHAR * XML_AGREEMENT;
			const TCHAR * XML_CHOOSE;
			const TCHAR * XML_INSTALLING;
			const TCHAR * XML_FINISH;
			const TCHAR * XML_MSGBOX;
			const TCHAR * XML_UNSTALLSTART;
			const TCHAR * XML_UNSTALLCHOOSE;
			const TCHAR * XML_UNSTALLING;
			const TCHAR * XML_UNSTALLFINISH;
		}LAYOUT;
		class _IMG_MAIN{
			public:
			_IMG_MAIN(){
				bg = _T("IMG_MAIN:bg");
				welcome_center = _T("IMG_MAIN:welcome_center");
				install = _T("IMG_MAIN:install");
				custom_button = _T("IMG_MAIN:custom_button");
				png_vscroll = _T("IMG_MAIN:png_vscroll");
				prog_bar = _T("IMG_MAIN:prog_bar");
				prog_bkgnd = _T("IMG_MAIN:prog_bkgnd");
				setup1 = _T("IMG_MAIN:setup1");
				setup2 = _T("IMG_MAIN:setup2");
				setup3 = _T("IMG_MAIN:setup3");
				setup4 = _T("IMG_MAIN:setup4");
				setup_tab = _T("IMG_MAIN:setup_tab");
				finish_ads = _T("IMG_MAIN:finish_ads");
				finish_feel = _T("IMG_MAIN:finish_feel");
				finish_finish = _T("IMG_MAIN:finish_finish");
			}
			const TCHAR * bg;
			const TCHAR * welcome_center;
			const TCHAR * install;
			const TCHAR * custom_button;
			const TCHAR * png_vscroll;
			const TCHAR * prog_bar;
			const TCHAR * prog_bkgnd;
			const TCHAR * setup1;
			const TCHAR * setup2;
			const TCHAR * setup3;
			const TCHAR * setup4;
			const TCHAR * setup_tab;
			const TCHAR * finish_ads;
			const TCHAR * finish_feel;
			const TCHAR * finish_finish;
		}IMG_MAIN;
		class _ICON{
			public:
			_ICON(){
				LOGO = _T("ICON:LOGO");
			}
			const TCHAR * LOGO;
		}ICON;
		class _translator{
			public:
			_translator(){
				lang_cn = _T("translator:lang_cn");
			}
			const TCHAR * lang_cn;
		}translator;
		class _rtf{
			public:
			_rtf(){
				rtf_agreement = _T("rtf:rtf_agreement");
			}
			const TCHAR * rtf_agreement;
		}rtf;
	};
	const SNamedID::NAMEDVALUE namedXmlID[]={
		{L"agreement_edit",65545},
		{L"btnSwitch",65570},
		{L"btn_agreement_sure",65546},
		{L"btn_choose_changedir",65548},
		{L"btn_choose_install",65551},
		{L"btn_choose_previous",65552},
		{L"btn_close",65537},
		{L"btn_custominstall",65544},
		{L"btn_finish_feel",65559},
		{L"btn_finish_finish",65560},
		{L"btn_install",65541},
		{L"btn_min",65538},
		{L"btn_unstallchoose_previous",65578},
		{L"btn_unstallchoose_unnstall",65577},
		{L"btn_unstallfinish",65581},
		{L"btn_unstallstart_next",65574},
		{L"button1st",65571},
		{L"button2nd",65572},
		{L"button3rd",65573},
		{L"chk_agreement",65542},
		{L"chk_finish_1",65561},
		{L"chk_finish_2",65562},
		{L"chk_finish_3",65563},
		{L"chk_finish_4",65564},
		{L"chk_finish_5",65565},
		{L"chk_finish_6",65566},
		{L"chk_unstallchoose_delete",65576},
		{L"edit_choose_url",65547},
		{L"edit_unstallchoose_url",65575},
		{L"img_setup1",65554},
		{L"img_setup2",65555},
		{L"img_setup3",65556},
		{L"img_setup4",65557},
		{L"img_welcome_center",65540},
		{L"link_agreement",65543},
		{L"msgicon",65568},
		{L"msgtext",65569},
		{L"msgtitle",65567},
		{L"pg_installing",65558},
		{L"pg_unstalling",65580},
		{L"pg_unstalling_text",65579},
		{L"tab_installing",65553},
		{L"tab_main",65539},
		{L"txt_choose_freespace",65550},
		{L"txt_choose_requiredspace",65549},
		{L"txt_titlename",65536}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			agreement_edit = namedXmlID[0].strName;
			btnSwitch = namedXmlID[1].strName;
			btn_agreement_sure = namedXmlID[2].strName;
			btn_choose_changedir = namedXmlID[3].strName;
			btn_choose_install = namedXmlID[4].strName;
			btn_choose_previous = namedXmlID[5].strName;
			btn_close = namedXmlID[6].strName;
			btn_custominstall = namedXmlID[7].strName;
			btn_finish_feel = namedXmlID[8].strName;
			btn_finish_finish = namedXmlID[9].strName;
			btn_install = namedXmlID[10].strName;
			btn_min = namedXmlID[11].strName;
			btn_unstallchoose_previous = namedXmlID[12].strName;
			btn_unstallchoose_unnstall = namedXmlID[13].strName;
			btn_unstallfinish = namedXmlID[14].strName;
			btn_unstallstart_next = namedXmlID[15].strName;
			button1st = namedXmlID[16].strName;
			button2nd = namedXmlID[17].strName;
			button3rd = namedXmlID[18].strName;
			chk_agreement = namedXmlID[19].strName;
			chk_finish_1 = namedXmlID[20].strName;
			chk_finish_2 = namedXmlID[21].strName;
			chk_finish_3 = namedXmlID[22].strName;
			chk_finish_4 = namedXmlID[23].strName;
			chk_finish_5 = namedXmlID[24].strName;
			chk_finish_6 = namedXmlID[25].strName;
			chk_unstallchoose_delete = namedXmlID[26].strName;
			edit_choose_url = namedXmlID[27].strName;
			edit_unstallchoose_url = namedXmlID[28].strName;
			img_setup1 = namedXmlID[29].strName;
			img_setup2 = namedXmlID[30].strName;
			img_setup3 = namedXmlID[31].strName;
			img_setup4 = namedXmlID[32].strName;
			img_welcome_center = namedXmlID[33].strName;
			link_agreement = namedXmlID[34].strName;
			msgicon = namedXmlID[35].strName;
			msgtext = namedXmlID[36].strName;
			msgtitle = namedXmlID[37].strName;
			pg_installing = namedXmlID[38].strName;
			pg_unstalling = namedXmlID[39].strName;
			pg_unstalling_text = namedXmlID[40].strName;
			tab_installing = namedXmlID[41].strName;
			tab_main = namedXmlID[42].strName;
			txt_choose_freespace = namedXmlID[43].strName;
			txt_choose_requiredspace = namedXmlID[44].strName;
			txt_titlename = namedXmlID[45].strName;
		}
		 const wchar_t * agreement_edit;
		 const wchar_t * btnSwitch;
		 const wchar_t * btn_agreement_sure;
		 const wchar_t * btn_choose_changedir;
		 const wchar_t * btn_choose_install;
		 const wchar_t * btn_choose_previous;
		 const wchar_t * btn_close;
		 const wchar_t * btn_custominstall;
		 const wchar_t * btn_finish_feel;
		 const wchar_t * btn_finish_finish;
		 const wchar_t * btn_install;
		 const wchar_t * btn_min;
		 const wchar_t * btn_unstallchoose_previous;
		 const wchar_t * btn_unstallchoose_unnstall;
		 const wchar_t * btn_unstallfinish;
		 const wchar_t * btn_unstallstart_next;
		 const wchar_t * button1st;
		 const wchar_t * button2nd;
		 const wchar_t * button3rd;
		 const wchar_t * chk_agreement;
		 const wchar_t * chk_finish_1;
		 const wchar_t * chk_finish_2;
		 const wchar_t * chk_finish_3;
		 const wchar_t * chk_finish_4;
		 const wchar_t * chk_finish_5;
		 const wchar_t * chk_finish_6;
		 const wchar_t * chk_unstallchoose_delete;
		 const wchar_t * edit_choose_url;
		 const wchar_t * edit_unstallchoose_url;
		 const wchar_t * img_setup1;
		 const wchar_t * img_setup2;
		 const wchar_t * img_setup3;
		 const wchar_t * img_setup4;
		 const wchar_t * img_welcome_center;
		 const wchar_t * link_agreement;
		 const wchar_t * msgicon;
		 const wchar_t * msgtext;
		 const wchar_t * msgtitle;
		 const wchar_t * pg_installing;
		 const wchar_t * pg_unstalling;
		 const wchar_t * pg_unstalling_text;
		 const wchar_t * tab_installing;
		 const wchar_t * tab_main;
		 const wchar_t * txt_choose_freespace;
		 const wchar_t * txt_choose_requiredspace;
		 const wchar_t * txt_titlename;
		}name;

		class _id{
		public:
		const static int agreement_edit	=	65545;
		const static int btnSwitch	=	65570;
		const static int btn_agreement_sure	=	65546;
		const static int btn_choose_changedir	=	65548;
		const static int btn_choose_install	=	65551;
		const static int btn_choose_previous	=	65552;
		const static int btn_close	=	65537;
		const static int btn_custominstall	=	65544;
		const static int btn_finish_feel	=	65559;
		const static int btn_finish_finish	=	65560;
		const static int btn_install	=	65541;
		const static int btn_min	=	65538;
		const static int btn_unstallchoose_previous	=	65578;
		const static int btn_unstallchoose_unnstall	=	65577;
		const static int btn_unstallfinish	=	65581;
		const static int btn_unstallstart_next	=	65574;
		const static int button1st	=	65571;
		const static int button2nd	=	65572;
		const static int button3rd	=	65573;
		const static int chk_agreement	=	65542;
		const static int chk_finish_1	=	65561;
		const static int chk_finish_2	=	65562;
		const static int chk_finish_3	=	65563;
		const static int chk_finish_4	=	65564;
		const static int chk_finish_5	=	65565;
		const static int chk_finish_6	=	65566;
		const static int chk_unstallchoose_delete	=	65576;
		const static int edit_choose_url	=	65547;
		const static int edit_unstallchoose_url	=	65575;
		const static int img_setup1	=	65554;
		const static int img_setup2	=	65555;
		const static int img_setup3	=	65556;
		const static int img_setup4	=	65557;
		const static int img_welcome_center	=	65540;
		const static int link_agreement	=	65543;
		const static int msgicon	=	65568;
		const static int msgtext	=	65569;
		const static int msgtitle	=	65567;
		const static int pg_installing	=	65558;
		const static int pg_unstalling	=	65580;
		const static int pg_unstalling_text	=	65579;
		const static int tab_installing	=	65553;
		const static int tab_main	=	65539;
		const static int txt_choose_freespace	=	65550;
		const static int txt_choose_requiredspace	=	65549;
		const static int txt_titlename	=	65536;
		}id;

		class _string{
		public:
		}string;

		class _color{
		public:
		const static int blue	=	0;
		const static int gray	=	1;
		const static int green	=	2;
		const static int red	=	3;
		const static int white	=	4;
		}color;

	};

#ifdef R_IN_CPP
	 extern const _R R;
	 extern const _UIRES UIRES;
#else
	 extern const __declspec(selectany) _R & R = _R();
	 extern const __declspec(selectany) _UIRES & UIRES = _UIRES();
#endif//R_IN_CPP
}
