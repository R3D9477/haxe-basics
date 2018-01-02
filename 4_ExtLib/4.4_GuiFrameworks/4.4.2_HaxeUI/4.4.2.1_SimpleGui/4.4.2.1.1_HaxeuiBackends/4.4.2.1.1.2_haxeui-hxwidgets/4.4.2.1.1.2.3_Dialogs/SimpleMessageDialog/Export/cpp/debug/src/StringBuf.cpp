// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7d06a5e189b00d33_31_new,"StringBuf","new",0xaaa8f4b4,"StringBuf.new","/usr/share/haxe/std/cpp/_std/StringBuf.hx",31,0x59033f00)
HX_LOCAL_STACK_FRAME(_hx_pos_7d06a5e189b00d33_35_charBufAsString,"StringBuf","charBufAsString",0x54d38cd4,"StringBuf.charBufAsString","/usr/share/haxe/std/cpp/_std/StringBuf.hx",35,0x59033f00)
HX_LOCAL_STACK_FRAME(_hx_pos_7d06a5e189b00d33_41_flush,"StringBuf","flush",0xc7c14418,"StringBuf.flush","/usr/share/haxe/std/cpp/_std/StringBuf.hx",41,0x59033f00)
HX_LOCAL_STACK_FRAME(_hx_pos_7d06a5e189b00d33_48_get_length,"StringBuf","get_length",0xe673d2db,"StringBuf.get_length","/usr/share/haxe/std/cpp/_std/StringBuf.hx",48,0x59033f00)
HX_LOCAL_STACK_FRAME(_hx_pos_7d06a5e189b00d33_79_toString,"StringBuf","toString",0x68f17bd8,"StringBuf.toString","/usr/share/haxe/std/cpp/_std/StringBuf.hx",79,0x59033f00)

void StringBuf_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7d06a5e189b00d33_31_new)
            	}

Dynamic StringBuf_obj::__CreateEmpty() { return new StringBuf_obj; }

void *StringBuf_obj::_hx_vtable = 0;

Dynamic StringBuf_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StringBuf_obj > _hx_result = new StringBuf_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StringBuf_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6983cac2;
}

::String StringBuf_obj::charBufAsString(){
            	HX_STACKFRAME(&_hx_pos_7d06a5e189b00d33_35_charBufAsString)
HXLINE(  36)		int len = this->charBuf->length;
HXLINE(  37)		this->charBuf->push((int)0);
HXLINE(  38)		::cpp::Pointer< char > inPtr = ( (::cpp::Pointer< char >)(::cpp::Pointer_obj::arrayElem(this->charBuf,(int)0)) );
HXDLIN(  38)		return ::String(inPtr->ptr,len);
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringBuf_obj,charBufAsString,return )

void StringBuf_obj::flush(){
            	HX_STACKFRAME(&_hx_pos_7d06a5e189b00d33_41_flush)
HXLINE(  42)		if (hx::IsNull( this->b )) {
HXLINE(  43)			this->b = ::Array_obj< ::String >::__new(1)->init(0,this->charBufAsString());
            		}
            		else {
HXLINE(  45)			::Array< ::String > _hx_tmp = this->b;
HXDLIN(  45)			_hx_tmp->push(this->charBufAsString());
            		}
HXLINE(  46)		this->charBuf = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringBuf_obj,flush,(void))

int StringBuf_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_7d06a5e189b00d33_48_get_length)
HXLINE(  49)		int len = (int)0;
HXLINE(  50)		if (hx::IsNotNull( this->charBuf )) {
HXLINE(  51)			len = this->charBuf->length;
            		}
HXLINE(  52)		if (hx::IsNotNull( this->b )) {
HXLINE(  53)			int _g = (int)0;
HXDLIN(  53)			::Array< ::String > _g1 = this->b;
HXDLIN(  53)			while((_g < _g1->length)){
HXLINE(  53)				::String s = _g1->__get(_g);
HXDLIN(  53)				_g = (_g + (int)1);
HXLINE(  54)				int len1;
HXDLIN(  54)				if (hx::IsNull( s )) {
HXLINE(  54)					len1 = (int)4;
            				}
            				else {
HXLINE(  54)					len1 = s.length;
            				}
HXDLIN(  54)				len = (len + len1);
            			}
            		}
HXLINE(  55)		return len;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringBuf_obj,get_length,return )

::String StringBuf_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_7d06a5e189b00d33_79_toString)
HXLINE(  80)		if (hx::IsNotNull( this->charBuf )) {
HXLINE(  81)			this->flush();
            		}
HXLINE(  82)		bool _hx_tmp;
HXDLIN(  82)		if (hx::IsNotNull( this->b )) {
HXLINE(  82)			_hx_tmp = (this->b->length == (int)0);
            		}
            		else {
HXLINE(  82)			_hx_tmp = true;
            		}
HXDLIN(  82)		if (_hx_tmp) {
HXLINE(  83)			return HX_("",00,00,00,00);
            		}
HXLINE(  84)		if ((this->b->length == (int)1)) {
HXLINE(  85)			return this->b->__get((int)0);
            		}
HXLINE(  86)		return this->b->join(HX_("",00,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringBuf_obj,toString,return )


StringBuf_obj::StringBuf_obj()
{
}

void StringBuf_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StringBuf);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(charBuf,"charBuf");
	HX_MARK_END_CLASS();
}

void StringBuf_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(charBuf,"charBuf");
}

hx::Val StringBuf_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return hx::Val( b ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { return hx::Val( flush_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_length() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"charBuf") ) { return hx::Val( charBuf ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return hx::Val( get_length_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"charBufAsString") ) { return hx::Val( charBufAsString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val StringBuf_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"charBuf") ) { charBuf=inValue.Cast< ::Array< char > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StringBuf_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("charBuf","\xfd","\x85","\x55","\xcf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo StringBuf_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(StringBuf_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsObject /*Array< ::cpp::Char >*/ ,(int)offsetof(StringBuf_obj,charBuf),HX_HCSTRING("charBuf","\xfd","\x85","\x55","\xcf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *StringBuf_obj_sStaticStorageInfo = 0;
#endif

static ::String StringBuf_obj_sMemberFields[] = {
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("charBuf","\xfd","\x85","\x55","\xcf"),
	HX_HCSTRING("charBufAsString","\x80","\x3a","\x2f","\x0a"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void StringBuf_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringBuf_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StringBuf_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringBuf_obj::__mClass,"__mClass");
};

#endif

hx::Class StringBuf_obj::__mClass;

void StringBuf_obj::__register()
{
	hx::Object *dummy = new StringBuf_obj;
	StringBuf_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("StringBuf","\xc2","\xca","\x83","\x69");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StringBuf_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(StringBuf_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StringBuf_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StringBuf_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringBuf_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringBuf_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

