// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_ToolkitAssets
#include <haxe/ui/ToolkitAssets.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <haxe/ui/backend/AssetsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Engine
#include <haxe/ui/styles/Engine.h>
#endif
#ifndef INCLUDED_haxe_ui_themes_Theme
#include <haxe/ui/themes/Theme.h>
#endif
#ifndef INCLUDED_haxe_ui_themes_ThemeManager
#include <haxe/ui/themes/ThemeManager.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_21_new,"haxe.ui.themes.ThemeManager","new",0x36faac48,"haxe.ui.themes.ThemeManager.new","haxe/ui/themes/ThemeManager.hx",21,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_24_getTheme,"haxe.ui.themes.ThemeManager","getTheme",0x49c888ab,"haxe.ui.themes.ThemeManager.getTheme","haxe/ui/themes/ThemeManager.hx",24,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_34_addStyleResource,"haxe.ui.themes.ThemeManager","addStyleResource",0x1a808756,"haxe.ui.themes.ThemeManager.addStyleResource","haxe/ui/themes/ThemeManager.hx",34,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_37_applyTheme,"haxe.ui.themes.ThemeManager","applyTheme",0x4249ead3,"haxe.ui.themes.ThemeManager.applyTheme","haxe/ui/themes/ThemeManager.hx",37,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_42_applyThemeStyles,"haxe.ui.themes.ThemeManager","applyThemeStyles",0xce2da555,"haxe.ui.themes.ThemeManager.applyThemeStyles","haxe/ui/themes/ThemeManager.hx",42,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_8_get_instance,"haxe.ui.themes.ThemeManager","get_instance",0xcb9d3ab6,"haxe.ui.themes.ThemeManager.get_instance","haxe/ui/themes/ThemeManager.hx",8,0xab3ecbe7)
namespace haxe{
namespace ui{
namespace themes{

void ThemeManager_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_21_new)
HXDLIN(  21)		this->_themes =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic ThemeManager_obj::__CreateEmpty() { return new ThemeManager_obj; }

void *ThemeManager_obj::_hx_vtable = 0;

Dynamic ThemeManager_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ThemeManager_obj > _hx_result = new ThemeManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ThemeManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7debac88;
}

 ::haxe::ui::themes::Theme ThemeManager_obj::getTheme(::String themeName){
            	HX_GC_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_24_getTheme)
HXLINE(  25)		 ::haxe::ui::themes::Theme theme = this->_themes->get(themeName).StaticCast<  ::haxe::ui::themes::Theme >();
HXLINE(  26)		if (hx::IsNull( theme )) {
HXLINE(  27)			theme =  ::haxe::ui::themes::Theme_obj::__alloc( HX_CTX );
HXLINE(  28)			this->_themes->set(themeName,theme);
            		}
HXLINE(  30)		return theme;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ThemeManager_obj,getTheme,return )

void ThemeManager_obj::addStyleResource(::String themeName,::String resourceId){
            	HX_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_34_addStyleResource)
HXDLIN(  34)		this->getTheme(themeName)->styles->push(resourceId);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ThemeManager_obj,addStyleResource,(void))

void ThemeManager_obj::applyTheme(::String themeName){
            	HX_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_37_applyTheme)
HXLINE(  38)		this->applyThemeStyles(HX_("global",63,31,b2,a7));
HXLINE(  39)		this->applyThemeStyles(themeName);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ThemeManager_obj,applyTheme,(void))

void ThemeManager_obj::applyThemeStyles(::String themeName){
            	HX_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_42_applyThemeStyles)
HXLINE(  43)		 ::haxe::ui::themes::Theme theme = this->_themes->get(themeName).StaticCast<  ::haxe::ui::themes::Theme >();
HXLINE(  44)		if (hx::IsNull( theme )) {
HXLINE(  45)			return;
            		}
HXLINE(  47)		if (hx::IsNotNull( theme->parent )) {
HXLINE(  48)			this->applyThemeStyles(theme->parent);
            		}
HXLINE(  51)		::Array< ::String > styles = theme->styles;
HXLINE(  52)		styles->reverse();
HXLINE(  53)		{
HXLINE(  53)			int _g = (int)0;
HXDLIN(  53)			while((_g < styles->length)){
HXLINE(  53)				::String s = styles->__get(_g);
HXDLIN(  53)				_g = (_g + (int)1);
HXLINE(  54)				::String css = ::haxe::ui::Toolkit_obj::get_assets()->getText(s);
HXLINE(  55)				if (hx::IsNotNull( css )) {
HXLINE(  56)					::haxe::ui::Toolkit_obj::styleSheet->addRules(css);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ThemeManager_obj,applyThemeStyles,(void))

 ::haxe::ui::themes::ThemeManager ThemeManager_obj::_instance;

 ::haxe::ui::themes::ThemeManager ThemeManager_obj::instance;

 ::haxe::ui::themes::ThemeManager ThemeManager_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_8_get_instance)
HXLINE(   9)		if (hx::IsNull( ::haxe::ui::themes::ThemeManager_obj::_instance )) {
HXLINE(  10)			::haxe::ui::themes::ThemeManager_obj::_instance =  ::haxe::ui::themes::ThemeManager_obj::__alloc( HX_CTX );
            		}
HXLINE(  12)		return ::haxe::ui::themes::ThemeManager_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ThemeManager_obj,get_instance,return )


hx::ObjectPtr< ThemeManager_obj > ThemeManager_obj::__new() {
	hx::ObjectPtr< ThemeManager_obj > __this = new ThemeManager_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ThemeManager_obj > ThemeManager_obj::__alloc(hx::Ctx *_hx_ctx) {
	ThemeManager_obj *__this = (ThemeManager_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ThemeManager_obj), true, "haxe.ui.themes.ThemeManager"));
	*(void **)__this = ThemeManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ThemeManager_obj::ThemeManager_obj()
{
}

void ThemeManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ThemeManager);
	HX_MARK_MEMBER_NAME(_themes,"_themes");
	HX_MARK_END_CLASS();
}

void ThemeManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_themes,"_themes");
}

hx::Val ThemeManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_themes") ) { return hx::Val( _themes ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getTheme") ) { return hx::Val( getTheme_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyTheme") ) { return hx::Val( applyTheme_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addStyleResource") ) { return hx::Val( addStyleResource_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyThemeStyles") ) { return hx::Val( applyThemeStyles_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ThemeManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

hx::Val ThemeManager_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_themes") ) { _themes=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ThemeManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::haxe::ui::themes::ThemeManager >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::themes::ThemeManager >(); return true; }
	}
	return false;
}

void ThemeManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_themes","\xe9","\xdb","\x9e","\xf4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ThemeManager_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ThemeManager_obj,_themes),HX_HCSTRING("_themes","\xe9","\xdb","\x9e","\xf4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ThemeManager_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::themes::ThemeManager*/ ,(void *) &ThemeManager_obj::_instance,HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1")},
	{hx::fsObject /*::haxe::ui::themes::ThemeManager*/ ,(void *) &ThemeManager_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ThemeManager_obj_sMemberFields[] = {
	HX_HCSTRING("_themes","\xe9","\xdb","\x9e","\xf4"),
	HX_HCSTRING("getTheme","\x93","\x8d","\x5d","\x6f"),
	HX_HCSTRING("addStyleResource","\x3e","\xb4","\x80","\x4d"),
	HX_HCSTRING("applyTheme","\xbb","\xf9","\xd7","\xba"),
	HX_HCSTRING("applyThemeStyles","\x3d","\xd2","\x2d","\x01"),
	::String(null()) };

static void ThemeManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ThemeManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ThemeManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(ThemeManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ThemeManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ThemeManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ThemeManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(ThemeManager_obj::instance,"instance");
};

#endif

hx::Class ThemeManager_obj::__mClass;

static ::String ThemeManager_obj_sStaticFields[] = {
	HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1"),
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("get_instance","\x9e","\xd3","\xfa","\x0e"),
	::String(null())
};

void ThemeManager_obj::__register()
{
	hx::Object *dummy = new ThemeManager_obj;
	ThemeManager_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.themes.ThemeManager","\x56","\x28","\x15","\x5e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ThemeManager_obj::__GetStatic;
	__mClass->mSetStaticField = &ThemeManager_obj::__SetStatic;
	__mClass->mMarkFunc = ThemeManager_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ThemeManager_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ThemeManager_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ThemeManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ThemeManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ThemeManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ThemeManager_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace themes
