// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
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
#ifndef INCLUDED_haxe_ui_focus_FocusInfo
#include <haxe/ui/focus/FocusInfo.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_FocusManager
#include <haxe/ui/focus/FocusManager.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e13a986d53384ba3_29_new,"haxe.ui.focus.FocusManager","new",0xef6cfaef,"haxe.ui.focus.FocusManager.new","haxe/ui/focus/FocusManager.hx",29,0xe315a5e0)
HX_LOCAL_STACK_FRAME(_hx_pos_e13a986d53384ba3_35_pushView,"haxe.ui.focus.FocusManager","pushView",0xfdb79470,"haxe.ui.focus.FocusManager.pushView","haxe/ui/focus/FocusManager.hx",35,0xe315a5e0)
HX_LOCAL_STACK_FRAME(_hx_pos_e13a986d53384ba3_38_popView,"haxe.ui.focus.FocusManager","popView",0x634d76a5,"haxe.ui.focus.FocusManager.popView","haxe/ui/focus/FocusManager.hx",38,0xe315a5e0)
HX_LOCAL_STACK_FRAME(_hx_pos_e13a986d53384ba3_44_get_focusInfo,"haxe.ui.focus.FocusManager","get_focusInfo",0x80d9f78c,"haxe.ui.focus.FocusManager.get_focusInfo","haxe/ui/focus/FocusManager.hx",44,0xe315a5e0)
HX_LOCAL_STACK_FRAME(_hx_pos_e13a986d53384ba3_60_get_focus,"haxe.ui.focus.FocusManager","get_focus",0xd004bbfe,"haxe.ui.focus.FocusManager.get_focus","haxe/ui/focus/FocusManager.hx",60,0xe315a5e0)
HX_LOCAL_STACK_FRAME(_hx_pos_e13a986d53384ba3_62_set_focus,"haxe.ui.focus.FocusManager","set_focus",0xb355a80a,"haxe.ui.focus.FocusManager.set_focus","haxe/ui/focus/FocusManager.hx",62,0xe315a5e0)
HX_LOCAL_STACK_FRAME(_hx_pos_e13a986d53384ba3_85_focusNext,"haxe.ui.focus.FocusManager","focusNext",0xa85fdcba,"haxe.ui.focus.FocusManager.focusNext","haxe/ui/focus/FocusManager.hx",85,0xe315a5e0)
HX_LOCAL_STACK_FRAME(_hx_pos_e13a986d53384ba3_109_focusPrev,"haxe.ui.focus.FocusManager","focusPrev",0xa9bc16ba,"haxe.ui.focus.FocusManager.focusPrev","haxe/ui/focus/FocusManager.hx",109,0xe315a5e0)
HX_LOCAL_STACK_FRAME(_hx_pos_e13a986d53384ba3_133_buildFocusableList,"haxe.ui.focus.FocusManager","buildFocusableList",0xcb002133,"haxe.ui.focus.FocusManager.buildFocusableList","haxe/ui/focus/FocusManager.hx",133,0xe315a5e0)
HX_LOCAL_STACK_FRAME(_hx_pos_e13a986d53384ba3_16_get_instance,"haxe.ui.focus.FocusManager","get_instance",0x96055f2f,"haxe.ui.focus.FocusManager.get_instance","haxe/ui/focus/FocusManager.hx",16,0xe315a5e0)
namespace haxe{
namespace ui{
namespace focus{

void FocusManager_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e13a986d53384ba3_29_new)
HXLINE(  30)		this->_views = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  31)		this->_focusInfo =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            	}

Dynamic FocusManager_obj::__CreateEmpty() { return new FocusManager_obj; }

void *FocusManager_obj::_hx_vtable = 0;

Dynamic FocusManager_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FocusManager_obj > _hx_result = new FocusManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FocusManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7acae4f3;
}

void FocusManager_obj::pushView( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_e13a986d53384ba3_35_pushView)
HXDLIN(  35)		this->_views->push(component);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FocusManager_obj,pushView,(void))

void FocusManager_obj::popView(){
            	HX_STACKFRAME(&_hx_pos_e13a986d53384ba3_38_popView)
HXLINE(  39)		 ::haxe::ui::core::Component c = this->_views->pop().StaticCast<  ::haxe::ui::core::Component >();
HXLINE(  40)		this->_focusInfo->remove(c);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FocusManager_obj,popView,(void))

 ::haxe::ui::focus::FocusInfo FocusManager_obj::get_focusInfo(){
            	HX_GC_STACKFRAME(&_hx_pos_e13a986d53384ba3_44_get_focusInfo)
HXLINE(  45)		if ((this->_views->length == (int)0)) {
HXLINE(  46)			return null();
            		}
HXLINE(  48)		::Array< ::Dynamic> c = this->_views;
HXDLIN(  48)		 ::haxe::ui::core::Component c1 = c->__get((this->_views->length - (int)1)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE(  49)		 ::haxe::ui::focus::FocusInfo info = this->_focusInfo->get(c1).StaticCast<  ::haxe::ui::focus::FocusInfo >();
HXLINE(  50)		if (hx::IsNull( info )) {
HXLINE(  51)			info =  ::haxe::ui::focus::FocusInfo_obj::__alloc( HX_CTX );
HXLINE(  52)			info->view = c1;
HXLINE(  53)			this->_focusInfo->set(c1,info);
            		}
HXLINE(  55)		return info;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FocusManager_obj,get_focusInfo,return )

::Dynamic FocusManager_obj::get_focus(){
            	HX_STACKFRAME(&_hx_pos_e13a986d53384ba3_60_get_focus)
HXDLIN(  60)		return this->get_focusInfo()->currentFocus;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FocusManager_obj,get_focus,return )

::Dynamic FocusManager_obj::set_focus(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_e13a986d53384ba3_62_set_focus)
HXLINE(  63)		if ((::Std_obj::is(value,hx::ClassOf< ::haxe::ui::focus::IFocusable >()) == false)) {
HXLINE(  64)			HX_STACK_DO_THROW(HX_("Component does not implement IFocusable",f7,3c,d5,e7));
            		}
HXLINE(  67)		if (hx::IsNull( this->get_focusInfo() )) {
HXLINE(  68)			return value;
            		}
HXLINE(  71)		bool _hx_tmp;
HXDLIN(  71)		if (hx::IsNotNull( this->get_focusInfo()->currentFocus )) {
HXLINE(  71)			_hx_tmp = hx::IsNotEq( this->get_focusInfo()->currentFocus,value );
            		}
            		else {
HXLINE(  71)			_hx_tmp = false;
            		}
HXDLIN(  71)		if (_hx_tmp) {
HXLINE(  72)			::haxe::ui::focus::IFocusable_obj::set_focus(this->get_focusInfo()->currentFocus,false);
HXLINE(  73)			this->get_focusInfo()->currentFocus = null();
            		}
HXLINE(  75)		if (hx::IsNotNull( value )) {
HXLINE(  76)			this->get_focusInfo()->currentFocus = value;
HXLINE(  77)			::haxe::ui::focus::IFocusable_obj::set_focus(this->get_focusInfo()->currentFocus,true);
            		}
HXLINE(  80)		::haxe::ui::Toolkit_obj::get_screen()->focus = ( ( ::haxe::ui::core::Component)(value) );
HXLINE(  82)		return this->get_focusInfo()->currentFocus;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FocusManager_obj,set_focus,return )

 ::haxe::ui::core::Component FocusManager_obj::focusNext(){
            	HX_STACKFRAME(&_hx_pos_e13a986d53384ba3_85_focusNext)
HXLINE(  86)		if ((this->_views->length == (int)0)) {
HXLINE(  87)			return null();
            		}
HXLINE(  90)		::Array< ::Dynamic> list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  91)		 ::haxe::ui::focus::FocusInfo info = this->get_focusInfo();
HXLINE(  92)		::Dynamic currentFocus = this->buildFocusableList(info->view,list);
HXLINE(  94)		int index = (int)-1;
HXLINE(  95)		if (hx::IsNotNull( currentFocus )) {
HXLINE(  96)			index = list->indexOf(currentFocus,null());
            		}
HXLINE(  99)		int nextIndex = (index + (int)1);
HXLINE( 100)		if ((nextIndex > (list->length - (int)1))) {
HXLINE( 101)			nextIndex = (int)0;
            		}
HXLINE( 104)		::Dynamic nextFocus = list->__get(nextIndex);
HXLINE( 105)		this->set_focus(nextFocus);
HXLINE( 106)		return ( ( ::haxe::ui::core::Component)(nextFocus) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FocusManager_obj,focusNext,return )

 ::haxe::ui::core::Component FocusManager_obj::focusPrev(){
            	HX_STACKFRAME(&_hx_pos_e13a986d53384ba3_109_focusPrev)
HXLINE( 110)		if ((this->_views->length == (int)0)) {
HXLINE( 111)			return null();
            		}
HXLINE( 114)		::Array< ::Dynamic> list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 115)		 ::haxe::ui::focus::FocusInfo info = this->get_focusInfo();
HXLINE( 116)		::Dynamic currentFocus = this->buildFocusableList(info->view,list);
HXLINE( 118)		int index = (int)-1;
HXLINE( 119)		if (hx::IsNotNull( currentFocus )) {
HXLINE( 120)			index = list->indexOf(currentFocus,null());
            		}
HXLINE( 123)		int prevIndex = (index - (int)1);
HXLINE( 124)		if ((prevIndex < (int)0)) {
HXLINE( 125)			prevIndex = (list->length - (int)1);
            		}
HXLINE( 128)		::Dynamic prevFocus = list->__get(prevIndex);
HXLINE( 129)		this->set_focus(prevFocus);
HXLINE( 130)		return ( ( ::haxe::ui::core::Component)(prevFocus) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FocusManager_obj,focusPrev,return )

::Dynamic FocusManager_obj::buildFocusableList( ::haxe::ui::core::Component c,::Array< ::Dynamic> list){
            	HX_STACKFRAME(&_hx_pos_e13a986d53384ba3_133_buildFocusableList)
HXLINE( 134)		::Dynamic currentFocus = null();
HXLINE( 135)		if (::Std_obj::is(c,hx::ClassOf< ::haxe::ui::focus::IFocusable >())) {
HXLINE( 136)			::Dynamic f = c;
HXLINE( 137)			if ((::haxe::ui::focus::IFocusable_obj::get_allowFocus(f) == true)) {
HXLINE( 138)				if ((::haxe::ui::focus::IFocusable_obj::get_focus(f) == true)) {
HXLINE( 139)					currentFocus = f;
            				}
HXLINE( 141)				list->push(f);
            			}
            		}
HXLINE( 145)		{
HXLINE( 145)			int _g = (int)0;
HXDLIN( 145)			::Array< ::Dynamic> _g1 = c->get_childComponents();
HXDLIN( 145)			while((_g < _g1->length)){
HXLINE( 145)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 145)				_g = (_g + (int)1);
HXLINE( 146)				::Dynamic f1 = this->buildFocusableList(child,list);
HXLINE( 147)				if (hx::IsNotNull( f1 )) {
HXLINE( 148)					currentFocus = f1;
            				}
            			}
            		}
HXLINE( 151)		return currentFocus;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FocusManager_obj,buildFocusableList,return )

 ::haxe::ui::focus::FocusManager FocusManager_obj::_instance;

 ::haxe::ui::focus::FocusManager FocusManager_obj::instance;

 ::haxe::ui::focus::FocusManager FocusManager_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_e13a986d53384ba3_16_get_instance)
HXLINE(  17)		if (hx::IsNull( ::haxe::ui::focus::FocusManager_obj::_instance )) {
HXLINE(  18)			::haxe::ui::focus::FocusManager_obj::_instance =  ::haxe::ui::focus::FocusManager_obj::__alloc( HX_CTX );
            		}
HXLINE(  20)		return ::haxe::ui::focus::FocusManager_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FocusManager_obj,get_instance,return )


hx::ObjectPtr< FocusManager_obj > FocusManager_obj::__new() {
	hx::ObjectPtr< FocusManager_obj > __this = new FocusManager_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FocusManager_obj > FocusManager_obj::__alloc(hx::Ctx *_hx_ctx) {
	FocusManager_obj *__this = (FocusManager_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FocusManager_obj), true, "haxe.ui.focus.FocusManager"));
	*(void **)__this = FocusManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FocusManager_obj::FocusManager_obj()
{
}

void FocusManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FocusManager);
	HX_MARK_MEMBER_NAME(_views,"_views");
	HX_MARK_MEMBER_NAME(_focusInfo,"_focusInfo");
	HX_MARK_MEMBER_NAME(focusInfo,"focusInfo");
	HX_MARK_END_CLASS();
}

void FocusManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_views,"_views");
	HX_VISIT_MEMBER_NAME(_focusInfo,"_focusInfo");
	HX_VISIT_MEMBER_NAME(focusInfo,"focusInfo");
}

hx::Val FocusManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_focus() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_views") ) { return hx::Val( _views ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"popView") ) { return hx::Val( popView_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pushView") ) { return hx::Val( pushView_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"focusInfo") ) { return hx::Val( inCallProp == hx::paccAlways ? get_focusInfo() : focusInfo ); }
		if (HX_FIELD_EQ(inName,"get_focus") ) { return hx::Val( get_focus_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_focus") ) { return hx::Val( set_focus_dyn() ); }
		if (HX_FIELD_EQ(inName,"focusNext") ) { return hx::Val( focusNext_dyn() ); }
		if (HX_FIELD_EQ(inName,"focusPrev") ) { return hx::Val( focusPrev_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_focusInfo") ) { return hx::Val( _focusInfo ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_focusInfo") ) { return hx::Val( get_focusInfo_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"buildFocusableList") ) { return hx::Val( buildFocusableList_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FocusManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( inCallProp == hx::paccAlways ? get_instance() : instance ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
	}
	return false;
}

hx::Val FocusManager_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_focus(inValue.Cast< ::Dynamic >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_views") ) { _views=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"focusInfo") ) { focusInfo=inValue.Cast<  ::haxe::ui::focus::FocusInfo >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_focusInfo") ) { _focusInfo=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FocusManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::haxe::ui::focus::FocusManager >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::focus::FocusManager >(); return true; }
	}
	return false;
}

void FocusManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_views","\xaf","\x2d","\xe4","\x32"));
	outFields->push(HX_HCSTRING("_focusInfo","\x27","\x0c","\xe9","\x78"));
	outFields->push(HX_HCSTRING("focusInfo","\x66","\x90","\x46","\x1d"));
	outFields->push(HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FocusManager_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FocusManager_obj,_views),HX_HCSTRING("_views","\xaf","\x2d","\xe4","\x32")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(FocusManager_obj,_focusInfo),HX_HCSTRING("_focusInfo","\x27","\x0c","\xe9","\x78")},
	{hx::fsObject /*::haxe::ui::focus::FocusInfo*/ ,(int)offsetof(FocusManager_obj,focusInfo),HX_HCSTRING("focusInfo","\x66","\x90","\x46","\x1d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo FocusManager_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::focus::FocusManager*/ ,(void *) &FocusManager_obj::_instance,HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1")},
	{hx::fsObject /*::haxe::ui::focus::FocusManager*/ ,(void *) &FocusManager_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String FocusManager_obj_sMemberFields[] = {
	HX_HCSTRING("_views","\xaf","\x2d","\xe4","\x32"),
	HX_HCSTRING("_focusInfo","\x27","\x0c","\xe9","\x78"),
	HX_HCSTRING("pushView","\x5f","\x65","\x40","\x1d"),
	HX_HCSTRING("popView","\x96","\x58","\x0a","\x49"),
	HX_HCSTRING("focusInfo","\x66","\x90","\x46","\x1d"),
	HX_HCSTRING("get_focusInfo","\x3d","\x64","\xaa","\xde"),
	HX_HCSTRING("get_focus","\x2f","\xbc","\x32","\x48"),
	HX_HCSTRING("set_focus","\x3b","\xa8","\x83","\x2b"),
	HX_HCSTRING("focusNext","\xeb","\xdc","\x8d","\x20"),
	HX_HCSTRING("focusPrev","\xeb","\x16","\xea","\x21"),
	HX_HCSTRING("buildFocusableList","\xe2","\x12","\x53","\xab"),
	::String(null()) };

static void FocusManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FocusManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FocusManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(FocusManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FocusManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FocusManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FocusManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(FocusManager_obj::instance,"instance");
};

#endif

hx::Class FocusManager_obj::__mClass;

static ::String FocusManager_obj_sStaticFields[] = {
	HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1"),
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("get_instance","\x9e","\xd3","\xfa","\x0e"),
	::String(null())
};

void FocusManager_obj::__register()
{
	hx::Object *dummy = new FocusManager_obj;
	FocusManager_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.focus.FocusManager","\x7d","\x57","\xa3","\xed");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FocusManager_obj::__GetStatic;
	__mClass->mSetStaticField = &FocusManager_obj::__SetStatic;
	__mClass->mMarkFunc = FocusManager_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FocusManager_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FocusManager_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FocusManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FocusManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FocusManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FocusManager_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace focus
