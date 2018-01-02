// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets__FontStyle_FontStyle_Impl_
#include <wx/widgets/_FontStyle/FontStyle_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_04ac6a0355ce5b6b_10__new,"wx.widgets._FontStyle.FontStyle_Impl_","_new",0xdc0682ac,"wx.widgets._FontStyle.FontStyle_Impl_._new","wx/widgets/FontStyle.hx",10,0xe5e23c4a)
HX_LOCAL_STACK_FRAME(_hx_pos_04ac6a0355ce5b6b_6_boot,"wx.widgets._FontStyle.FontStyle_Impl_","boot",0xde02f17d,"wx.widgets._FontStyle.FontStyle_Impl_.boot","wx/widgets/FontStyle.hx",6,0xe5e23c4a)
HX_LOCAL_STACK_FRAME(_hx_pos_04ac6a0355ce5b6b_7_boot,"wx.widgets._FontStyle.FontStyle_Impl_","boot",0xde02f17d,"wx.widgets._FontStyle.FontStyle_Impl_.boot","wx/widgets/FontStyle.hx",7,0xe5e23c4a)
HX_LOCAL_STACK_FRAME(_hx_pos_04ac6a0355ce5b6b_8_boot,"wx.widgets._FontStyle.FontStyle_Impl_","boot",0xde02f17d,"wx.widgets._FontStyle.FontStyle_Impl_.boot","wx/widgets/FontStyle.hx",8,0xe5e23c4a)
namespace wx{
namespace widgets{
namespace _FontStyle{

void FontStyle_Impl__obj::__construct() { }

Dynamic FontStyle_Impl__obj::__CreateEmpty() { return new FontStyle_Impl__obj; }

void *FontStyle_Impl__obj::_hx_vtable = 0;

Dynamic FontStyle_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FontStyle_Impl__obj > _hx_result = new FontStyle_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FontStyle_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x210634bd;
}

int FontStyle_Impl__obj::NORMAL;

int FontStyle_Impl__obj::ITALIC;

int FontStyle_Impl__obj::SLANT;

int FontStyle_Impl__obj::_new(int i){
            	HX_STACKFRAME(&_hx_pos_04ac6a0355ce5b6b_10__new)
HXDLIN(  10)		int this1 = i;
HXDLIN(  10)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FontStyle_Impl__obj,_new,return )


FontStyle_Impl__obj::FontStyle_Impl__obj()
{
}

bool FontStyle_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FontStyle_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo FontStyle_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FontStyle_Impl__obj::NORMAL,HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")},
	{hx::fsInt,(void *) &FontStyle_Impl__obj::ITALIC,HX_HCSTRING("ITALIC","\xf0","\xda","\xe6","\xb8")},
	{hx::fsInt,(void *) &FontStyle_Impl__obj::SLANT,HX_HCSTRING("SLANT","\xce","\xf3","\xaf","\xfc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void FontStyle_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontStyle_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FontStyle_Impl__obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(FontStyle_Impl__obj::ITALIC,"ITALIC");
	HX_MARK_MEMBER_NAME(FontStyle_Impl__obj::SLANT,"SLANT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FontStyle_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontStyle_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FontStyle_Impl__obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(FontStyle_Impl__obj::ITALIC,"ITALIC");
	HX_VISIT_MEMBER_NAME(FontStyle_Impl__obj::SLANT,"SLANT");
};

#endif

hx::Class FontStyle_Impl__obj::__mClass;

static ::String FontStyle_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2"),
	HX_HCSTRING("ITALIC","\xf0","\xda","\xe6","\xb8"),
	HX_HCSTRING("SLANT","\xce","\xf3","\xaf","\xfc"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	::String(null())
};

void FontStyle_Impl__obj::__register()
{
	hx::Object *dummy = new FontStyle_Impl__obj;
	FontStyle_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("wx.widgets._FontStyle.FontStyle_Impl_","\x03","\xf7","\x19","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FontStyle_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FontStyle_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FontStyle_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FontStyle_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FontStyle_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FontStyle_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FontStyle_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FontStyle_Impl__obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_STACKFRAME(&_hx_pos_04ac6a0355ce5b6b_6_boot)
HXDLIN(   6)			int this1 = ::wxFONTSTYLE_NORMAL;
HXDLIN(   6)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_04ac6a0355ce5b6b_6_boot)
HXDLIN(   6)		NORMAL =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_STACKFRAME(&_hx_pos_04ac6a0355ce5b6b_7_boot)
HXDLIN(   7)			int this1 = ::wxFONTSTYLE_ITALIC;
HXDLIN(   7)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_04ac6a0355ce5b6b_7_boot)
HXDLIN(   7)		ITALIC =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_STACKFRAME(&_hx_pos_04ac6a0355ce5b6b_8_boot)
HXDLIN(   8)			int this1 = ::wxFONTSTYLE_SLANT;
HXDLIN(   8)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_04ac6a0355ce5b6b_8_boot)
HXDLIN(   8)		SLANT =  ::Dynamic(new _hx_Closure_0())();
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace _FontStyle
