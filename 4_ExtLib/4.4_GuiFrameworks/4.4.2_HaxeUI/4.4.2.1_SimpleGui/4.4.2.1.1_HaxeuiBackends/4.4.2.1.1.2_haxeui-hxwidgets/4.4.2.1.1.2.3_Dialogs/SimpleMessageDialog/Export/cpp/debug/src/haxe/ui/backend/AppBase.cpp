// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_73d5db1815414fb9
#define INCLUDED_73d5db1815414fb9
#include "wx/settings.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AppBase
#include <haxe/ui/backend/AppBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TimerBase
#include <haxe/ui/backend/TimerBase.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Properties
#include <haxe/ui/util/Properties.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Timer
#include <haxe/ui/util/Timer.h>
#endif
#ifndef INCLUDED_hx_widgets_App
#include <hx/widgets/App.h>
#endif
#ifndef INCLUDED_hx_widgets_AppConsole
#include <hx/widgets/AppConsole.h>
#endif
#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif
#ifndef INCLUDED_hx_widgets_EventFilter
#include <hx/widgets/EventFilter.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Frame
#include <hx/widgets/Frame.h>
#endif
#ifndef INCLUDED_hx_widgets_NonOwnedWindow
#include <hx/widgets/NonOwnedWindow.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_PlatformInfo
#include <hx/widgets/PlatformInfo.h>
#endif
#ifndef INCLUDED_hx_widgets_SystemOptions
#include <hx/widgets/SystemOptions.h>
#endif
#ifndef INCLUDED_hx_widgets_SystemSettings
#include <hx/widgets/SystemSettings.h>
#endif
#ifndef INCLUDED_hx_widgets_TopLevelWindow
#include <hx/widgets/TopLevelWindow.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_wx_widgets_EventType
#include <wx/widgets/EventType.h>
#endif
#ifndef INCLUDED_wx_widgets_styles_FrameStyle
#include <wx/widgets/styles/FrameStyle.h>
#endif
#ifndef INCLUDED_wx_widgets_styles_WindowStyle
#include <wx/widgets/styles/WindowStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7f106e4dd2e029f6_17_new,"haxe.ui.backend.AppBase","new",0x7f013bf8,"haxe.ui.backend.AppBase.new","haxe/ui/backend/AppBase.hx",17,0xff9a3459)
HX_LOCAL_STACK_FRAME(_hx_pos_7f106e4dd2e029f6_26_build,"haxe.ui.backend.AppBase","build",0x507c5cc6,"haxe.ui.backend.AppBase.build","haxe/ui/backend/AppBase.hx",26,0xff9a3459)
HX_LOCAL_STACK_FRAME(_hx_pos_7f106e4dd2e029f6_64_init,"haxe.ui.backend.AppBase","init",0x9ecbf478,"haxe.ui.backend.AppBase.init","haxe/ui/backend/AppBase.hx",64,0xff9a3459)
HX_LOCAL_STACK_FRAME(_hx_pos_7f106e4dd2e029f6_40_init,"haxe.ui.backend.AppBase","init",0x9ecbf478,"haxe.ui.backend.AppBase.init","haxe/ui/backend/AppBase.hx",40,0xff9a3459)
HX_LOCAL_STACK_FRAME(_hx_pos_7f106e4dd2e029f6_71_getToolkitInit,"haxe.ui.backend.AppBase","getToolkitInit",0x9f945560,"haxe.ui.backend.AppBase.getToolkitInit","haxe/ui/backend/AppBase.hx",71,0xff9a3459)
HX_LOCAL_STACK_FRAME(_hx_pos_7f106e4dd2e029f6_77_start,"haxe.ui.backend.AppBase","start",0x199cf5fa,"haxe.ui.backend.AppBase.start","haxe/ui/backend/AppBase.hx",77,0xff9a3459)
HX_LOCAL_STACK_FRAME(_hx_pos_7f106e4dd2e029f6_79_start,"haxe.ui.backend.AppBase","start",0x199cf5fa,"haxe.ui.backend.AppBase.start","haxe/ui/backend/AppBase.hx",79,0xff9a3459)
HX_LOCAL_STACK_FRAME(_hx_pos_7f106e4dd2e029f6_98_buildPreloadList,"haxe.ui.backend.AppBase","buildPreloadList",0x46b42da1,"haxe.ui.backend.AppBase.buildPreloadList","haxe/ui/backend/AppBase.hx",98,0xff9a3459)
namespace haxe{
namespace ui{
namespace backend{

void AppBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7f106e4dd2e029f6_17_new)
HXLINE(  76)		this->_timer = null();
HXLINE(  23)		::hx::widgets::SystemOptions_obj::setOption(HX_("msw.window.no-clip-children",71,22,47,82),(int)1);
            	}

Dynamic AppBase_obj::__CreateEmpty() { return new AppBase_obj; }

void *AppBase_obj::_hx_vtable = 0;

Dynamic AppBase_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AppBase_obj > _hx_result = new AppBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AppBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6371b558;
}

void AppBase_obj::build(){
            	HX_GC_STACKFRAME(&_hx_pos_7f106e4dd2e029f6_26_build)
HXLINE(  27)		this->_app =  ::hx::widgets::App_obj::__alloc( HX_CTX ,null());
HXLINE(  28)		this->_app->init();
HXLINE(  30)		 ::hx::widgets::PlatformInfo platform =  ::hx::widgets::PlatformInfo_obj::__alloc( HX_CTX );
HXLINE(  31)		int style = ::wx::widgets::styles::FrameStyle_obj::DEFAULT_FRAME_STYLE;
HXLINE(  32)		int style1 = ((int)((int)::wx::widgets::styles::WindowStyle_obj::NO_FULL_REPAINT_ON_RESIZE | (int)::wx::widgets::styles::WindowStyle_obj::CLIP_CHILDREN) | (int)::wx::widgets::styles::FrameStyle_obj::DEFAULT_FRAME_STYLE);
HXLINE(  34)		this->_frame =  ::hx::widgets::Frame_obj::__alloc( HX_CTX ,null(),::haxe::ui::Toolkit_obj::backendProperties->getProp(HX_("haxe.ui.hxwidgets.frame.title",76,d6,8a,78),HX_("",00,00,00,00)),style1,null());
HXLINE(  35)		bool _hx_tmp = platform->get_isWindows();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AppBase_obj,build,(void))

void AppBase_obj::init( ::Dynamic onReady, ::Dynamic onEnd){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::haxe::ui::backend::AppBase,_gthis) HXARGC(1)
            		void _hx_run( ::hx::widgets::Event e){
            			HX_STACKFRAME(&_hx_pos_7f106e4dd2e029f6_64_init)
HXLINE(  64)			_gthis->_frame->destroy();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_7f106e4dd2e029f6_40_init)
HXDLIN(  40)		 ::haxe::ui::backend::AppBase _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  41)		this->_onEnd = onEnd;
HXLINE(  42)		int frameWidth = ::haxe::ui::Toolkit_obj::backendProperties->getPropInt(HX_("haxe.ui.hxwidgets.frame.width",e4,76,b2,32),(int)800);
HXLINE(  43)		int frameHeight = ::haxe::ui::Toolkit_obj::backendProperties->getPropInt(HX_("haxe.ui.hxwidgets.frame.height",49,09,c5,df),(int)600);
HXLINE(  45)		int frameLeft = (int)0;
HXLINE(  46)		if ((::haxe::ui::Toolkit_obj::backendProperties->getProp(HX_("haxe.ui.hxwidgets.frame.left",e9,8c,54,8f),null()) == HX_("center",d5,25,db,05))) {
HXLINE(  47)			Float frameLeft1 = ((Float)::hx::widgets::SystemSettings_obj::getMetric(wxSYS_SCREEN_X,null()) / (Float)(int)2);
HXDLIN(  47)			frameLeft = ::Std_obj::_hx_int((frameLeft1 - ((Float)frameWidth / (Float)(int)2)));
            		}
            		else {
HXLINE(  49)			frameLeft = ::haxe::ui::Toolkit_obj::backendProperties->getPropInt(HX_("haxe.ui.hxwidgets.frame.left",e9,8c,54,8f),(int)0);
            		}
HXLINE(  52)		int frameTop = (int)0;
HXLINE(  53)		if ((::haxe::ui::Toolkit_obj::backendProperties->getProp(HX_("haxe.ui.hxwidgets.frame.top",f3,93,7b,f7),null()) == HX_("center",d5,25,db,05))) {
HXLINE(  54)			Float frameTop1 = ((Float)::hx::widgets::SystemSettings_obj::getMetric(wxSYS_SCREEN_Y,null()) / (Float)(int)2);
HXDLIN(  54)			frameTop = ::Std_obj::_hx_int((frameTop1 - ((Float)frameHeight / (Float)(int)2)));
            		}
            		else {
HXLINE(  56)			frameTop = ::haxe::ui::Toolkit_obj::backendProperties->getPropInt(HX_("haxe.ui.hxwidgets.frame.top",f3,93,7b,f7),(int)0);
            		}
HXLINE(  59)		this->_frame->freeze();
HXLINE(  60)		this->_frame->resize(frameWidth,frameHeight);
HXLINE(  61)		this->_frame->move(frameLeft,frameTop);
HXLINE(  63)		this->_frame->bind(::wx::widgets::EventType_obj::CLOSE_WINDOW, ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE(  67)		onReady();
            	}


HX_DEFINE_DYNAMIC_FUNC2(AppBase_obj,init,(void))

 ::Dynamic AppBase_obj::getToolkitInit(){
            	HX_STACKFRAME(&_hx_pos_7f106e4dd2e029f6_71_getToolkitInit)
HXDLIN(  71)		return  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("frame",2d,78,83,06),this->_frame));
            	}


HX_DEFINE_DYNAMIC_FUNC0(AppBase_obj,getToolkitInit,return )

void AppBase_obj::start(){
            	HX_STACKFRAME(&_hx_pos_7f106e4dd2e029f6_77_start)
HXDLIN(  77)		 ::haxe::ui::backend::AppBase _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  78)		if ((::haxe::ui::Toolkit_obj::backendProperties->getPropBool(HX_("haxe.ui.hxwidgets.frame.fit",2f,ef,70,f7),false) == true)) {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::haxe::ui::backend::AppBase,_gthis) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_7f106e4dd2e029f6_79_start)
HXLINE(  80)				_gthis->_frame->fit();
HXLINE(  81)				_gthis->_frame->center();
HXLINE(  82)				_gthis->_frame->show(true);
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE(  79)			::haxe::ui::Toolkit_obj::callLater( ::Dynamic(new _hx_Closure_0(_gthis)));
            		}
            		else {
HXLINE(  85)			this->_frame->show(true);
HXLINE(  86)			this->_frame->center();
            		}
HXLINE(  88)		this->_frame->thaw();
HXLINE(  89)		this->_app->run();
HXLINE(  91)		this->_app->exit();
HXLINE(  92)		if (hx::IsNotNull( this->_onEnd )) {
HXLINE(  93)			this->_onEnd();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(AppBase_obj,start,(void))

::Array< ::Dynamic> AppBase_obj::buildPreloadList(){
            	HX_STACKFRAME(&_hx_pos_7f106e4dd2e029f6_98_buildPreloadList)
HXDLIN(  98)		return ::Array_obj< ::Dynamic>::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AppBase_obj,buildPreloadList,return )


hx::ObjectPtr< AppBase_obj > AppBase_obj::__new() {
	hx::ObjectPtr< AppBase_obj > __this = new AppBase_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< AppBase_obj > AppBase_obj::__alloc(hx::Ctx *_hx_ctx) {
	AppBase_obj *__this = (AppBase_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AppBase_obj), true, "haxe.ui.backend.AppBase"));
	*(void **)__this = AppBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AppBase_obj::AppBase_obj()
{
}

void AppBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AppBase);
	HX_MARK_MEMBER_NAME(_app,"_app");
	HX_MARK_MEMBER_NAME(_frame,"_frame");
	HX_MARK_MEMBER_NAME(_onEnd,"_onEnd");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_END_CLASS();
}

void AppBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_app,"_app");
	HX_VISIT_MEMBER_NAME(_frame,"_frame");
	HX_VISIT_MEMBER_NAME(_onEnd,"_onEnd");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
}

hx::Val AppBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_app") ) { return hx::Val( _app ); }
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"build") ) { return hx::Val( build_dyn() ); }
		if (HX_FIELD_EQ(inName,"start") ) { return hx::Val( start_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_frame") ) { return hx::Val( _frame ); }
		if (HX_FIELD_EQ(inName,"_onEnd") ) { return hx::Val( _onEnd ); }
		if (HX_FIELD_EQ(inName,"_timer") ) { return hx::Val( _timer ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getToolkitInit") ) { return hx::Val( getToolkitInit_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"buildPreloadList") ) { return hx::Val( buildPreloadList_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val AppBase_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_app") ) { _app=inValue.Cast<  ::hx::widgets::App >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_frame") ) { _frame=inValue.Cast<  ::hx::widgets::Frame >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onEnd") ) { _onEnd=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast<  ::haxe::ui::util::Timer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AppBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_app","\xa2","\x41","\x15","\x3f"));
	outFields->push(HX_HCSTRING("_frame","\x6e","\xbf","\x6a","\x02"));
	outFields->push(HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo AppBase_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::hx::widgets::App*/ ,(int)offsetof(AppBase_obj,_app),HX_HCSTRING("_app","\xa2","\x41","\x15","\x3f")},
	{hx::fsObject /*::hx::widgets::Frame*/ ,(int)offsetof(AppBase_obj,_frame),HX_HCSTRING("_frame","\x6e","\xbf","\x6a","\x02")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AppBase_obj,_onEnd),HX_HCSTRING("_onEnd","\x3d","\xdf","\x4b","\x2e")},
	{hx::fsObject /*::haxe::ui::util::Timer*/ ,(int)offsetof(AppBase_obj,_timer),HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AppBase_obj_sStaticStorageInfo = 0;
#endif

static ::String AppBase_obj_sMemberFields[] = {
	HX_HCSTRING("_app","\xa2","\x41","\x15","\x3f"),
	HX_HCSTRING("_frame","\x6e","\xbf","\x6a","\x02"),
	HX_HCSTRING("_onEnd","\x3d","\xdf","\x4b","\x2e"),
	HX_HCSTRING("build","\x2e","\xdb","\xea","\xba"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("getToolkitInit","\xf8","\xc9","\xa6","\x3c"),
	HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("buildPreloadList","\x39","\xf8","\xbe","\x24"),
	::String(null()) };

static void AppBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AppBase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AppBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AppBase_obj::__mClass,"__mClass");
};

#endif

hx::Class AppBase_obj::__mClass;

void AppBase_obj::__register()
{
	hx::Object *dummy = new AppBase_obj;
	AppBase_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.AppBase","\x06","\x20","\x4e","\xda");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AppBase_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AppBase_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AppBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AppBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AppBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AppBase_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
