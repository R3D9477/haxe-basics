// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_styles_Value
#include <haxe/ui/styles/Value.h>
#endif
namespace haxe{
namespace ui{
namespace styles{

::haxe::ui::styles::Value Value_obj::VCall(::String f,::Array< ::Dynamic> vl)
{
	return hx::CreateEnum< Value_obj >(HX_("VCall",14,28,09,b1),8,2)->_hx_init(0,f)->_hx_init(1,vl);
}

::haxe::ui::styles::Value Value_obj::VFloat(Float v)
{
	return hx::CreateEnum< Value_obj >(HX_("VFloat",66,3d,75,f8),3,1)->_hx_init(0,v);
}

::haxe::ui::styles::Value Value_obj::VGroup(::Array< ::Dynamic> l)
{
	return hx::CreateEnum< Value_obj >(HX_("VGroup",09,2b,d3,8f),7,1)->_hx_init(0,l);
}

::haxe::ui::styles::Value Value_obj::VHex(::String v)
{
	return hx::CreateEnum< Value_obj >(HX_("VHex",25,54,0f,39),5,1)->_hx_init(0,v);
}

::haxe::ui::styles::Value Value_obj::VIdent(::String i)
{
	return hx::CreateEnum< Value_obj >(HX_("VIdent",ba,ba,57,ad),0,1)->_hx_init(0,i);
}

::haxe::ui::styles::Value Value_obj::VInt(int v)
{
	return hx::CreateEnum< Value_obj >(HX_("VInt",39,1e,10,39),4,1)->_hx_init(0,v);
}

::haxe::ui::styles::Value Value_obj::VLabel(::String v, ::haxe::ui::styles::Value val)
{
	return hx::CreateEnum< Value_obj >(HX_("VLabel",be,85,8d,65),9,2)->_hx_init(0,v)->_hx_init(1,val);
}

::haxe::ui::styles::Value Value_obj::VList(::Array< ::Dynamic> l)
{
	return hx::CreateEnum< Value_obj >(HX_("VList",d4,2b,02,b7),6,1)->_hx_init(0,l);
}

::haxe::ui::styles::Value Value_obj::VSlash;

::haxe::ui::styles::Value Value_obj::VString(::String s)
{
	return hx::CreateEnum< Value_obj >(HX_("VString",c7,81,fa,3d),1,1)->_hx_init(0,s);
}

::haxe::ui::styles::Value Value_obj::VUnit(Float v,::String unit)
{
	return hx::CreateEnum< Value_obj >(HX_("VUnit",fa,d9,f8,bc),2,2)->_hx_init(0,v)->_hx_init(1,unit);
}

bool Value_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("VCall",14,28,09,b1)) { outValue = Value_obj::VCall_dyn(); return true; }
	if (inName==HX_("VFloat",66,3d,75,f8)) { outValue = Value_obj::VFloat_dyn(); return true; }
	if (inName==HX_("VGroup",09,2b,d3,8f)) { outValue = Value_obj::VGroup_dyn(); return true; }
	if (inName==HX_("VHex",25,54,0f,39)) { outValue = Value_obj::VHex_dyn(); return true; }
	if (inName==HX_("VIdent",ba,ba,57,ad)) { outValue = Value_obj::VIdent_dyn(); return true; }
	if (inName==HX_("VInt",39,1e,10,39)) { outValue = Value_obj::VInt_dyn(); return true; }
	if (inName==HX_("VLabel",be,85,8d,65)) { outValue = Value_obj::VLabel_dyn(); return true; }
	if (inName==HX_("VList",d4,2b,02,b7)) { outValue = Value_obj::VList_dyn(); return true; }
	if (inName==HX_("VSlash",07,38,a0,74)) { outValue = Value_obj::VSlash; return true; }
	if (inName==HX_("VString",c7,81,fa,3d)) { outValue = Value_obj::VString_dyn(); return true; }
	if (inName==HX_("VUnit",fa,d9,f8,bc)) { outValue = Value_obj::VUnit_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Value_obj)

int Value_obj::__FindIndex(::String inName)
{
	if (inName==HX_("VCall",14,28,09,b1)) return 8;
	if (inName==HX_("VFloat",66,3d,75,f8)) return 3;
	if (inName==HX_("VGroup",09,2b,d3,8f)) return 7;
	if (inName==HX_("VHex",25,54,0f,39)) return 5;
	if (inName==HX_("VIdent",ba,ba,57,ad)) return 0;
	if (inName==HX_("VInt",39,1e,10,39)) return 4;
	if (inName==HX_("VLabel",be,85,8d,65)) return 9;
	if (inName==HX_("VList",d4,2b,02,b7)) return 6;
	if (inName==HX_("VSlash",07,38,a0,74)) return 10;
	if (inName==HX_("VString",c7,81,fa,3d)) return 1;
	if (inName==HX_("VUnit",fa,d9,f8,bc)) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Value_obj,VCall,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,VFloat,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,VGroup,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,VHex,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,VIdent,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,VInt,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Value_obj,VLabel,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,VList,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,VString,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Value_obj,VUnit,return)

int Value_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("VCall",14,28,09,b1)) return 2;
	if (inName==HX_("VFloat",66,3d,75,f8)) return 1;
	if (inName==HX_("VGroup",09,2b,d3,8f)) return 1;
	if (inName==HX_("VHex",25,54,0f,39)) return 1;
	if (inName==HX_("VIdent",ba,ba,57,ad)) return 1;
	if (inName==HX_("VInt",39,1e,10,39)) return 1;
	if (inName==HX_("VLabel",be,85,8d,65)) return 2;
	if (inName==HX_("VList",d4,2b,02,b7)) return 1;
	if (inName==HX_("VSlash",07,38,a0,74)) return 0;
	if (inName==HX_("VString",c7,81,fa,3d)) return 1;
	if (inName==HX_("VUnit",fa,d9,f8,bc)) return 2;
	return super::__FindArgCount(inName);
}

hx::Val Value_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("VCall",14,28,09,b1)) return VCall_dyn();
	if (inName==HX_("VFloat",66,3d,75,f8)) return VFloat_dyn();
	if (inName==HX_("VGroup",09,2b,d3,8f)) return VGroup_dyn();
	if (inName==HX_("VHex",25,54,0f,39)) return VHex_dyn();
	if (inName==HX_("VIdent",ba,ba,57,ad)) return VIdent_dyn();
	if (inName==HX_("VInt",39,1e,10,39)) return VInt_dyn();
	if (inName==HX_("VLabel",be,85,8d,65)) return VLabel_dyn();
	if (inName==HX_("VList",d4,2b,02,b7)) return VList_dyn();
	if (inName==HX_("VSlash",07,38,a0,74)) return VSlash;
	if (inName==HX_("VString",c7,81,fa,3d)) return VString_dyn();
	if (inName==HX_("VUnit",fa,d9,f8,bc)) return VUnit_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Value_obj_sStaticFields[] = {
	HX_("VIdent",ba,ba,57,ad),
	HX_("VString",c7,81,fa,3d),
	HX_("VUnit",fa,d9,f8,bc),
	HX_("VFloat",66,3d,75,f8),
	HX_("VInt",39,1e,10,39),
	HX_("VHex",25,54,0f,39),
	HX_("VList",d4,2b,02,b7),
	HX_("VGroup",09,2b,d3,8f),
	HX_("VCall",14,28,09,b1),
	HX_("VLabel",be,85,8d,65),
	HX_("VSlash",07,38,a0,74),
	::String(null())
};

static void Value_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Value_obj::VSlash,"VSlash");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Value_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Value_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Value_obj::VSlash,"VSlash");
};
#endif

hx::Class Value_obj::__mClass;

Dynamic __Create_Value_obj() { return new Value_obj; }

void Value_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("haxe.ui.styles.Value","\x17","\x3a","\x64","\x46"), hx::TCanCast< Value_obj >,Value_obj_sStaticFields,0,
	&__Create_Value_obj, &__Create,
	&super::__SGetClass(), &CreateValue_obj, Value_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , Value_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Value_obj::__GetStatic;
}

void Value_obj::__boot()
{
VSlash = hx::CreateEnum< Value_obj >(HX_HCSTRING("VSlash","\x07","\x38","\xa0","\x74"),10,0);
}


} // end namespace haxe
} // end namespace ui
} // end namespace styles
