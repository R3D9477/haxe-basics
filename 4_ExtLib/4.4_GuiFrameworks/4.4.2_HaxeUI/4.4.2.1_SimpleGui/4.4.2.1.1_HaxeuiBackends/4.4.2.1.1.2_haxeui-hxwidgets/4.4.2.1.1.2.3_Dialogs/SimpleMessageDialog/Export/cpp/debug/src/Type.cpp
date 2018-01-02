// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_36_getClass,"Type","getClass",0xc4e49bd6,"Type.getClass","/usr/share/haxe/std/cpp/_std/Type.hx",36,0x978d9ce0)
HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_54_getSuperClass,"Type","getSuperClass",0xd9ffa85f,"Type.getSuperClass","/usr/share/haxe/std/cpp/_std/Type.hx",54,0x978d9ce0)
HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_57_getClassName,"Type","getClassName",0x8e66dd41,"Type.getClassName","/usr/share/haxe/std/cpp/_std/Type.hx",57,0x978d9ce0)
HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_67_resolveClass,"Type","resolveClass",0x23b06bc0,"Type.resolveClass","/usr/share/haxe/std/cpp/_std/Type.hx",67,0x978d9ce0)
HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_81_createInstance,"Type","createInstance",0xab84f9c5,"Type.createInstance","/usr/share/haxe/std/cpp/_std/Type.hx",81,0x978d9ce0)
HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_88_createEmptyInstance,"Type","createEmptyInstance",0xcb752312,"Type.createEmptyInstance","/usr/share/haxe/std/cpp/_std/Type.hx",88,0x978d9ce0)
HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_113_typeof,"Type","typeof",0xd6c51d65,"Type.typeof","/usr/share/haxe/std/cpp/_std/Type.hx",113,0x978d9ce0)
HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_130_enumEq,"Type","enumEq",0x855650e1,"Type.enumEq","/usr/share/haxe/std/cpp/_std/Type.hx",130,0x978d9ce0)
HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_133_enumConstructor,"Type","enumConstructor",0x45f8fde5,"Type.enumConstructor","/usr/share/haxe/std/cpp/_std/Type.hx",133,0x978d9ce0)
HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_138_enumParameters,"Type","enumParameters",0xf9e1b41f,"Type.enumParameters","/usr/share/haxe/std/cpp/_std/Type.hx",138,0x978d9ce0)

void Type_obj::__construct() { }

Dynamic Type_obj::__CreateEmpty() { return new Type_obj; }

void *Type_obj::_hx_vtable = 0;

Dynamic Type_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Type_obj > _hx_result = new Type_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Type_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x37e21eda;
}

hx::Class Type_obj::getClass( ::Dynamic o){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_36_getClass)
HXLINE(  37)		bool _hx_tmp;
HXDLIN(  37)		if (hx::IsNotNull( o )) {
HXLINE(  37)			_hx_tmp = !(::Reflect_obj::isObject(o));
            		}
            		else {
HXLINE(  37)			_hx_tmp = true;
            		}
HXDLIN(  37)		if (_hx_tmp) {
HXLINE(  37)			return null();
            		}
HXLINE(  38)		 ::Dynamic c = o->__GetClass();
HXLINE(  39)		{
HXLINE(  39)			::String _g = ( (::String)(c->toString()) );
HXDLIN(  39)			::String _hx_switch_0 = _g;
            			if (  (_hx_switch_0==HX_("Class",18,e8,85,db)) ){
HXLINE(  42)				return null();
HXDLIN(  42)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==HX_("__Anon",8c,1a,43,da)) ){
HXLINE(  41)				return null();
HXDLIN(  41)				goto _hx_goto_0;
            			}
            			_hx_goto_0:;
            		}
HXLINE(  44)		return c;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getClass,return )

hx::Class Type_obj::getSuperClass(hx::Class c){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_54_getSuperClass)
HXDLIN(  54)		return c->GetSuper();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getSuperClass,return )

::String Type_obj::getClassName(hx::Class c){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_57_getClassName)
HXLINE(  58)		if (hx::IsNull( c )) {
HXLINE(  59)			return null();
            		}
HXLINE(  60)		return c->mName;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getClassName,return )

hx::Class Type_obj::resolveClass(::String name){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_67_resolveClass)
HXLINE(  68)		hx::Class result = ::hx::Class_obj::Resolve(name);
HXLINE(  69)		bool _hx_tmp;
HXDLIN(  69)		if (hx::IsNotNull( result )) {
HXLINE(  69)			_hx_tmp = ( (bool)(result->__IsEnum()) );
            		}
            		else {
HXLINE(  69)			_hx_tmp = false;
            		}
HXDLIN(  69)		if (_hx_tmp) {
HXLINE(  70)			return null();
            		}
HXLINE(  71)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,resolveClass,return )

 ::Dynamic Type_obj::createInstance(hx::Class cl,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_81_createInstance)
HXLINE(  82)		if (hx::IsNotNull( cl )) {
HXLINE(  83)			return cl->ConstructArgs(args);
            		}
HXLINE(  84)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Type_obj,createInstance,return )

 ::Dynamic Type_obj::createEmptyInstance(hx::Class cl){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_88_createEmptyInstance)
HXDLIN(  88)		return cl->ConstructEmpty();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,createEmptyInstance,return )

 ::ValueType Type_obj::_hx_typeof( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_113_typeof)
HXLINE( 114)		if (hx::IsNull( v )) {
HXLINE( 114)			return ::ValueType_obj::TNull_dyn();
            		}
HXLINE( 115)		int t = ( (int)(v->__GetType()) );
HXLINE( 116)		switch((int)(t)){
            			case (int)1: {
HXLINE( 120)				return ::ValueType_obj::TFloat_dyn();
            			}
            			break;
            			case (int)2: {
HXLINE( 118)				return ::ValueType_obj::TBool_dyn();
            			}
            			break;
            			case (int)4: {
HXLINE( 122)				return ::ValueType_obj::TObject_dyn();
            			}
            			break;
            			case (int)6: {
HXLINE( 121)				return ::ValueType_obj::TFunction_dyn();
            			}
            			break;
            			case (int)7: {
HXLINE( 123)				return ::ValueType_obj::TEnum(v->__GetClass());
            			}
            			break;
            			case (int)255: {
HXLINE( 119)				return ::ValueType_obj::TInt_dyn();
            			}
            			break;
            			default:{
HXLINE( 125)				return ::ValueType_obj::TClass(v->__GetClass());
            			}
            		}
HXLINE( 116)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,_hx_typeof,return )

bool Type_obj::enumEq( ::Dynamic a, ::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_130_enumEq)
HXDLIN( 130)		return hx::IsEq( a,b );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Type_obj,enumEq,return )

::String Type_obj::enumConstructor( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_133_enumConstructor)
HXLINE( 134)		 hx::EnumBase value = ( ( hx::EnumBase)(e) );
HXLINE( 135)		return value->_hx_getTag();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,enumConstructor,return )

::cpp::VirtualArray Type_obj::enumParameters( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_138_enumParameters)
HXLINE( 139)		 hx::EnumBase value = ( ( hx::EnumBase)(e) );
HXLINE( 140)		return value->_hx_getParameters();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,enumParameters,return )


Type_obj::Type_obj()
{
}

bool Type_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"typeof") ) { outValue = _hx_typeof_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"enumEq") ) { outValue = enumEq_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getClass") ) { outValue = getClass_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getClassName") ) { outValue = getClassName_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"resolveClass") ) { outValue = resolveClass_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getSuperClass") ) { outValue = getSuperClass_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createInstance") ) { outValue = createInstance_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"enumParameters") ) { outValue = enumParameters_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"enumConstructor") ) { outValue = enumConstructor_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"createEmptyInstance") ) { outValue = createEmptyInstance_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Type_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Type_obj_sStaticStorageInfo = 0;
#endif

static void Type_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Type_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Type_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Type_obj::__mClass,"__mClass");
};

#endif

hx::Class Type_obj::__mClass;

static ::String Type_obj_sStaticFields[] = {
	HX_HCSTRING("getClass","\xc2","\x87","\x2f","\xa8"),
	HX_HCSTRING("getSuperClass","\xf3","\x04","\x7a","\x04"),
	HX_HCSTRING("getClassName","\x2d","\x2f","\x94","\xeb"),
	HX_HCSTRING("resolveClass","\xac","\xbd","\xdd","\x80"),
	HX_HCSTRING("createInstance","\xb1","\x9e","\x1b","\xac"),
	HX_HCSTRING("createEmptyInstance","\xa6","\x26","\x85","\xce"),
	HX_HCSTRING("typeof","\x51","\xf6","\x36","\x57"),
	HX_HCSTRING("enumEq","\xcd","\x29","\xc8","\x05"),
	HX_HCSTRING("enumConstructor","\x79","\xa7","\x32","\xc9"),
	HX_HCSTRING("enumParameters","\x0b","\x59","\x78","\xfa"),
	::String(null())
};

void Type_obj::__register()
{
	hx::Object *dummy = new Type_obj;
	Type_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Type","\xda","\x1e","\xe2","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Type_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Type_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Type_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Type_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Type_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Type_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Type_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

