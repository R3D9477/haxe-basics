// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_xml_XmlParserException
#include <haxe/xml/XmlParserException.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_24410f4636548391_77_new,"haxe.xml.XmlParserException","new",0xcd6fdfea,"haxe.xml.XmlParserException.new","/usr/share/haxe/std/haxe/xml/Parser.hx",77,0x2e27fb39)
HX_LOCAL_STACK_FRAME(_hx_pos_24410f4636548391_98_toString,"haxe.xml.XmlParserException","toString",0xed7c2ce2,"haxe.xml.XmlParserException.toString","/usr/share/haxe/std/haxe/xml/Parser.hx",98,0x2e27fb39)
namespace haxe{
namespace xml{

void XmlParserException_obj::__construct(::String message,::String xml,int position){
            	HX_STACKFRAME(&_hx_pos_24410f4636548391_77_new)
HXLINE(  78)		this->xml = xml;
HXLINE(  79)		this->message = message;
HXLINE(  80)		this->position = position;
HXLINE(  81)		this->lineNumber = (int)1;
HXLINE(  82)		this->positionAtLine = (int)0;
HXLINE(  84)		{
HXLINE(  84)			int _g1 = (int)0;
HXDLIN(  84)			int _g = position;
HXDLIN(  84)			while((_g1 < _g)){
HXLINE(  84)				_g1 = (_g1 + (int)1);
HXDLIN(  84)				int i = (_g1 - (int)1);
HXLINE(  86)				int c = xml.cca(i);
HXLINE(  87)				if ((c == (int)10)) {
HXLINE(  88)					this->lineNumber++;
HXLINE(  89)					this->positionAtLine = (int)0;
            				}
            				else {
HXLINE(  91)					if ((c != (int)13)) {
HXLINE(  91)						this->positionAtLine++;
            					}
            				}
            			}
            		}
            	}

Dynamic XmlParserException_obj::__CreateEmpty() { return new XmlParserException_obj; }

void *XmlParserException_obj::_hx_vtable = 0;

Dynamic XmlParserException_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< XmlParserException_obj > _hx_result = new XmlParserException_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool XmlParserException_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1fc2c25a;
}

::String XmlParserException_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_24410f4636548391_98_toString)
HXDLIN(  98)		::String _hx_tmp = (::Type_obj::getClassName(::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this))) + HX_(": ",a6,32,00,00));
HXDLIN(  98)		return (((((_hx_tmp + this->message) + HX_(" at line ",df,96,71,22)) + this->lineNumber) + HX_(" char ",6a,28,1f,11)) + this->positionAtLine);
            	}


HX_DEFINE_DYNAMIC_FUNC0(XmlParserException_obj,toString,return )


hx::ObjectPtr< XmlParserException_obj > XmlParserException_obj::__new(::String message,::String xml,int position) {
	hx::ObjectPtr< XmlParserException_obj > __this = new XmlParserException_obj();
	__this->__construct(message,xml,position);
	return __this;
}

hx::ObjectPtr< XmlParserException_obj > XmlParserException_obj::__alloc(hx::Ctx *_hx_ctx,::String message,::String xml,int position) {
	XmlParserException_obj *__this = (XmlParserException_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(XmlParserException_obj), true, "haxe.xml.XmlParserException"));
	*(void **)__this = XmlParserException_obj::_hx_vtable;
	__this->__construct(message,xml,position);
	return __this;
}

XmlParserException_obj::XmlParserException_obj()
{
}

void XmlParserException_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(XmlParserException);
	HX_MARK_MEMBER_NAME(message,"message");
	HX_MARK_MEMBER_NAME(lineNumber,"lineNumber");
	HX_MARK_MEMBER_NAME(positionAtLine,"positionAtLine");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(xml,"xml");
	HX_MARK_END_CLASS();
}

void XmlParserException_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(message,"message");
	HX_VISIT_MEMBER_NAME(lineNumber,"lineNumber");
	HX_VISIT_MEMBER_NAME(positionAtLine,"positionAtLine");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(xml,"xml");
}

hx::Val XmlParserException_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { return hx::Val( xml ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { return hx::Val( message ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return hx::Val( position ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lineNumber") ) { return hx::Val( lineNumber ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"positionAtLine") ) { return hx::Val( positionAtLine ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val XmlParserException_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { xml=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { message=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lineNumber") ) { lineNumber=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"positionAtLine") ) { positionAtLine=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void XmlParserException_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"));
	outFields->push(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"));
	outFields->push(HX_HCSTRING("positionAtLine","\x10","\x08","\x98","\x1a"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("xml","\xd7","\x6d","\x5b","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo XmlParserException_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(XmlParserException_obj,message),HX_HCSTRING("message","\xc7","\x35","\x11","\x9a")},
	{hx::fsInt,(int)offsetof(XmlParserException_obj,lineNumber),HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76")},
	{hx::fsInt,(int)offsetof(XmlParserException_obj,positionAtLine),HX_HCSTRING("positionAtLine","\x10","\x08","\x98","\x1a")},
	{hx::fsInt,(int)offsetof(XmlParserException_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{hx::fsString,(int)offsetof(XmlParserException_obj,xml),HX_HCSTRING("xml","\xd7","\x6d","\x5b","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *XmlParserException_obj_sStaticStorageInfo = 0;
#endif

static ::String XmlParserException_obj_sMemberFields[] = {
	HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"),
	HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"),
	HX_HCSTRING("positionAtLine","\x10","\x08","\x98","\x1a"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("xml","\xd7","\x6d","\x5b","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void XmlParserException_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(XmlParserException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void XmlParserException_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(XmlParserException_obj::__mClass,"__mClass");
};

#endif

hx::Class XmlParserException_obj::__mClass;

void XmlParserException_obj::__register()
{
	hx::Object *dummy = new XmlParserException_obj;
	XmlParserException_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.xml.XmlParserException","\xf8","\x62","\xfb","\x04");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = XmlParserException_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(XmlParserException_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< XmlParserException_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = XmlParserException_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = XmlParserException_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = XmlParserException_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace xml
