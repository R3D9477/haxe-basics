// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Header
#include <haxe/ui/containers/Header.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#include <haxe/ui/core/IComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a40a89a7fb53dd87_5_new,"haxe.ui.containers.Header","new",0x374e77a9,"haxe.ui.containers.Header.new","haxe/ui/containers/Header.hx",5,0x99daae66)
HX_LOCAL_STACK_FRAME(_hx_pos_7032f82487c20482_1_cloneComponent,"haxe.ui.containers.Header","cloneComponent",0x5db5e4f7,"haxe.ui.containers.Header.cloneComponent","src/haxe/ui/containers/Header.hx",1,0xa63119b1)
HX_LOCAL_STACK_FRAME(_hx_pos_7032f82487c20482_2_self,"haxe.ui.containers.Header","self",0x30a84423,"haxe.ui.containers.Header.self","src/haxe/ui/containers/Header.hx",2,0xa63119b1)
namespace haxe{
namespace ui{
namespace containers{

void Header_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a40a89a7fb53dd87_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic Header_obj::__CreateEmpty() { return new Header_obj; }

void *Header_obj::_hx_vtable = 0;

Dynamic Header_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Header_obj > _hx_result = new Header_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Header_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x576bea79) {
		if (inClassId<=(int)0x4a06d0bc) {
			if (inClassId<=(int)0x41081cbb) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x41081cbb;
			} else {
				return inClassId==(int)0x4a06d0bc;
			}
		} else {
			return inClassId==(int)0x576bea79;
		}
	} else {
		return inClassId==(int)0x7140e8dc || inClassId==(int)0x7eec346f;
	}
}

 ::haxe::ui::core::Component Header_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_7032f82487c20482_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::containers::Header c = ( ( ::haxe::ui::containers::Header)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component Header_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_7032f82487c20482_2_self)
HXDLIN(   2)		return  ::haxe::ui::containers::Header_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< Header_obj > Header_obj::__new() {
	hx::ObjectPtr< Header_obj > __this = new Header_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Header_obj > Header_obj::__alloc(hx::Ctx *_hx_ctx) {
	Header_obj *__this = (Header_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Header_obj), true, "haxe.ui.containers.Header"));
	*(void **)__this = Header_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Header_obj::Header_obj()
{
}

hx::Val Header_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Header_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Header_obj_sStaticStorageInfo = 0;
#endif

static ::String Header_obj_sMemberFields[] = {
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void Header_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Header_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Header_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Header_obj::__mClass,"__mClass");
};

#endif

hx::Class Header_obj::__mClass;

void Header_obj::__register()
{
	hx::Object *dummy = new Header_obj;
	Header_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.containers.Header","\x37","\x6f","\xa5","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Header_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Header_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Header_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Header_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Header_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Header_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
