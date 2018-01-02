// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe_ui_util_CallStackHelper
#include <haxe/ui/util/CallStackHelper.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_dab627947ef7c7e5_6_traceCallStack,"haxe.ui.util.CallStackHelper","traceCallStack",0x8743b295,"haxe.ui.util.CallStackHelper.traceCallStack","haxe/ui/util/CallStackHelper.hx",6,0x92e64cc1)
HX_LOCAL_STACK_FRAME(_hx_pos_dab627947ef7c7e5_16_traceExceptionStack,"haxe.ui.util.CallStackHelper","traceExceptionStack",0x226997ce,"haxe.ui.util.CallStackHelper.traceExceptionStack","haxe/ui/util/CallStackHelper.hx",16,0x92e64cc1)
HX_LOCAL_STACK_FRAME(_hx_pos_dab627947ef7c7e5_26_getCallStackString,"haxe.ui.util.CallStackHelper","getCallStackString",0x6897d255,"haxe.ui.util.CallStackHelper.getCallStackString","haxe/ui/util/CallStackHelper.hx",26,0x92e64cc1)
namespace haxe{
namespace ui{
namespace util{

void CallStackHelper_obj::__construct() { }

Dynamic CallStackHelper_obj::__CreateEmpty() { return new CallStackHelper_obj; }

void *CallStackHelper_obj::_hx_vtable = 0;

Dynamic CallStackHelper_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CallStackHelper_obj > _hx_result = new CallStackHelper_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CallStackHelper_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5e48adfc;
}

void CallStackHelper_obj::traceCallStack(){
            	HX_STACKFRAME(&_hx_pos_dab627947ef7c7e5_6_traceCallStack)
HXLINE(   7)		::Array< ::Dynamic> arr = ::haxe::CallStack_obj::callStack();
HXLINE(   8)		if (hx::IsNull( arr )) {
HXLINE(   9)			::haxe::Log_obj::trace(HX_("Callstack is null!",1a,30,ee,6f),hx::SourceInfo(HX_("CallStackHelper.hx",06,17,e3,d3),9,HX_("haxe.ui.util.CallStackHelper",5e,76,43,8d),HX_("traceCallStack",85,9a,4c,95)));
HXLINE(  10)			return;
            		}
HXLINE(  12)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  12)		::String _hx_tmp1 = ::haxe::CallStack_obj::toString(arr);
HXDLIN(  12)		_hx_tmp(_hx_tmp1,hx::SourceInfo(HX_("CallStackHelper.hx",06,17,e3,d3),12,HX_("haxe.ui.util.CallStackHelper",5e,76,43,8d),HX_("traceCallStack",85,9a,4c,95)));
HXLINE(  13)		::haxe::Log_obj::trace(HX_(">>>>>>>>>>>>>>>>>>>>>>>>>>>> END >>>>>>>>>>>>>>>>>>>>>>>>>>>>",a5,c1,02,a0),hx::SourceInfo(HX_("CallStackHelper.hx",06,17,e3,d3),13,HX_("haxe.ui.util.CallStackHelper",5e,76,43,8d),HX_("traceCallStack",85,9a,4c,95)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CallStackHelper_obj,traceCallStack,(void))

void CallStackHelper_obj::traceExceptionStack(){
            	HX_STACKFRAME(&_hx_pos_dab627947ef7c7e5_16_traceExceptionStack)
HXLINE(  17)		::Array< ::Dynamic> arr = ::haxe::CallStack_obj::exceptionStack();
HXLINE(  18)		if (hx::IsNull( arr )) {
HXLINE(  19)			::haxe::Log_obj::trace(HX_("Callstack is null!",1a,30,ee,6f),hx::SourceInfo(HX_("CallStackHelper.hx",06,17,e3,d3),19,HX_("haxe.ui.util.CallStackHelper",5e,76,43,8d),HX_("traceExceptionStack",de,e9,61,9d)));
HXLINE(  20)			return;
            		}
HXLINE(  22)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  22)		::String _hx_tmp1 = ::haxe::CallStack_obj::toString(arr);
HXDLIN(  22)		_hx_tmp(_hx_tmp1,hx::SourceInfo(HX_("CallStackHelper.hx",06,17,e3,d3),22,HX_("haxe.ui.util.CallStackHelper",5e,76,43,8d),HX_("traceExceptionStack",de,e9,61,9d)));
HXLINE(  23)		::haxe::Log_obj::trace(HX_(">>>>>>>>>>>>>>>>>>>>>>>>>>>> END >>>>>>>>>>>>>>>>>>>>>>>>>>>>",a5,c1,02,a0),hx::SourceInfo(HX_("CallStackHelper.hx",06,17,e3,d3),23,HX_("haxe.ui.util.CallStackHelper",5e,76,43,8d),HX_("traceExceptionStack",de,e9,61,9d)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CallStackHelper_obj,traceExceptionStack,(void))

::String CallStackHelper_obj::getCallStackString(){
            	HX_STACKFRAME(&_hx_pos_dab627947ef7c7e5_26_getCallStackString)
HXLINE(  27)		::Array< ::Dynamic> arr = ::haxe::CallStack_obj::callStack();
HXLINE(  28)		if (hx::IsNull( arr )) {
HXLINE(  29)			HX_STACK_DO_THROW(HX_("Callstack is null!",1a,30,ee,6f));
            		}
HXLINE(  31)		return ::haxe::CallStack_obj::toString(arr);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CallStackHelper_obj,getCallStackString,return )


CallStackHelper_obj::CallStackHelper_obj()
{
}

bool CallStackHelper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"traceCallStack") ) { outValue = traceCallStack_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getCallStackString") ) { outValue = getCallStackString_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"traceExceptionStack") ) { outValue = traceExceptionStack_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CallStackHelper_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CallStackHelper_obj_sStaticStorageInfo = 0;
#endif

static void CallStackHelper_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CallStackHelper_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CallStackHelper_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CallStackHelper_obj::__mClass,"__mClass");
};

#endif

hx::Class CallStackHelper_obj::__mClass;

static ::String CallStackHelper_obj_sStaticFields[] = {
	HX_HCSTRING("traceCallStack","\x85","\x9a","\x4c","\x95"),
	HX_HCSTRING("traceExceptionStack","\xde","\xe9","\x61","\x9d"),
	HX_HCSTRING("getCallStackString","\x45","\x72","\xcb","\xda"),
	::String(null())
};

void CallStackHelper_obj::__register()
{
	hx::Object *dummy = new CallStackHelper_obj;
	CallStackHelper_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.util.CallStackHelper","\x5e","\x76","\x43","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CallStackHelper_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CallStackHelper_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CallStackHelper_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CallStackHelper_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CallStackHelper_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CallStackHelper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CallStackHelper_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
