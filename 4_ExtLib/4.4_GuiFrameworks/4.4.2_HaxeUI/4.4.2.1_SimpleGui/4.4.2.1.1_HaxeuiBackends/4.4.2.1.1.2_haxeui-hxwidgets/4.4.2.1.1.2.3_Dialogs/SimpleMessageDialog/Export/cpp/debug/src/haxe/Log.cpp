// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4d6150ee1d4abfb0_77___default_trace,"haxe.Log","__default_trace",0xe2f5e5d5,"haxe.Log.__default_trace","/usr/share/haxe/std/haxe/Log.hx",77,0x4faa7108)
namespace haxe{

void Log_obj::__construct() { }

Dynamic Log_obj::__CreateEmpty() { return new Log_obj; }

void *Log_obj::_hx_vtable = 0;

Dynamic Log_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Log_obj > _hx_result = new Log_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Log_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0446b9f6;
}

HX_BEGIN_DEFAULT_FUNC(__default_trace,Log_obj)
void _hx_run( ::Dynamic v, ::Dynamic infos){
            	HX_STACKFRAME(&_hx_pos_4d6150ee1d4abfb0_77___default_trace)
HXDLIN(  77)		bool _hx_tmp;
HXDLIN(  77)		if (hx::IsNotNull( infos )) {
HXDLIN(  77)			_hx_tmp = hx::IsNotNull( ( (::cpp::VirtualArray)(infos->__Field(HX_("customParams",d7,51,18,ed),hx::paccDynamic)) ) );
            		}
            		else {
HXDLIN(  77)			_hx_tmp = false;
            		}
HXDLIN(  77)		if (_hx_tmp) {
HXLINE(  78)			::String extra = HX_("",00,00,00,00);
HXLINE(  79)			{
HXLINE(  79)				int _g = (int)0;
HXDLIN(  79)				::cpp::VirtualArray _g1 = ( (::cpp::VirtualArray)(infos->__Field(HX_("customParams",d7,51,18,ed),hx::paccDynamic)) );
HXDLIN(  79)				while((_g < _g1->get_length())){
HXLINE(  79)					 ::Dynamic v1 = _g1->__get(_g);
HXDLIN(  79)					_g = (_g + (int)1);
HXLINE(  80)					extra = (extra + (HX_(",",2c,00,00,00) + ::Std_obj::string(v1)));
            				}
            			}
HXLINE(  81)			__trace((::Std_obj::string(v) + extra),infos);
            		}
            		else {
HXLINE(  84)			__trace(v,infos);
            		}
            	}
HX_END_LOCAL_FUNC2((void))
HX_END_DEFAULT_FUNC

::Dynamic Log_obj::trace;


Log_obj::Log_obj()
{
}

bool Log_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"trace") ) { outValue = ( trace ); return true; }
	}
	return false;
}

bool Log_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"trace") ) { trace=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Log_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Log_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Log_obj::trace,HX_HCSTRING("trace","\x85","\x8e","\x1f","\x16")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Log_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Log_obj::trace,"trace");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Log_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Log_obj::trace,"trace");
};

#endif

hx::Class Log_obj::__mClass;

static ::String Log_obj_sStaticFields[] = {
	HX_HCSTRING("trace","\x85","\x8e","\x1f","\x16"),
	::String(null())
};

void Log_obj::__register()
{
	hx::Object *dummy = new Log_obj;
	Log_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.Log","\x1c","\x1c","\x0e","\x3f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Log_obj::__GetStatic;
	__mClass->mSetStaticField = &Log_obj::__SetStatic;
	__mClass->mMarkFunc = Log_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Log_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Log_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Log_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Log_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Log_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Log_obj::__boot()
{
	trace = new __default_trace;

}

} // end namespace haxe
