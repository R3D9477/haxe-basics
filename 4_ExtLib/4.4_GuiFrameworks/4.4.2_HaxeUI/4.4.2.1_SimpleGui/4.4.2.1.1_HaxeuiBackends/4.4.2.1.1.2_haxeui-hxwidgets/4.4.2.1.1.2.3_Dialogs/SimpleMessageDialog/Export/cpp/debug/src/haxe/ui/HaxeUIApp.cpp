// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ui_HaxeUIApp
#include <haxe/ui/HaxeUIApp.h>
#endif
#ifndef INCLUDED_haxe_ui_Preloader
#include <haxe/ui/Preloader.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_ToolkitAssets
#include <haxe/ui/ToolkitAssets.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AppBase
#include <haxe/ui/backend/AppBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <haxe/ui/backend/AssetsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#include <haxe/ui/core/IComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Properties
#include <haxe/ui/util/Properties.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0c75ee732cc4286c_11_new,"haxe.ui.HaxeUIApp","new",0x59e0c2c7,"haxe.ui.HaxeUIApp.new","haxe/ui/HaxeUIApp.hx",11,0x68089929)
HX_LOCAL_STACK_FRAME(_hx_pos_0c75ee732cc4286c_18_ready,"haxe.ui.HaxeUIApp","ready",0x73363a8a,"haxe.ui.HaxeUIApp.ready","haxe/ui/HaxeUIApp.hx",18,0x68089929)
HX_LOCAL_STACK_FRAME(_hx_pos_0c75ee732cc4286c_21_init,"haxe.ui.HaxeUIApp","init",0x478262c9,"haxe.ui.HaxeUIApp.init","haxe/ui/HaxeUIApp.hx",21,0x68089929)
HX_LOCAL_STACK_FRAME(_hx_pos_0c75ee732cc4286c_46_handlePreload,"haxe.ui.HaxeUIApp","handlePreload",0xa924ca28,"haxe.ui.HaxeUIApp.handlePreload","haxe/ui/HaxeUIApp.hx",46,0x68089929)
HX_LOCAL_STACK_FRAME(_hx_pos_0c75ee732cc4286c_58_handlePreload,"haxe.ui.HaxeUIApp","handlePreload",0xa924ca28,"haxe.ui.HaxeUIApp.handlePreload","haxe/ui/HaxeUIApp.hx",58,0x68089929)
HX_LOCAL_STACK_FRAME(_hx_pos_0c75ee732cc4286c_65_handlePreload,"haxe.ui.HaxeUIApp","handlePreload",0xa924ca28,"haxe.ui.HaxeUIApp.handlePreload","haxe/ui/HaxeUIApp.hx",65,0x68089929)
HX_LOCAL_STACK_FRAME(_hx_pos_0c75ee732cc4286c_81_addComponent,"haxe.ui.HaxeUIApp","addComponent",0xe6e31b15,"haxe.ui.HaxeUIApp.addComponent","haxe/ui/HaxeUIApp.hx",81,0x68089929)
HX_LOCAL_STACK_FRAME(_hx_pos_0c75ee732cc4286c_85_removeComponent,"haxe.ui.HaxeUIApp","removeComponent",0xd314fcc0,"haxe.ui.HaxeUIApp.removeComponent","haxe/ui/HaxeUIApp.hx",85,0x68089929)
HX_LOCAL_STACK_FRAME(_hx_pos_0c75ee732cc4286c_89_setComponentIndex,"haxe.ui.HaxeUIApp","setComponentIndex",0xe7ca8cfe,"haxe.ui.HaxeUIApp.setComponentIndex","haxe/ui/HaxeUIApp.hx",89,0x68089929)
HX_LOCAL_STACK_FRAME(_hx_pos_0c75ee732cc4286c_92_buildPreloadList,"haxe.ui.HaxeUIApp","buildPreloadList",0xf03f5172,"haxe.ui.HaxeUIApp.buildPreloadList","haxe/ui/HaxeUIApp.hx",92,0x68089929)
namespace haxe{
namespace ui{

void HaxeUIApp_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0c75ee732cc4286c_11_new)
HXLINE(  12)		super::__construct();
HXLINE(  13)		::haxe::ui::Toolkit_obj::build();
HXLINE(  14)		this->build();
            	}

Dynamic HaxeUIApp_obj::__CreateEmpty() { return new HaxeUIApp_obj; }

void *HaxeUIApp_obj::_hx_vtable = 0;

Dynamic HaxeUIApp_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HaxeUIApp_obj > _hx_result = new HaxeUIApp_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HaxeUIApp_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6371b558) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x6371b558;
	} else {
		return inClassId==(int)0x771fbbed;
	}
}

void HaxeUIApp_obj::ready( ::Dynamic onReady, ::Dynamic onEnd){
            	HX_STACKFRAME(&_hx_pos_0c75ee732cc4286c_18_ready)
HXDLIN(  18)		this->init(onReady,onEnd);
            	}


HX_DEFINE_DYNAMIC_FUNC2(HaxeUIApp_obj,ready,(void))

void HaxeUIApp_obj::init( ::Dynamic onReady, ::Dynamic onEnd){
            	HX_STACKFRAME(&_hx_pos_0c75ee732cc4286c_21_init)
HXLINE(  22)		bool _hx_tmp;
HXDLIN(  22)		if (hx::IsNotNull( ::haxe::ui::Toolkit_obj::backendProperties->getProp(HX_("haxe.ui.theme",b7,e9,0c,13),null()) )) {
HXLINE(  22)			_hx_tmp = (::haxe::ui::Toolkit_obj::theme == HX_("default",c1,d8,c3,9b));
            		}
            		else {
HXLINE(  22)			_hx_tmp = false;
            		}
HXDLIN(  22)		if (_hx_tmp) {
HXLINE(  23)			::haxe::ui::Toolkit_obj::theme = ::haxe::ui::Toolkit_obj::backendProperties->getProp(HX_("haxe.ui.theme",b7,e9,0c,13),null());
            		}
HXLINE(  26)		::haxe::ui::Toolkit_obj::init(this->getToolkitInit());
HXLINE(  28)		::Array< ::Dynamic> preloadList = null();
HXLINE(  29)		 ::haxe::ui::Preloader preloader = null();
HXLINE(  43)		this->handlePreload(preloadList,onReady,onEnd,preloader);
            	}


void HaxeUIApp_obj::handlePreload(::Array< ::Dynamic> list, ::Dynamic onReady, ::Dynamic onEnd, ::haxe::ui::Preloader preloader){
            	HX_STACKFRAME(&_hx_pos_0c75ee732cc4286c_46_handlePreload)
HXDLIN(  46)		 ::haxe::ui::HaxeUIApp _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  47)		bool _hx_tmp;
HXDLIN(  47)		if (hx::IsNotNull( list )) {
HXLINE(  47)			_hx_tmp = (list->length == (int)0);
            		}
            		else {
HXLINE(  47)			_hx_tmp = true;
            		}
HXDLIN(  47)		if (_hx_tmp) {
HXLINE(  48)			if (hx::IsNotNull( preloader )) {
HXLINE(  49)				preloader->complete();
            			}
HXLINE(  51)			this->super::init(onReady,onEnd);
HXLINE(  52)			return;
            		}
HXLINE(  55)		 ::Dynamic item = list->shift();
HXLINE(  56)		{
HXLINE(  56)			::String _g = ( (::String)(item->__Field(HX_("type",ba,f2,08,4d),hx::paccDynamic)) );
HXDLIN(  56)			::String _hx_switch_0 = _g;
            			if (  (_hx_switch_0==HX_("font",cf,5d,c0,43)) ){
            				HX_BEGIN_LOCAL_FUNC_S5(hx::LocalFunc,_hx_Closure_0, ::haxe::ui::HaxeUIApp,_gthis, ::Dynamic,onEnd,::Array< ::Dynamic>,list, ::haxe::ui::Preloader,preloader, ::Dynamic,onReady) HXARGC(1)
            				void _hx_run( ::Dynamic f){
            					HX_STACKFRAME(&_hx_pos_0c75ee732cc4286c_58_handlePreload)
HXLINE(  59)					if (hx::IsNotNull( preloader )) {
HXLINE(  60)						preloader->increment();
            					}
HXLINE(  62)					_gthis->handlePreload(list,onReady,onEnd,preloader);
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  58)				::haxe::ui::ToolkitAssets_obj::get_instance()->getFont(( (::String)(item->__Field(HX_("resourceId",49,ec,0b,41),hx::paccDynamic)) ), ::Dynamic(new _hx_Closure_0(_gthis,onEnd,list,preloader,onReady)),null());
HXDLIN(  58)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("image",5b,1f,69,bd)) ){
            				HX_BEGIN_LOCAL_FUNC_S5(hx::LocalFunc,_hx_Closure_1, ::haxe::ui::HaxeUIApp,_gthis, ::Dynamic,onEnd,::Array< ::Dynamic>,list, ::haxe::ui::Preloader,preloader, ::Dynamic,onReady) HXARGC(1)
            				void _hx_run( ::Dynamic i){
            					HX_STACKFRAME(&_hx_pos_0c75ee732cc4286c_65_handlePreload)
HXLINE(  66)					if (hx::IsNotNull( preloader )) {
HXLINE(  67)						preloader->increment();
            					}
HXLINE(  69)					_gthis->handlePreload(list,onReady,onEnd,preloader);
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  65)				::haxe::ui::ToolkitAssets_obj::get_instance()->getImage(( (::String)(item->__Field(HX_("resourceId",49,ec,0b,41),hx::paccDynamic)) ), ::Dynamic(new _hx_Closure_1(_gthis,onEnd,list,preloader,onReady)),null());
HXDLIN(  65)				goto _hx_goto_3;
            			}
            			/* default */{
HXLINE(  72)				 ::Dynamic _hx_tmp1 = ::haxe::Log_obj::trace;
HXDLIN(  72)				_hx_tmp1(((HX_("WARNING: unknown type to preload \"",14,b4,93,f2) + ( (::String)(item->__Field(HX_("type",ba,f2,08,4d),hx::paccDynamic)) )) + HX_("\", continuing",fa,5b,57,8a)),hx::SourceInfo(HX_("HaxeUIApp.hx",77,6c,e1,4b),72,HX_("haxe.ui.HaxeUIApp",55,53,f0,4f),HX_("handlePreload",01,31,b8,4d)));
HXLINE(  73)				if (hx::IsNotNull( preloader )) {
HXLINE(  74)					preloader->increment();
            				}
HXLINE(  76)				this->handlePreload(list,onReady,onEnd,preloader);
            			}
            			_hx_goto_3:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(HaxeUIApp_obj,handlePreload,(void))

void HaxeUIApp_obj::addComponent( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_0c75ee732cc4286c_81_addComponent)
HXDLIN(  81)		::haxe::ui::core::Screen_obj::get_instance()->addComponent(component);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HaxeUIApp_obj,addComponent,(void))

void HaxeUIApp_obj::removeComponent( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_0c75ee732cc4286c_85_removeComponent)
HXDLIN(  85)		::haxe::ui::core::Screen_obj::get_instance()->removeComponent(component);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HaxeUIApp_obj,removeComponent,(void))

void HaxeUIApp_obj::setComponentIndex( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_0c75ee732cc4286c_89_setComponentIndex)
HXDLIN(  89)		::haxe::ui::core::Screen_obj::get_instance()->setComponentIndex(child,index);
            	}


HX_DEFINE_DYNAMIC_FUNC2(HaxeUIApp_obj,setComponentIndex,(void))

::Array< ::Dynamic> HaxeUIApp_obj::buildPreloadList(){
            	HX_STACKFRAME(&_hx_pos_0c75ee732cc4286c_92_buildPreloadList)
HXLINE(  93)		::Array< ::Dynamic> list = this->super::buildPreloadList();
HXLINE(  95)		if (hx::IsNull( list )) {
HXLINE(  96)			list = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE(  99)		list = list->concat(::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList);
HXLINE( 101)		return list;
            	}



hx::ObjectPtr< HaxeUIApp_obj > HaxeUIApp_obj::__new() {
	hx::ObjectPtr< HaxeUIApp_obj > __this = new HaxeUIApp_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< HaxeUIApp_obj > HaxeUIApp_obj::__alloc(hx::Ctx *_hx_ctx) {
	HaxeUIApp_obj *__this = (HaxeUIApp_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HaxeUIApp_obj), true, "haxe.ui.HaxeUIApp"));
	*(void **)__this = HaxeUIApp_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HaxeUIApp_obj::HaxeUIApp_obj()
{
}

hx::Val HaxeUIApp_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { return hx::Val( ready_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return hx::Val( addComponent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handlePreload") ) { return hx::Val( handlePreload_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return hx::Val( removeComponent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"buildPreloadList") ) { return hx::Val( buildPreloadList_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setComponentIndex") ) { return hx::Val( setComponentIndex_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *HaxeUIApp_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *HaxeUIApp_obj_sStaticStorageInfo = 0;
#endif

static ::String HaxeUIApp_obj_sMemberFields[] = {
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("handlePreload","\x01","\x31","\xb8","\x4d"),
	HX_HCSTRING("addComponent","\x5c","\x12","\xa8","\x0e"),
	HX_HCSTRING("removeComponent","\xd9","\x8b","\x72","\x50"),
	HX_HCSTRING("setComponentIndex","\x57","\xd4","\xfc","\xa2"),
	HX_HCSTRING("buildPreloadList","\x39","\xf8","\xbe","\x24"),
	::String(null()) };

static void HaxeUIApp_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HaxeUIApp_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HaxeUIApp_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HaxeUIApp_obj::__mClass,"__mClass");
};

#endif

hx::Class HaxeUIApp_obj::__mClass;

void HaxeUIApp_obj::__register()
{
	hx::Object *dummy = new HaxeUIApp_obj;
	HaxeUIApp_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.HaxeUIApp","\x55","\x53","\xf0","\x4f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HaxeUIApp_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HaxeUIApp_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HaxeUIApp_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HaxeUIApp_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HaxeUIApp_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HaxeUIApp_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
