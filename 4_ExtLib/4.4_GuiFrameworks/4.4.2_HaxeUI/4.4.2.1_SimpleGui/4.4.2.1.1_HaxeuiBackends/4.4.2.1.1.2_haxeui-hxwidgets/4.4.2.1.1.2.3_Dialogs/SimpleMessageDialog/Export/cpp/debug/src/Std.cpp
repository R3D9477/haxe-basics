// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_10265659e446e554_24_is,"Std","is",0x3c56d6f5,"Std.is","/usr/share/haxe/std/cpp/_std/Std.hx",24,0x63298cdf)
HX_LOCAL_STACK_FRAME(_hx_pos_10265659e446e554_28_instance,"Std","instance",0x1431f4e0,"Std.instance","/usr/share/haxe/std/cpp/_std/Std.hx",28,0x63298cdf)
HX_LOCAL_STACK_FRAME(_hx_pos_10265659e446e554_32_string,"Std","string",0xcf48855c,"Std.string","/usr/share/haxe/std/cpp/_std/Std.hx",32,0x63298cdf)
HX_LOCAL_STACK_FRAME(_hx_pos_10265659e446e554_36_int,"Std","int",0x8fa53b84,"Std.int","/usr/share/haxe/std/cpp/_std/Std.hx",36,0x63298cdf)
HX_LOCAL_STACK_FRAME(_hx_pos_10265659e446e554_40_parseInt,"Std","parseInt",0x90c2ebc7,"Std.parseInt","/usr/share/haxe/std/cpp/_std/Std.hx",40,0x63298cdf)
HX_LOCAL_STACK_FRAME(_hx_pos_10265659e446e554_44_parseFloat,"Std","parseFloat",0xbca10a74,"Std.parseFloat","/usr/share/haxe/std/cpp/_std/Std.hx",44,0x63298cdf)
HX_LOCAL_STACK_FRAME(_hx_pos_10265659e446e554_47_random,"Std","random",0x75a77e8e,"Std.random","/usr/share/haxe/std/cpp/_std/Std.hx",47,0x63298cdf)

void Std_obj::__construct() { }

Dynamic Std_obj::__CreateEmpty() { return new Std_obj; }

void *Std_obj::_hx_vtable = 0;

Dynamic Std_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Std_obj > _hx_result = new Std_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Std_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x003f6083;
}

bool Std_obj::is( ::Dynamic v, ::Dynamic t){
            	HX_STACKFRAME(&_hx_pos_10265659e446e554_24_is)
HXDLIN(  24)		return ::__instanceof(v,t);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Std_obj,is,return )

 ::Dynamic Std_obj::instance( ::Dynamic value,hx::Class c){
            	HX_STACKFRAME(&_hx_pos_10265659e446e554_28_instance)
HXDLIN(  28)		if (::Std_obj::is(value,c)) {
HXDLIN(  28)			return value;
            		}
            		else {
HXDLIN(  28)			return null();
            		}
HXDLIN(  28)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Std_obj,instance,return )

::String Std_obj::string( ::Dynamic s){
            	HX_STACKFRAME(&_hx_pos_10265659e446e554_32_string)
HXDLIN(  32)		if (hx::IsNull( s )) {
HXDLIN(  32)			return HX_("null",87,9e,0e,49);
            		}
            		else {
HXDLIN(  32)			return ( (::String)(s->toString()) );
            		}
HXDLIN(  32)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Std_obj,string,return )

int Std_obj::_hx_int(Float x){
            	HX_STACKFRAME(&_hx_pos_10265659e446e554_36_int)
HXDLIN(  36)		return ::__int__(x);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Std_obj,_hx_int,return )

 ::Dynamic Std_obj::parseInt(::String x){
            	HX_STACKFRAME(&_hx_pos_10265659e446e554_40_parseInt)
HXDLIN(  40)		return ::__hxcpp_parse_int(x);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Std_obj,parseInt,return )

Float Std_obj::parseFloat(::String x){
            	HX_STACKFRAME(&_hx_pos_10265659e446e554_44_parseFloat)
HXDLIN(  44)		return ::__hxcpp_parse_float(x);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Std_obj,parseFloat,return )

int Std_obj::random(int x){
            	HX_STACKFRAME(&_hx_pos_10265659e446e554_47_random)
HXLINE(  48)		if ((x <= (int)0)) {
HXLINE(  48)			return (int)0;
            		}
HXLINE(  49)		return ::__hxcpp_irand(x);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Std_obj,random,return )


Std_obj::Std_obj()
{
}

bool Std_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"is") ) { outValue = is_dyn(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { outValue = _hx_int_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"string") ) { outValue = string_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"random") ) { outValue = random_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = instance_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"parseInt") ) { outValue = parseInt_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parseFloat") ) { outValue = parseFloat_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Std_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Std_obj_sStaticStorageInfo = 0;
#endif

static void Std_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Std_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Std_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Std_obj::__mClass,"__mClass");
};

#endif

hx::Class Std_obj::__mClass;

static ::String Std_obj_sStaticFields[] = {
	HX_HCSTRING("is","\xea","\x5b","\x00","\x00"),
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("string","\xd1","\x28","\x30","\x11"),
	HX_HCSTRING("int","\xef","\x0c","\x50","\x00"),
	HX_HCSTRING("parseInt","\x7c","\x16","\x72","\xd6"),
	HX_HCSTRING("parseFloat","\x69","\x0c","\x78","\x2c"),
	HX_HCSTRING("random","\x03","\x22","\x8f","\xb7"),
	::String(null())
};

void Std_obj::__register()
{
	hx::Object *dummy = new Std_obj;
	Std_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Std","\x83","\x60","\x3f","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Std_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Std_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Std_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Std_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Std_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Std_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Std_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

