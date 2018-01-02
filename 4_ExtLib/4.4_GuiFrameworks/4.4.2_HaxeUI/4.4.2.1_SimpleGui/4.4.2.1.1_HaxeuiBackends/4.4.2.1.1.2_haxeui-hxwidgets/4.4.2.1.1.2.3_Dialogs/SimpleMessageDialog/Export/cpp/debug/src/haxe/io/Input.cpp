// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_254a12b9e3136e41_51_readByte,"haxe.io.Input","readByte",0x4de8a3c2,"haxe.io.Input.readByte","/usr/share/haxe/std/haxe/io/Input.hx",51,0x1cc3d0af)
HX_LOCAL_STACK_FRAME(_hx_pos_254a12b9e3136e41_64_readBytes,"haxe.io.Input","readBytes",0xdda6a671,"haxe.io.Input.readBytes","/usr/share/haxe/std/haxe/io/Input.hx",64,0x1cc3d0af)
HX_LOCAL_STACK_FRAME(_hx_pos_254a12b9e3136e41_135_readFullBytes,"haxe.io.Input","readFullBytes",0x3db9a162,"haxe.io.Input.readFullBytes","/usr/share/haxe/std/haxe/io/Input.hx",135,0x1cc3d0af)
HX_LOCAL_STACK_FRAME(_hx_pos_254a12b9e3136e41_303_readString,"haxe.io.Input","readString",0xfdebd00b,"haxe.io.Input.readString","/usr/share/haxe/std/haxe/io/Input.hx",303,0x1cc3d0af)
namespace haxe{
namespace io{

void Input_obj::__construct() { }

Dynamic Input_obj::__CreateEmpty() { return new Input_obj; }

void *Input_obj::_hx_vtable = 0;

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Input_obj > _hx_result = new Input_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Input_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5c18cd32;
}

int Input_obj::readByte(){
            	HX_STACKFRAME(&_hx_pos_254a12b9e3136e41_51_readByte)
HXDLIN(  51)		HX_STACK_DO_THROW(HX_("Not implemented",15,1e,32,34));
HXDLIN(  51)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readByte,return )

int Input_obj::readBytes( ::haxe::io::Bytes s,int pos,int len){
            	HX_STACKFRAME(&_hx_pos_254a12b9e3136e41_64_readBytes)
HXLINE(  65)		int k = len;
HXLINE(  66)		::Array< unsigned char > b = s->b;
HXLINE(  67)		bool _hx_tmp;
HXDLIN(  67)		bool _hx_tmp1;
HXDLIN(  67)		if ((pos >= (int)0)) {
HXLINE(  67)			_hx_tmp1 = (len < (int)0);
            		}
            		else {
HXLINE(  67)			_hx_tmp1 = true;
            		}
HXDLIN(  67)		if (!(_hx_tmp1)) {
HXLINE(  67)			_hx_tmp = ((pos + len) > s->length);
            		}
            		else {
HXLINE(  67)			_hx_tmp = true;
            		}
HXDLIN(  67)		if (_hx_tmp) {
HXLINE(  68)			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds_dyn());
            		}
HXLINE(  69)		try {
            			HX_STACK_CATCHABLE( ::haxe::io::Eof, 0);
HXLINE(  70)			while((k > (int)0)){
HXLINE(  76)				b[pos] = this->readByte();
HXLINE(  80)				pos = (pos + (int)1);
HXLINE(  81)				k = (k - (int)1);
            			}
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::haxe::io::Eof >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::haxe::io::Eof eof = _hx_e;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  84)		return (len - k);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,readBytes,return )

void Input_obj::readFullBytes( ::haxe::io::Bytes s,int pos,int len){
            	HX_STACKFRAME(&_hx_pos_254a12b9e3136e41_135_readFullBytes)
HXDLIN( 135)		while((len > (int)0)){
HXLINE( 136)			int k = this->readBytes(s,pos,len);
HXLINE( 137)			if ((k == (int)0)) {
HXLINE( 138)				HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked_dyn());
            			}
HXLINE( 139)			pos = (pos + k);
HXLINE( 140)			len = (len - k);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,readFullBytes,(void))

::String Input_obj::readString(int len){
            	HX_STACKFRAME(&_hx_pos_254a12b9e3136e41_303_readString)
HXLINE( 304)		 ::haxe::io::Bytes b = ::haxe::io::Bytes_obj::alloc(len);
HXLINE( 305)		this->readFullBytes(b,(int)0,len);
HXLINE( 309)		return b->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,readString,return )


Input_obj::Input_obj()
{
}

hx::Val Input_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return hx::Val( readByte_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return hx::Val( readBytes_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readString") ) { return hx::Val( readString_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readFullBytes") ) { return hx::Val( readFullBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Input_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Input_obj_sStaticStorageInfo = 0;
#endif

static ::String Input_obj_sMemberFields[] = {
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	HX_HCSTRING("readFullBytes","\x26","\x02","\x0b","\xce"),
	HX_HCSTRING("readString","\xc7","\x0c","\xac","\x0a"),
	::String(null()) };

static void Input_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Input_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#endif

hx::Class Input_obj::__mClass;

void Input_obj::__register()
{
	hx::Object *dummy = new Input_obj;
	Input_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.Input","\xaa","\x0e","\xf5","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Input_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Input_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Input_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Input_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Input_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Input_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
