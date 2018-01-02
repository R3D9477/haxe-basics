// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_TimerBase
#include <haxe/ui/backend/TimerBase.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Timer
#include <haxe/ui/util/Timer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_465eda757055cf1c_16_new,"haxe.ui.util.Timer","new",0x2b9c6e3d,"haxe.ui.util.Timer.new","haxe/ui/util/Timer.hx",16,0xc1857634)
HX_LOCAL_STACK_FRAME(_hx_pos_465eda757055cf1c_20_stop,"haxe.ui.util.Timer","stop",0x009d7385,"haxe.ui.util.Timer.stop","haxe/ui/util/Timer.hx",20,0xc1857634)
HX_LOCAL_STACK_FRAME(_hx_pos_465eda757055cf1c_8_delay,"haxe.ui.util.Timer","delay",0xdc3866a0,"haxe.ui.util.Timer.delay","haxe/ui/util/Timer.hx",8,0xc1857634)
HX_LOCAL_STACK_FRAME(_hx_pos_465eda757055cf1c_6_delay,"haxe.ui.util.Timer","delay",0xdc3866a0,"haxe.ui.util.Timer.delay","haxe/ui/util/Timer.hx",6,0xc1857634)
namespace haxe{
namespace ui{
namespace util{

void Timer_obj::__construct(int delay, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_465eda757055cf1c_16_new)
HXDLIN(  16)		super::__construct(delay,callback);
            	}

Dynamic Timer_obj::__CreateEmpty() { return new Timer_obj; }

void *Timer_obj::_hx_vtable = 0;

Dynamic Timer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Timer_obj > _hx_result = new Timer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Timer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4cb284c4) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4cb284c4;
	} else {
		return inClassId==(int)0x535acc21;
	}
}

void Timer_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_465eda757055cf1c_20_stop)
HXDLIN(  20)		this->super::stop();
            	}


 ::haxe::ui::util::Timer Timer_obj::delay( ::Dynamic f,int time_ms){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::Dynamic,f,::Array< ::Dynamic>,t) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_465eda757055cf1c_8_delay)
HXLINE(   9)			t->__get((int)0).StaticCast<  ::haxe::ui::util::Timer >()->stop();
HXLINE(  10)			f();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_465eda757055cf1c_6_delay)
HXLINE(   7)		::Array< ::Dynamic> t = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE(   8)		t[(int)0] =  ::haxe::ui::util::Timer_obj::__alloc( HX_CTX ,time_ms, ::Dynamic(new _hx_Closure_0(f,t)));
HXLINE(  12)		return t->__get((int)0).StaticCast<  ::haxe::ui::util::Timer >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,delay,return )


hx::ObjectPtr< Timer_obj > Timer_obj::__new(int delay, ::Dynamic callback) {
	hx::ObjectPtr< Timer_obj > __this = new Timer_obj();
	__this->__construct(delay,callback);
	return __this;
}

hx::ObjectPtr< Timer_obj > Timer_obj::__alloc(hx::Ctx *_hx_ctx,int delay, ::Dynamic callback) {
	Timer_obj *__this = (Timer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Timer_obj), true, "haxe.ui.util.Timer"));
	*(void **)__this = Timer_obj::_hx_vtable;
	__this->__construct(delay,callback);
	return __this;
}

Timer_obj::Timer_obj()
{
}

hx::Val Timer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return hx::Val( stop_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Timer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { outValue = delay_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Timer_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Timer_obj_sStaticStorageInfo = 0;
#endif

static ::String Timer_obj_sMemberFields[] = {
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	::String(null()) };

static void Timer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Timer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

#endif

hx::Class Timer_obj::__mClass;

static ::String Timer_obj_sStaticFields[] = {
	HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"),
	::String(null())
};

void Timer_obj::__register()
{
	hx::Object *dummy = new Timer_obj;
	Timer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.util.Timer","\xcb","\x8b","\x67","\xb8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Timer_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Timer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Timer_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Timer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Timer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Timer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Timer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Timer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
