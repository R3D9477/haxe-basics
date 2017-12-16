// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bafb5aba549b371d_33_new,"haxe.io.Bytes","new",0x3938d57d,"haxe.io.Bytes.new","/usr/share/haxe/std/haxe/io/Bytes.hx",33,0xb829beee)
HX_LOCAL_STACK_FRAME(_hx_pos_bafb5aba549b371d_360_getString,"haxe.io.Bytes","getString",0xa16beae4,"haxe.io.Bytes.getString","/usr/share/haxe/std/haxe/io/Bytes.hx",360,0xb829beee)
HX_LOCAL_STACK_FRAME(_hx_pos_bafb5aba549b371d_440_toString,"haxe.io.Bytes","toString",0x0291226f,"haxe.io.Bytes.toString","/usr/share/haxe/std/haxe/io/Bytes.hx",440,0xb829beee)
HX_LOCAL_STACK_FRAME(_hx_pos_bafb5aba549b371d_462_alloc,"haxe.io.Bytes","alloc",0x2199ead2,"haxe.io.Bytes.alloc","/usr/share/haxe/std/haxe/io/Bytes.hx",462,0xb829beee)
HX_LOCAL_STACK_FRAME(_hx_pos_bafb5aba549b371d_490_ofString,"haxe.io.Bytes","ofString",0x6e53bb0b,"haxe.io.Bytes.ofString","/usr/share/haxe/std/haxe/io/Bytes.hx",490,0xb829beee)
HX_LOCAL_STACK_FRAME(_hx_pos_bafb5aba549b371d_561_ofData,"haxe.io.Bytes","ofData",0x4f3005e4,"haxe.io.Bytes.ofData","/usr/share/haxe/std/haxe/io/Bytes.hx",561,0xb829beee)
namespace haxe{
namespace io{

void Bytes_obj::__construct(int length,::Array< unsigned char > b){
            	HX_STACKFRAME(&_hx_pos_bafb5aba549b371d_33_new)
HXLINE(  34)		this->length = length;
HXLINE(  35)		this->b = b;
            	}

Dynamic Bytes_obj::__CreateEmpty() { return new Bytes_obj; }

void *Bytes_obj::_hx_vtable = 0;

Dynamic Bytes_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Bytes_obj > _hx_result = new Bytes_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Bytes_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5b931193;
}

::String Bytes_obj::getString(int pos,int len){
            	HX_STACKFRAME(&_hx_pos_bafb5aba549b371d_360_getString)
HXLINE( 362)		bool _hx_tmp;
HXDLIN( 362)		bool _hx_tmp1;
HXDLIN( 362)		if ((pos >= (int)0)) {
HXLINE( 362)			_hx_tmp1 = (len < (int)0);
            		}
            		else {
HXLINE( 362)			_hx_tmp1 = true;
            		}
HXDLIN( 362)		if (!(_hx_tmp1)) {
HXLINE( 362)			_hx_tmp = ((pos + len) > this->length);
            		}
            		else {
HXLINE( 362)			_hx_tmp = true;
            		}
HXDLIN( 362)		if (_hx_tmp) {
HXLINE( 362)			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds_dyn());
            		}
HXLINE( 372)		::String result = HX_("",00,00,00,00);
HXLINE( 373)		::__hxcpp_string_of_bytes(this->b,result,pos,len);
HXLINE( 374)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,getString,return )

::String Bytes_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_bafb5aba549b371d_440_toString)
HXDLIN( 440)		return this->getString((int)0,this->length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bytes_obj,toString,return )

 ::haxe::io::Bytes Bytes_obj::alloc(int length){
            	HX_GC_STACKFRAME(&_hx_pos_bafb5aba549b371d_462_alloc)
HXLINE( 472)		::Array< unsigned char > a = ::Array_obj< unsigned char >::__new();
HXLINE( 473)		if ((length > (int)0)) {
HXLINE( 473)			_hx_array_set_size_exact(a,length);
            		}
HXLINE( 474)		return  ::haxe::io::Bytes_obj::__alloc( HX_CTX ,length,a);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,alloc,return )

 ::haxe::io::Bytes Bytes_obj::ofString(::String s){
            	HX_GC_STACKFRAME(&_hx_pos_bafb5aba549b371d_490_ofString)
HXLINE( 501)		::Array< unsigned char > a = ::Array_obj< unsigned char >::__new();
HXLINE( 502)		::__hxcpp_bytes_of_string(a,s);
HXLINE( 503)		return  ::haxe::io::Bytes_obj::__alloc( HX_CTX ,a->length,a);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,ofString,return )

 ::haxe::io::Bytes Bytes_obj::ofData(::Array< unsigned char > b){
            	HX_GC_STACKFRAME(&_hx_pos_bafb5aba549b371d_561_ofData)
HXDLIN( 561)		return  ::haxe::io::Bytes_obj::__alloc( HX_CTX ,b->length,b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,ofData,return )


hx::ObjectPtr< Bytes_obj > Bytes_obj::__new(int length,::Array< unsigned char > b) {
	hx::ObjectPtr< Bytes_obj > __this = new Bytes_obj();
	__this->__construct(length,b);
	return __this;
}

hx::ObjectPtr< Bytes_obj > Bytes_obj::__alloc(hx::Ctx *_hx_ctx,int length,::Array< unsigned char > b) {
	Bytes_obj *__this = (Bytes_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Bytes_obj), true, "haxe.io.Bytes"));
	*(void **)__this = Bytes_obj::_hx_vtable;
	__this->__construct(length,b);
	return __this;
}

Bytes_obj::Bytes_obj()
{
}

void Bytes_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bytes);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_END_CLASS();
}

void Bytes_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(b,"b");
}

hx::Val Bytes_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return hx::Val( b ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return hx::Val( length ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getString") ) { return hx::Val( getString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Bytes_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { outValue = alloc_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ofData") ) { outValue = ofData_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ofString") ) { outValue = ofString_dyn(); return true; }
	}
	return false;
}

hx::Val Bytes_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::Array< unsigned char > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bytes_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Bytes_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Bytes_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsObject /*Array< unsigned char >*/ ,(int)offsetof(Bytes_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Bytes_obj_sStaticStorageInfo = 0;
#endif

static ::String Bytes_obj_sMemberFields[] = {
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("getString","\x07","\xb2","\x86","\x8d"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void Bytes_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bytes_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Bytes_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bytes_obj::__mClass,"__mClass");
};

#endif

hx::Class Bytes_obj::__mClass;

static ::String Bytes_obj_sStaticFields[] = {
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("ofString","\x48","\x69","\x31","\xa4"),
	HX_HCSTRING("ofData","\xe1","\xba","\xb8","\x49"),
	::String(null())
};

void Bytes_obj::__register()
{
	hx::Object *dummy = new Bytes_obj;
	Bytes_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.Bytes","\x0b","\x53","\x6f","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Bytes_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Bytes_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Bytes_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Bytes_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bytes_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Bytes_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Bytes_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Bytes_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
