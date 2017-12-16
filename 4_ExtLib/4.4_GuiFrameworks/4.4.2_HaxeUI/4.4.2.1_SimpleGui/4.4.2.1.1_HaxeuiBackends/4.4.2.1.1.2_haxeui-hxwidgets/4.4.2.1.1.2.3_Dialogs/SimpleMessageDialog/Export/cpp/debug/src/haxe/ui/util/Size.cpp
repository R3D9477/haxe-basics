// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_util_Size
#include <haxe/ui/util/Size.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_38f647cb5eb58979_7_new,"haxe.ui.util.Size","new",0x75a231ed,"haxe.ui.util.Size.new","haxe/ui/util/Size.hx",7,0xe2ca42e2)
HX_LOCAL_STACK_FRAME(_hx_pos_38f647cb5eb58979_13_toString,"haxe.ui.util.Size","toString",0xc6b2afff,"haxe.ui.util.Size.toString","haxe/ui/util/Size.hx",13,0xe2ca42e2)
namespace haxe{
namespace ui{
namespace util{

void Size_obj::__construct(hx::Null< Float >  __o_width,hx::Null< Float >  __o_height){
Float width = __o_width.Default(0);
Float height = __o_height.Default(0);
            	HX_STACKFRAME(&_hx_pos_38f647cb5eb58979_7_new)
HXLINE(   8)		this->width = width;
HXLINE(   9)		this->height = height;
            	}

Dynamic Size_obj::__CreateEmpty() { return new Size_obj; }

void *Size_obj::_hx_vtable = 0;

Dynamic Size_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Size_obj > _hx_result = new Size_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Size_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x06f74981;
}

::String Size_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_38f647cb5eb58979_13_toString)
HXDLIN(  13)		return ((((HX_("[",5b,00,00,00) + this->width) + HX_("x",78,00,00,00)) + this->height) + HX_("]",5d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Size_obj,toString,return )


Size_obj::Size_obj()
{
}

hx::Val Size_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Size_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Size_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Size_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Size_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(Size_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Size_obj_sStaticStorageInfo = 0;
#endif

static ::String Size_obj_sMemberFields[] = {
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void Size_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Size_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Size_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Size_obj::__mClass,"__mClass");
};

#endif

hx::Class Size_obj::__mClass;

void Size_obj::__register()
{
	hx::Object *dummy = new Size_obj;
	Size_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.util.Size","\x7b","\xb7","\xf5","\x91");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Size_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Size_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Size_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Size_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Size_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Size_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
