// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d7b859380a446c23_31_new,"haxe.ds.EnumValueMap","new",0x9ce29655,"haxe.ds.EnumValueMap.new","/usr/share/haxe/std/haxe/ds/EnumValueMap.hx",31,0x3cf605c0)
HX_LOCAL_STACK_FRAME(_hx_pos_d7b859380a446c23_33_compare,"haxe.ds.EnumValueMap","compare",0x806a7d1a,"haxe.ds.EnumValueMap.compare","/usr/share/haxe/std/haxe/ds/EnumValueMap.hx",33,0x3cf605c0)
HX_LOCAL_STACK_FRAME(_hx_pos_d7b859380a446c23_42_compareArgs,"haxe.ds.EnumValueMap","compareArgs",0x37a5cb97,"haxe.ds.EnumValueMap.compareArgs","/usr/share/haxe/std/haxe/ds/EnumValueMap.hx",42,0x3cf605c0)
HX_LOCAL_STACK_FRAME(_hx_pos_d7b859380a446c23_53_compareArg,"haxe.ds.EnumValueMap","compareArg",0xcee2e55c,"haxe.ds.EnumValueMap.compareArg","/usr/share/haxe/std/haxe/ds/EnumValueMap.hx",53,0x3cf605c0)
namespace haxe{
namespace ds{

void EnumValueMap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d7b859380a446c23_31_new)
HXDLIN(  31)		super::__construct();
            	}

Dynamic EnumValueMap_obj::__CreateEmpty() { return new EnumValueMap_obj; }

void *EnumValueMap_obj::_hx_vtable = 0;

Dynamic EnumValueMap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EnumValueMap_obj > _hx_result = new EnumValueMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EnumValueMap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x04042deb) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x04042deb;
	} else {
		return inClassId==(int)0x13b42f39;
	}
}

static ::haxe::IMap_obj _hx_haxe_ds_EnumValueMap__hx_haxe_IMap= {
	(  ::Dynamic (hx::Object::*)( ::Dynamic))&::haxe::ds::EnumValueMap_obj::get,
	( void (hx::Object::*)( ::Dynamic, ::Dynamic))&::haxe::ds::EnumValueMap_obj::set_41d0cb46,
	( bool (hx::Object::*)( ::Dynamic))&::haxe::ds::EnumValueMap_obj::exists,
	( bool (hx::Object::*)( ::Dynamic))&::haxe::ds::EnumValueMap_obj::remove,
};

void EnumValueMap_obj::set_41d0cb46( ::Dynamic k, ::Dynamic v) {
			set(k,v);
}
void *EnumValueMap_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x09c2bd39: return &_hx_haxe_ds_EnumValueMap__hx_haxe_IMap;
	}
	return super::_hx_getInterface(inHash);
}

int EnumValueMap_obj::compare( ::Dynamic _tmp_k1, ::Dynamic _tmp_k2){
            	HX_STACKFRAME(&_hx_pos_d7b859380a446c23_33_compare)
HXLINE(  34)		 ::Dynamic k1 = _tmp_k1;
HXDLIN(  34)		 ::Dynamic k2 = _tmp_k2;
HXDLIN(  34)		int d = _hx_getEnumValueIndex(k1);
HXDLIN(  34)		int d1 = (d - _hx_getEnumValueIndex(k2));
HXLINE(  35)		if ((d1 != (int)0)) {
HXLINE(  35)			return d1;
            		}
HXLINE(  36)		::cpp::VirtualArray p1 = ::Type_obj::enumParameters(k1);
HXLINE(  37)		::cpp::VirtualArray p2 = ::Type_obj::enumParameters(k2);
HXLINE(  38)		bool _hx_tmp;
HXDLIN(  38)		if ((p1->get_length() == (int)0)) {
HXLINE(  38)			_hx_tmp = (p2->get_length() == (int)0);
            		}
            		else {
HXLINE(  38)			_hx_tmp = false;
            		}
HXDLIN(  38)		if (_hx_tmp) {
HXLINE(  38)			return (int)0;
            		}
HXLINE(  39)		return this->compareArgs(p1,p2);
            	}


int EnumValueMap_obj::compareArgs(::cpp::VirtualArray a1,::cpp::VirtualArray a2){
            	HX_STACKFRAME(&_hx_pos_d7b859380a446c23_42_compareArgs)
HXLINE(  43)		int ld = (a1->get_length() - a2->get_length());
HXLINE(  44)		if ((ld != (int)0)) {
HXLINE(  44)			return ld;
            		}
HXLINE(  45)		{
HXLINE(  45)			int _g1 = (int)0;
HXDLIN(  45)			int _g = a1->get_length();
HXDLIN(  45)			while((_g1 < _g)){
HXLINE(  45)				_g1 = (_g1 + (int)1);
HXDLIN(  45)				int i = (_g1 - (int)1);
HXLINE(  46)				int d = this->compareArg(a1->__get(i),a2->__get(i));
HXLINE(  47)				if ((d != (int)0)) {
HXLINE(  47)					return d;
            				}
            			}
            		}
HXLINE(  49)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(EnumValueMap_obj,compareArgs,return )

int EnumValueMap_obj::compareArg( ::Dynamic v1, ::Dynamic v2){
            	HX_STACKFRAME(&_hx_pos_d7b859380a446c23_53_compareArg)
HXDLIN(  53)		bool _hx_tmp;
HXDLIN(  53)		if (::Reflect_obj::isEnumValue(v1)) {
HXDLIN(  53)			_hx_tmp = ::Reflect_obj::isEnumValue(v2);
            		}
            		else {
HXDLIN(  53)			_hx_tmp = false;
            		}
HXDLIN(  53)		if (_hx_tmp) {
HXLINE(  54)			return this->compare(v1,v2);
            		}
            		else {
HXLINE(  55)			bool _hx_tmp1;
HXDLIN(  55)			if (::Std_obj::is(v1,hx::ArrayBase::__mClass)) {
HXLINE(  55)				_hx_tmp1 = ::Std_obj::is(v2,hx::ArrayBase::__mClass);
            			}
            			else {
HXLINE(  55)				_hx_tmp1 = false;
            			}
HXDLIN(  55)			if (_hx_tmp1) {
HXLINE(  56)				return this->compareArgs(( (::cpp::VirtualArray)(v1) ),( (::cpp::VirtualArray)(v2) ));
            			}
            			else {
HXLINE(  58)				return ::Reflect_obj::compare(v1,v2);
            			}
            		}
HXLINE(  53)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(EnumValueMap_obj,compareArg,return )


hx::ObjectPtr< EnumValueMap_obj > EnumValueMap_obj::__new() {
	hx::ObjectPtr< EnumValueMap_obj > __this = new EnumValueMap_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< EnumValueMap_obj > EnumValueMap_obj::__alloc(hx::Ctx *_hx_ctx) {
	EnumValueMap_obj *__this = (EnumValueMap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(EnumValueMap_obj), true, "haxe.ds.EnumValueMap"));
	*(void **)__this = EnumValueMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

EnumValueMap_obj::EnumValueMap_obj()
{
}

hx::Val EnumValueMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return hx::Val( compare_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"compareArg") ) { return hx::Val( compareArg_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"compareArgs") ) { return hx::Val( compareArgs_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *EnumValueMap_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *EnumValueMap_obj_sStaticStorageInfo = 0;
#endif

static ::String EnumValueMap_obj_sMemberFields[] = {
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	HX_HCSTRING("compareArgs","\xa2","\x88","\x40","\xb6"),
	HX_HCSTRING("compareArg","\xb1","\xd2","\x97","\x0e"),
	::String(null()) };

static void EnumValueMap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnumValueMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EnumValueMap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnumValueMap_obj::__mClass,"__mClass");
};

#endif

hx::Class EnumValueMap_obj::__mClass;

void EnumValueMap_obj::__register()
{
	hx::Object *dummy = new EnumValueMap_obj;
	EnumValueMap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds.EnumValueMap","\xe3","\xc7","\x41","\x58");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = EnumValueMap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(EnumValueMap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EnumValueMap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EnumValueMap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EnumValueMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EnumValueMap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
