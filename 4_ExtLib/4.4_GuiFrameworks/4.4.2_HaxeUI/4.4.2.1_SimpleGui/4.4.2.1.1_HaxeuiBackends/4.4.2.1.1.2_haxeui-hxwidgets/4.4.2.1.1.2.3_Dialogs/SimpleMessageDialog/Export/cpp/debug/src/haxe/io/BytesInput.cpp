// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_e19d9b72e9fc063d_38_new,"haxe.io.BytesInput","new",0x7fa18571,"haxe.io.BytesInput.new","/usr/share/haxe/std/haxe/io/BytesInput.hx",38,0x845f32e4)
HX_LOCAL_STACK_FRAME(_hx_pos_e19d9b72e9fc063d_90_readByte,"haxe.io.BytesInput","readByte",0xb70e46cd,"haxe.io.BytesInput.readByte","/usr/share/haxe/std/haxe/io/BytesInput.hx",90,0x845f32e4)
HX_LOCAL_STACK_FRAME(_hx_pos_e19d9b72e9fc063d_111_readBytes,"haxe.io.BytesInput","readBytes",0x756fad06,"haxe.io.BytesInput.readBytes","/usr/share/haxe/std/haxe/io/BytesInput.hx",111,0x845f32e4)
namespace haxe{
namespace io{

void BytesInput_obj::__construct( ::haxe::io::Bytes b, ::Dynamic pos, ::Dynamic len){
            	HX_STACKFRAME(&_hx_pos_e19d9b72e9fc063d_38_new)
HXLINE(  39)		if (hx::IsNull( pos )) {
HXLINE(  39)			pos = (int)0;
            		}
HXLINE(  40)		if (hx::IsNull( len )) {
HXLINE(  40)			len = (b->length - pos);
            		}
HXLINE(  41)		bool _hx_tmp;
HXDLIN(  41)		bool _hx_tmp1;
HXDLIN(  41)		if (hx::IsGreaterEq( pos,(int)0 )) {
HXLINE(  41)			_hx_tmp1 = hx::IsLess( len,(int)0 );
            		}
            		else {
HXLINE(  41)			_hx_tmp1 = true;
            		}
HXDLIN(  41)		if (!(_hx_tmp1)) {
HXLINE(  41)			_hx_tmp = ((pos + len) > b->length);
            		}
            		else {
HXLINE(  41)			_hx_tmp = true;
            		}
HXDLIN(  41)		if (_hx_tmp) {
HXLINE(  41)			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds_dyn());
            		}
HXLINE(  53)		this->b = b->b;
HXLINE(  54)		this->pos = pos;
HXLINE(  55)		this->len = len;
HXLINE(  56)		this->totlen = len;
            	}

Dynamic BytesInput_obj::__CreateEmpty() { return new BytesInput_obj; }

void *BytesInput_obj::_hx_vtable = 0;

Dynamic BytesInput_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BytesInput_obj > _hx_result = new BytesInput_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool BytesInput_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2a8878af) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2a8878af;
	} else {
		return inClassId==(int)0x5c18cd32;
	}
}

int BytesInput_obj::readByte(){
            	HX_GC_STACKFRAME(&_hx_pos_e19d9b72e9fc063d_90_readByte)
HXLINE(  94)		if ((this->len == (int)0)) {
HXLINE(  95)			HX_STACK_DO_THROW( ::haxe::io::Eof_obj::__alloc( HX_CTX ));
            		}
HXLINE(  96)		this->len--;
HXLINE( 102)		::Array< unsigned char > _hx_tmp = this->b;
HXDLIN( 102)		return _hx_tmp->__get(this->pos++);
            	}


int BytesInput_obj::readBytes( ::haxe::io::Bytes buf,int pos,int len){
            	HX_GC_STACKFRAME(&_hx_pos_e19d9b72e9fc063d_111_readBytes)
HXLINE( 113)		bool _hx_tmp;
HXDLIN( 113)		bool _hx_tmp1;
HXDLIN( 113)		if ((pos >= (int)0)) {
HXLINE( 113)			_hx_tmp1 = (len < (int)0);
            		}
            		else {
HXLINE( 113)			_hx_tmp1 = true;
            		}
HXDLIN( 113)		if (!(_hx_tmp1)) {
HXLINE( 113)			_hx_tmp = ((pos + len) > buf->length);
            		}
            		else {
HXLINE( 113)			_hx_tmp = true;
            		}
HXDLIN( 113)		if (_hx_tmp) {
HXLINE( 114)			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds_dyn());
            		}
HXLINE( 137)		bool _hx_tmp2;
HXDLIN( 137)		if ((this->len == (int)0)) {
HXLINE( 137)			_hx_tmp2 = (len > (int)0);
            		}
            		else {
HXLINE( 137)			_hx_tmp2 = false;
            		}
HXDLIN( 137)		if (_hx_tmp2) {
HXLINE( 138)			HX_STACK_DO_THROW( ::haxe::io::Eof_obj::__alloc( HX_CTX ));
            		}
HXLINE( 139)		if ((this->len < len)) {
HXLINE( 140)			len = this->len;
            		}
HXLINE( 148)		::Array< unsigned char > b1 = this->b;
HXLINE( 149)		::Array< unsigned char > b2 = buf->b;
HXLINE( 150)		{
HXLINE( 150)			int _g1 = (int)0;
HXDLIN( 150)			int _g = len;
HXDLIN( 150)			while((_g1 < _g)){
HXLINE( 150)				_g1 = (_g1 + (int)1);
HXDLIN( 150)				int i = (_g1 - (int)1);
HXLINE( 151)				b2[(pos + i)] = b1->__get((this->pos + i));
            			}
            		}
HXLINE( 153)		 ::haxe::io::BytesInput _hx_tmp3 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 153)		_hx_tmp3->pos = (_hx_tmp3->pos + len);
HXLINE( 154)		 ::haxe::io::BytesInput _hx_tmp4 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 154)		_hx_tmp4->len = (_hx_tmp4->len - len);
HXLINE( 156)		return len;
            	}



hx::ObjectPtr< BytesInput_obj > BytesInput_obj::__new( ::haxe::io::Bytes b, ::Dynamic pos, ::Dynamic len) {
	hx::ObjectPtr< BytesInput_obj > __this = new BytesInput_obj();
	__this->__construct(b,pos,len);
	return __this;
}

hx::ObjectPtr< BytesInput_obj > BytesInput_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::io::Bytes b, ::Dynamic pos, ::Dynamic len) {
	BytesInput_obj *__this = (BytesInput_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BytesInput_obj), true, "haxe.io.BytesInput"));
	*(void **)__this = BytesInput_obj::_hx_vtable;
	__this->__construct(b,pos,len);
	return __this;
}

BytesInput_obj::BytesInput_obj()
{
}

void BytesInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BytesInput);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(len,"len");
	HX_MARK_MEMBER_NAME(totlen,"totlen");
	HX_MARK_END_CLASS();
}

void BytesInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(len,"len");
	HX_VISIT_MEMBER_NAME(totlen,"totlen");
}

hx::Val BytesInput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return hx::Val( b ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return hx::Val( pos ); }
		if (HX_FIELD_EQ(inName,"len") ) { return hx::Val( len ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"totlen") ) { return hx::Val( totlen ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return hx::Val( readByte_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return hx::Val( readBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val BytesInput_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::Array< unsigned char > >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"len") ) { len=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"totlen") ) { totlen=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BytesInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"));
	outFields->push(HX_HCSTRING("totlen","\xdc","\x4a","\xdf","\x97"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BytesInput_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< unsigned char >*/ ,(int)offsetof(BytesInput_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(BytesInput_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsInt,(int)offsetof(BytesInput_obj,len),HX_HCSTRING("len","\xd5","\x4b","\x52","\x00")},
	{hx::fsInt,(int)offsetof(BytesInput_obj,totlen),HX_HCSTRING("totlen","\xdc","\x4a","\xdf","\x97")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *BytesInput_obj_sStaticStorageInfo = 0;
#endif

static ::String BytesInput_obj_sMemberFields[] = {
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"),
	HX_HCSTRING("totlen","\xdc","\x4a","\xdf","\x97"),
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	::String(null()) };

static void BytesInput_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BytesInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BytesInput_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BytesInput_obj::__mClass,"__mClass");
};

#endif

hx::Class BytesInput_obj::__mClass;

void BytesInput_obj::__register()
{
	hx::Object *dummy = new BytesInput_obj;
	BytesInput_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.BytesInput","\xff","\xf8","\x5b","\x64");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BytesInput_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BytesInput_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BytesInput_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BytesInput_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BytesInput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BytesInput_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
