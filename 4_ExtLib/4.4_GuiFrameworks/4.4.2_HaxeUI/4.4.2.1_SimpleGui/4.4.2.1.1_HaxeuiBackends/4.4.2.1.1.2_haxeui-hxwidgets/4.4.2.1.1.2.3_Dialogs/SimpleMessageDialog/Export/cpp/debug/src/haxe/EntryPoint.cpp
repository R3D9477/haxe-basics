// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Lock
#include <cpp/vm/Lock.h>
#endif
#ifndef INCLUDED_cpp_vm_Mutex
#include <cpp/vm/Mutex.h>
#endif
#ifndef INCLUDED_haxe_EntryPoint
#include <haxe/EntryPoint.h>
#endif
#ifndef INCLUDED_haxe_MainEvent
#include <haxe/MainEvent.h>
#endif
#ifndef INCLUDED_haxe_MainLoop
#include <haxe/MainLoop.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5139e607710b8dde_91_processEvents,"haxe.EntryPoint","processEvents",0x04eb4e60,"haxe.EntryPoint.processEvents","/usr/share/haxe/std/haxe/EntryPoint.hx",91,0x94eb0472)
HX_LOCAL_STACK_FRAME(_hx_pos_5139e607710b8dde_134_run,"haxe.EntryPoint","run",0xf0324cc3,"haxe.EntryPoint.run","/usr/share/haxe/std/haxe/EntryPoint.hx",134,0x94eb0472)
HX_LOCAL_STACK_FRAME(_hx_pos_5139e607710b8dde_46_boot,"haxe.EntryPoint","boot",0x3138e7ba,"haxe.EntryPoint.boot","/usr/share/haxe/std/haxe/EntryPoint.hx",46,0x94eb0472)
HX_LOCAL_STACK_FRAME(_hx_pos_5139e607710b8dde_47_boot,"haxe.EntryPoint","boot",0x3138e7ba,"haxe.EntryPoint.boot","/usr/share/haxe/std/haxe/EntryPoint.hx",47,0x94eb0472)
HX_LOCAL_STACK_FRAME(_hx_pos_5139e607710b8dde_49_boot,"haxe.EntryPoint","boot",0x3138e7ba,"haxe.EntryPoint.boot","/usr/share/haxe/std/haxe/EntryPoint.hx",49,0x94eb0472)
HX_LOCAL_STACK_FRAME(_hx_pos_5139e607710b8dde_51_boot,"haxe.EntryPoint","boot",0x3138e7ba,"haxe.EntryPoint.boot","/usr/share/haxe/std/haxe/EntryPoint.hx",51,0x94eb0472)
namespace haxe{

void EntryPoint_obj::__construct() { }

Dynamic EntryPoint_obj::__CreateEmpty() { return new EntryPoint_obj; }

void *EntryPoint_obj::_hx_vtable = 0;

Dynamic EntryPoint_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EntryPoint_obj > _hx_result = new EntryPoint_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EntryPoint_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x063dd2e8;
}

 ::cpp::vm::Lock EntryPoint_obj::sleepLock;

 ::cpp::vm::Mutex EntryPoint_obj::mutex;

::Array< ::Dynamic> EntryPoint_obj::pending;

int EntryPoint_obj::threadCount;

Float EntryPoint_obj::processEvents(){
            	HX_STACKFRAME(&_hx_pos_5139e607710b8dde_91_processEvents)
HXLINE(  93)		while(true){
HXLINE(  95)			::haxe::EntryPoint_obj::mutex->acquire();
HXLINE(  96)			 ::Dynamic f = ::haxe::EntryPoint_obj::pending->shift();
HXLINE(  97)			::haxe::EntryPoint_obj::mutex->release();
HXLINE( 101)			if (hx::IsNull( f )) {
HXLINE( 101)				goto _hx_goto_0;
            			}
HXLINE( 102)			f();
            		}
            		_hx_goto_0:;
HXLINE( 104)		bool _hx_tmp;
HXDLIN( 104)		if (hx::IsNull( ::haxe::MainLoop_obj::pending )) {
HXLINE( 104)			_hx_tmp = (::haxe::EntryPoint_obj::threadCount == (int)0);
            		}
            		else {
HXLINE( 104)			_hx_tmp = false;
            		}
HXDLIN( 104)		if (_hx_tmp) {
HXLINE( 105)			return (int)-1;
            		}
HXLINE( 106)		return ::haxe::MainLoop_obj::tick();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(EntryPoint_obj,processEvents,return )

void EntryPoint_obj::run(){
            	HX_STACKFRAME(&_hx_pos_5139e607710b8dde_134_run)
HXDLIN( 134)		while(true){
HXLINE( 135)			Float nextTick = ::haxe::EntryPoint_obj::processEvents();
HXLINE( 136)			if ((nextTick < (int)0)) {
HXLINE( 137)				goto _hx_goto_2;
            			}
HXLINE( 138)			if ((nextTick > (int)0)) {
HXLINE( 139)				::haxe::EntryPoint_obj::sleepLock->wait(nextTick);
            			}
            		}
            		_hx_goto_2:;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(EntryPoint_obj,run,(void))


EntryPoint_obj::EntryPoint_obj()
{
}

bool EntryPoint_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { outValue = ( mutex ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pending") ) { outValue = ( pending ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sleepLock") ) { outValue = ( sleepLock ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"threadCount") ) { outValue = ( threadCount ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"processEvents") ) { outValue = processEvents_dyn(); return true; }
	}
	return false;
}

bool EntryPoint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { mutex=ioValue.Cast<  ::cpp::vm::Mutex >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pending") ) { pending=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sleepLock") ) { sleepLock=ioValue.Cast<  ::cpp::vm::Lock >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"threadCount") ) { threadCount=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *EntryPoint_obj_sMemberStorageInfo = 0;
static hx::StaticInfo EntryPoint_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::vm::Lock*/ ,(void *) &EntryPoint_obj::sleepLock,HX_HCSTRING("sleepLock","\xa2","\x5c","\x2f","\x5d")},
	{hx::fsObject /*::cpp::vm::Mutex*/ ,(void *) &EntryPoint_obj::mutex,HX_HCSTRING("mutex","\x7f","\x8f","\x5b","\x10")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &EntryPoint_obj::pending,HX_HCSTRING("pending","\x57","\x98","\xec","\x2b")},
	{hx::fsInt,(void *) &EntryPoint_obj::threadCount,HX_HCSTRING("threadCount","\xa5","\xdd","\x53","\x9e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void EntryPoint_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EntryPoint_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EntryPoint_obj::sleepLock,"sleepLock");
	HX_MARK_MEMBER_NAME(EntryPoint_obj::mutex,"mutex");
	HX_MARK_MEMBER_NAME(EntryPoint_obj::pending,"pending");
	HX_MARK_MEMBER_NAME(EntryPoint_obj::threadCount,"threadCount");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EntryPoint_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EntryPoint_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EntryPoint_obj::sleepLock,"sleepLock");
	HX_VISIT_MEMBER_NAME(EntryPoint_obj::mutex,"mutex");
	HX_VISIT_MEMBER_NAME(EntryPoint_obj::pending,"pending");
	HX_VISIT_MEMBER_NAME(EntryPoint_obj::threadCount,"threadCount");
};

#endif

hx::Class EntryPoint_obj::__mClass;

static ::String EntryPoint_obj_sStaticFields[] = {
	HX_HCSTRING("sleepLock","\xa2","\x5c","\x2f","\x5d"),
	HX_HCSTRING("mutex","\x7f","\x8f","\x5b","\x10"),
	HX_HCSTRING("pending","\x57","\x98","\xec","\x2b"),
	HX_HCSTRING("threadCount","\xa5","\xdd","\x53","\x9e"),
	HX_HCSTRING("processEvents","\xe8","\x62","\xbd","\x6c"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null())
};

void EntryPoint_obj::__register()
{
	hx::Object *dummy = new EntryPoint_obj;
	EntryPoint_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.EntryPoint","\xe6","\xa9","\xc1","\xb6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EntryPoint_obj::__GetStatic;
	__mClass->mSetStaticField = &EntryPoint_obj::__SetStatic;
	__mClass->mMarkFunc = EntryPoint_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(EntryPoint_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< EntryPoint_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EntryPoint_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EntryPoint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EntryPoint_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void EntryPoint_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_5139e607710b8dde_46_boot)
HXDLIN(  46)		sleepLock =  ::cpp::vm::Lock_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_5139e607710b8dde_47_boot)
HXDLIN(  47)		mutex =  ::cpp::vm::Mutex_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_5139e607710b8dde_49_boot)
HXDLIN(  49)		pending = ::Array_obj< ::Dynamic>::__new();
            	}
{
            	HX_STACKFRAME(&_hx_pos_5139e607710b8dde_51_boot)
HXDLIN(  51)		threadCount = (int)0;
            	}
}

} // end namespace haxe
