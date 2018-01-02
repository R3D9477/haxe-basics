// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_util_StringUtil
#include <haxe/ui/util/StringUtil.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_4_capitalizeFirstLetter,"haxe.ui.util.StringUtil","capitalizeFirstLetter",0x3603c169,"haxe.ui.util.StringUtil.capitalizeFirstLetter","haxe/ui/util/StringUtil.hx",4,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_9_capitalizeHyphens,"haxe.ui.util.StringUtil","capitalizeHyphens",0x495322f4,"haxe.ui.util.StringUtil.capitalizeHyphens","haxe/ui/util/StringUtil.hx",9,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_21_replaceVars,"haxe.ui.util.StringUtil","replaceVars",0xb30793bf,"haxe.ui.util.StringUtil.replaceVars","haxe/ui/util/StringUtil.hx",21,0x14027730)
namespace haxe{
namespace ui{
namespace util{

void StringUtil_obj::__construct() { }

Dynamic StringUtil_obj::__CreateEmpty() { return new StringUtil_obj; }

void *StringUtil_obj::_hx_vtable = 0;

Dynamic StringUtil_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StringUtil_obj > _hx_result = new StringUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StringUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1c95a233;
}

::String StringUtil_obj::capitalizeFirstLetter(::String s){
            	HX_STACKFRAME(&_hx_pos_276022ad0c305d13_4_capitalizeFirstLetter)
HXLINE(   5)		::String s1 = s.substr((int)0,(int)1).toUpperCase();
HXDLIN(   5)		s = (s1 + s.substr((int)1,s.length));
HXLINE(   6)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringUtil_obj,capitalizeFirstLetter,return )

::String StringUtil_obj::capitalizeHyphens(::String s){
            	HX_STACKFRAME(&_hx_pos_276022ad0c305d13_9_capitalizeHyphens)
HXLINE(  10)		::String r = s;
HXLINE(  11)		int n = r.indexOf(HX_("-",2d,00,00,00),null());
HXLINE(  12)		while((n != (int)-1)){
HXLINE(  13)			::String before = r.substr((int)0,n);
HXLINE(  14)			::String after = r.substr((n + (int)1),r.length);
HXLINE(  15)			r = (before + ::haxe::ui::util::StringUtil_obj::capitalizeFirstLetter(after));
HXLINE(  16)			n = r.indexOf(HX_("-",2d,00,00,00),(n + (int)1));
            		}
HXLINE(  18)		return r;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringUtil_obj,capitalizeHyphens,return )

::String StringUtil_obj::replaceVars(::String s, ::haxe::ds::StringMap params){
            	HX_STACKFRAME(&_hx_pos_276022ad0c305d13_21_replaceVars)
HXLINE(  22)		if (hx::IsNotNull( params )) {
HXLINE(  23)			 ::Dynamic k = params->keys();
HXDLIN(  23)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  23)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  24)				s = ::StringTools_obj::replace(s,((HX_("${",d7,1f,00,00) + k1) + HX_("}",7d,00,00,00)),( (::String)(params->get(k1)) ));
            			}
            		}
HXLINE(  27)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringUtil_obj,replaceVars,return )


StringUtil_obj::StringUtil_obj()
{
}

bool StringUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"replaceVars") ) { outValue = replaceVars_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"capitalizeHyphens") ) { outValue = capitalizeHyphens_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"capitalizeFirstLetter") ) { outValue = capitalizeFirstLetter_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *StringUtil_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *StringUtil_obj_sStaticStorageInfo = 0;
#endif

static void StringUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StringUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class StringUtil_obj::__mClass;

static ::String StringUtil_obj_sStaticFields[] = {
	HX_HCSTRING("capitalizeFirstLetter","\xea","\xb2","\x39","\xdf"),
	HX_HCSTRING("capitalizeHyphens","\xf5","\xff","\xef","\xd2"),
	HX_HCSTRING("replaceVars","\x00","\xca","\xe4","\x62"),
	::String(null())
};

void StringUtil_obj::__register()
{
	hx::Object *dummy = new StringUtil_obj;
	StringUtil_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.util.StringUtil","\xad","\xc7","\x99","\x39");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StringUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StringUtil_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(StringUtil_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StringUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StringUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringUtil_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
