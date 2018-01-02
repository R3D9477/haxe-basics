// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_d17caf3128e9a450
#define INCLUDED_d17caf3128e9a450
#include "wx/arrstr.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_hx_widgets_ArrayString
#include <hx/widgets/ArrayString.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f285829aa89858e7_13_new,"hx.widgets.ArrayString","new",0x802b377f,"hx.widgets.ArrayString.new","hx/widgets/ArrayString.hx",13,0x6ab4e553)
HX_LOCAL_STACK_FRAME(_hx_pos_f285829aa89858e7_16_destroy,"hx.widgets.ArrayString","destroy",0xfb090f99,"hx.widgets.ArrayString.destroy","hx/widgets/ArrayString.hx",16,0x6ab4e553)
HX_LOCAL_STACK_FRAME(_hx_pos_f285829aa89858e7_24_add,"hx.widgets.ArrayString","add",0x80215940,"hx.widgets.ArrayString.add","hx/widgets/ArrayString.hx",24,0x6ab4e553)
HX_LOCAL_STACK_FRAME(_hx_pos_f285829aa89858e7_47_get_arraystringRef,"hx.widgets.ArrayString","get_arraystringRef",0x9edcecd3,"hx.widgets.ArrayString.get_arraystringRef","hx/widgets/ArrayString.hx",47,0x6ab4e553)
HX_LOCAL_STACK_FRAME(_hx_pos_f285829aa89858e7_34_fromArray,"hx.widgets.ArrayString","fromArray",0x8110602e,"hx.widgets.ArrayString.fromArray","hx/widgets/ArrayString.hx",34,0x6ab4e553)
namespace hx{
namespace widgets{

void ArrayString_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f285829aa89858e7_13_new)
HXDLIN(  13)		this->_ref = ::cpp::Pointer_obj::fromRaw((new wxArrayString()))->reinterpret();
            	}

Dynamic ArrayString_obj::__CreateEmpty() { return new ArrayString_obj; }

void *ArrayString_obj::_hx_vtable = 0;

Dynamic ArrayString_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ArrayString_obj > _hx_result = new ArrayString_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ArrayString_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x76ea8cab;
}

void ArrayString_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_f285829aa89858e7_16_destroy)
HXLINE(  17)		this->_ref->destroy();
HXLINE(  18)		this->_ref = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayString_obj,destroy,(void))

int ArrayString_obj::add(::String str){
            	HX_STACKFRAME(&_hx_pos_f285829aa89858e7_24_add)
HXLINE(  25)		const char* this1 = str.__s;
HXDLIN(  25)		::cpp::Pointer<  wxString > s = ::cpp::Pointer_obj::fromRaw((new wxString(this1)));
HXLINE(  26)		 wxString tmp = s->get_ref();
HXDLIN(  26)		int n = this->get_arraystringRef()->ptr->Add(tmp);
HXLINE(  27)		s->destroy();
HXLINE(  28)		return n;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayString_obj,add,return )

::cpp::Pointer<  wxArrayString > ArrayString_obj::get_arraystringRef(){
            	HX_STACKFRAME(&_hx_pos_f285829aa89858e7_47_get_arraystringRef)
HXDLIN(  47)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayString_obj,get_arraystringRef,return )

 ::hx::widgets::ArrayString ArrayString_obj::fromArray(::Array< ::String > arr){
            	HX_GC_STACKFRAME(&_hx_pos_f285829aa89858e7_34_fromArray)
HXLINE(  35)		 ::hx::widgets::ArrayString a =  ::hx::widgets::ArrayString_obj::__alloc( HX_CTX );
HXLINE(  36)		{
HXLINE(  36)			int _g = (int)0;
HXDLIN(  36)			while((_g < arr->length)){
HXLINE(  36)				::String item = arr->__get(_g);
HXDLIN(  36)				_g = (_g + (int)1);
HXLINE(  37)				a->add(item);
            			}
            		}
HXLINE(  39)		return a;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayString_obj,fromArray,return )


hx::ObjectPtr< ArrayString_obj > ArrayString_obj::__new() {
	hx::ObjectPtr< ArrayString_obj > __this = new ArrayString_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ArrayString_obj > ArrayString_obj::__alloc(hx::Ctx *_hx_ctx) {
	ArrayString_obj *__this = (ArrayString_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ArrayString_obj), true, "hx.widgets.ArrayString"));
	*(void **)__this = ArrayString_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ArrayString_obj::ArrayString_obj()
{
}

void ArrayString_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayString);
	HX_MARK_MEMBER_NAME(_ref,"_ref");
	HX_MARK_MEMBER_NAME(arraystringRef,"arraystringRef");
	HX_MARK_END_CLASS();
}

void ArrayString_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ref,"_ref");
	HX_VISIT_MEMBER_NAME(arraystringRef,"arraystringRef");
}

hx::Val ArrayString_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { return hx::Val( _ref ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"arraystringRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_arraystringRef() : arraystringRef ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_arraystringRef") ) { return hx::Val( get_arraystringRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ArrayString_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromArray") ) { outValue = fromArray_dyn(); return true; }
	}
	return false;
}

hx::Val ArrayString_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { _ref=inValue.Cast< ::cpp::Pointer<  wxArrayString > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"arraystringRef") ) { arraystringRef=inValue.Cast< ::cpp::Pointer<  wxArrayString > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayString_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_ref","\x54","\x1e","\x22","\x3f"));
	outFields->push(HX_HCSTRING("arraystringRef","\x49","\x98","\xd9","\x99"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ArrayString_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxArrayString >*/ ,(int)offsetof(ArrayString_obj,_ref),HX_HCSTRING("_ref","\x54","\x1e","\x22","\x3f")},
	{hx::fsObject /*::cpp::Pointer< wxArrayString >*/ ,(int)offsetof(ArrayString_obj,arraystringRef),HX_HCSTRING("arraystringRef","\x49","\x98","\xd9","\x99")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ArrayString_obj_sStaticStorageInfo = 0;
#endif

static ::String ArrayString_obj_sMemberFields[] = {
	HX_HCSTRING("_ref","\x54","\x1e","\x22","\x3f"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("arraystringRef","\x49","\x98","\xd9","\x99"),
	HX_HCSTRING("get_arraystringRef","\x12","\x79","\x73","\x35"),
	::String(null()) };

static void ArrayString_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayString_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ArrayString_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayString_obj::__mClass,"__mClass");
};

#endif

hx::Class ArrayString_obj::__mClass;

static ::String ArrayString_obj_sStaticFields[] = {
	HX_HCSTRING("fromArray","\xcf","\x57","\x18","\xda"),
	::String(null())
};

void ArrayString_obj::__register()
{
	hx::Object *dummy = new ArrayString_obj;
	ArrayString_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.ArrayString","\x0d","\x0c","\x44","\xa4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArrayString_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ArrayString_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ArrayString_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ArrayString_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ArrayString_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ArrayString_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayString_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayString_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
