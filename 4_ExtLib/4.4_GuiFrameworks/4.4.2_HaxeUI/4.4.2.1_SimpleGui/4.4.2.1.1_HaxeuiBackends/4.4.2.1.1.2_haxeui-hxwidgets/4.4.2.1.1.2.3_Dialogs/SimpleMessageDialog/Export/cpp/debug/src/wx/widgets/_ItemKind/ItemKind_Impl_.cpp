// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets__ItemKind_ItemKind_Impl_
#include <wx/widgets/_ItemKind/ItemKind_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d7e29b35b250816f_12__new,"wx.widgets._ItemKind.ItemKind_Impl_","_new",0x5fb9e3b4,"wx.widgets._ItemKind.ItemKind_Impl_._new","wx/widgets/ItemKind.hx",12,0xa1cb1fa9)
HX_LOCAL_STACK_FRAME(_hx_pos_d7e29b35b250816f_6_boot,"wx.widgets._ItemKind.ItemKind_Impl_","boot",0x61b65285,"wx.widgets._ItemKind.ItemKind_Impl_.boot","wx/widgets/ItemKind.hx",6,0xa1cb1fa9)
HX_LOCAL_STACK_FRAME(_hx_pos_d7e29b35b250816f_7_boot,"wx.widgets._ItemKind.ItemKind_Impl_","boot",0x61b65285,"wx.widgets._ItemKind.ItemKind_Impl_.boot","wx/widgets/ItemKind.hx",7,0xa1cb1fa9)
HX_LOCAL_STACK_FRAME(_hx_pos_d7e29b35b250816f_8_boot,"wx.widgets._ItemKind.ItemKind_Impl_","boot",0x61b65285,"wx.widgets._ItemKind.ItemKind_Impl_.boot","wx/widgets/ItemKind.hx",8,0xa1cb1fa9)
HX_LOCAL_STACK_FRAME(_hx_pos_d7e29b35b250816f_9_boot,"wx.widgets._ItemKind.ItemKind_Impl_","boot",0x61b65285,"wx.widgets._ItemKind.ItemKind_Impl_.boot","wx/widgets/ItemKind.hx",9,0xa1cb1fa9)
HX_LOCAL_STACK_FRAME(_hx_pos_d7e29b35b250816f_10_boot,"wx.widgets._ItemKind.ItemKind_Impl_","boot",0x61b65285,"wx.widgets._ItemKind.ItemKind_Impl_.boot","wx/widgets/ItemKind.hx",10,0xa1cb1fa9)
namespace wx{
namespace widgets{
namespace _ItemKind{

void ItemKind_Impl__obj::__construct() { }

Dynamic ItemKind_Impl__obj::__CreateEmpty() { return new ItemKind_Impl__obj; }

void *ItemKind_Impl__obj::_hx_vtable = 0;

Dynamic ItemKind_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ItemKind_Impl__obj > _hx_result = new ItemKind_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ItemKind_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3522a11f;
}

int ItemKind_Impl__obj::ITEM_SEPARATOR;

int ItemKind_Impl__obj::ITEM_NORMAL;

int ItemKind_Impl__obj::ITEM_CHECK;

int ItemKind_Impl__obj::ITEM_RADIO;

int ItemKind_Impl__obj::ITEM_DROPDOWN;

int ItemKind_Impl__obj::_new(int i){
            	HX_STACKFRAME(&_hx_pos_d7e29b35b250816f_12__new)
HXDLIN(  12)		int this1 = i;
HXDLIN(  12)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ItemKind_Impl__obj,_new,return )


ItemKind_Impl__obj::ItemKind_Impl__obj()
{
}

bool ItemKind_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ItemKind_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo ItemKind_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ItemKind_Impl__obj::ITEM_SEPARATOR,HX_HCSTRING("ITEM_SEPARATOR","\xd9","\x0e","\x8f","\x6a")},
	{hx::fsInt,(void *) &ItemKind_Impl__obj::ITEM_NORMAL,HX_HCSTRING("ITEM_NORMAL","\x13","\xbb","\x7c","\x38")},
	{hx::fsInt,(void *) &ItemKind_Impl__obj::ITEM_CHECK,HX_HCSTRING("ITEM_CHECK","\x3c","\x35","\x8c","\xb8")},
	{hx::fsInt,(void *) &ItemKind_Impl__obj::ITEM_RADIO,HX_HCSTRING("ITEM_RADIO","\x6f","\xad","\xed","\x56")},
	{hx::fsInt,(void *) &ItemKind_Impl__obj::ITEM_DROPDOWN,HX_HCSTRING("ITEM_DROPDOWN","\xfd","\xb3","\x57","\xa7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void ItemKind_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ItemKind_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ItemKind_Impl__obj::ITEM_SEPARATOR,"ITEM_SEPARATOR");
	HX_MARK_MEMBER_NAME(ItemKind_Impl__obj::ITEM_NORMAL,"ITEM_NORMAL");
	HX_MARK_MEMBER_NAME(ItemKind_Impl__obj::ITEM_CHECK,"ITEM_CHECK");
	HX_MARK_MEMBER_NAME(ItemKind_Impl__obj::ITEM_RADIO,"ITEM_RADIO");
	HX_MARK_MEMBER_NAME(ItemKind_Impl__obj::ITEM_DROPDOWN,"ITEM_DROPDOWN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ItemKind_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ItemKind_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ItemKind_Impl__obj::ITEM_SEPARATOR,"ITEM_SEPARATOR");
	HX_VISIT_MEMBER_NAME(ItemKind_Impl__obj::ITEM_NORMAL,"ITEM_NORMAL");
	HX_VISIT_MEMBER_NAME(ItemKind_Impl__obj::ITEM_CHECK,"ITEM_CHECK");
	HX_VISIT_MEMBER_NAME(ItemKind_Impl__obj::ITEM_RADIO,"ITEM_RADIO");
	HX_VISIT_MEMBER_NAME(ItemKind_Impl__obj::ITEM_DROPDOWN,"ITEM_DROPDOWN");
};

#endif

hx::Class ItemKind_Impl__obj::__mClass;

static ::String ItemKind_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("ITEM_SEPARATOR","\xd9","\x0e","\x8f","\x6a"),
	HX_HCSTRING("ITEM_NORMAL","\x13","\xbb","\x7c","\x38"),
	HX_HCSTRING("ITEM_CHECK","\x3c","\x35","\x8c","\xb8"),
	HX_HCSTRING("ITEM_RADIO","\x6f","\xad","\xed","\x56"),
	HX_HCSTRING("ITEM_DROPDOWN","\xfd","\xb3","\x57","\xa7"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	::String(null())
};

void ItemKind_Impl__obj::__register()
{
	hx::Object *dummy = new ItemKind_Impl__obj;
	ItemKind_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("wx.widgets._ItemKind.ItemKind_Impl_","\xfb","\x32","\x32","\x5a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ItemKind_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ItemKind_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ItemKind_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ItemKind_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ItemKind_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ItemKind_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ItemKind_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ItemKind_Impl__obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_STACKFRAME(&_hx_pos_d7e29b35b250816f_6_boot)
HXDLIN(   6)			int this1 = ::wxITEM_SEPARATOR;
HXDLIN(   6)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_d7e29b35b250816f_6_boot)
HXDLIN(   6)		ITEM_SEPARATOR =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_STACKFRAME(&_hx_pos_d7e29b35b250816f_7_boot)
HXDLIN(   7)			int this1 = ::wxITEM_NORMAL;
HXDLIN(   7)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_d7e29b35b250816f_7_boot)
HXDLIN(   7)		ITEM_NORMAL =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_STACKFRAME(&_hx_pos_d7e29b35b250816f_8_boot)
HXDLIN(   8)			int this1 = ::wxITEM_CHECK;
HXDLIN(   8)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_d7e29b35b250816f_8_boot)
HXDLIN(   8)		ITEM_CHECK =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_STACKFRAME(&_hx_pos_d7e29b35b250816f_9_boot)
HXDLIN(   9)			int this1 = ::wxITEM_RADIO;
HXDLIN(   9)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_d7e29b35b250816f_9_boot)
HXDLIN(   9)		ITEM_RADIO =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_STACKFRAME(&_hx_pos_d7e29b35b250816f_10_boot)
HXDLIN(  10)			int this1 = ::wxITEM_DROPDOWN;
HXDLIN(  10)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_d7e29b35b250816f_10_boot)
HXDLIN(  10)		ITEM_DROPDOWN =  ::Dynamic(new _hx_Closure_0())();
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace _ItemKind
