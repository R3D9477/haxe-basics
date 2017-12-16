// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
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
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_VerticalLayout
#include <haxe/ui/layouts/VerticalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_11f720eb43d1a658_10_new,"haxe.ui.containers.VBox","new",0x2e4126d1,"haxe.ui.containers.VBox.new","haxe/ui/containers/VBox.hx",10,0xbb032e7e)
HX_LOCAL_STACK_FRAME(_hx_pos_1ace1ec461b3ea71_1_cloneComponent,"haxe.ui.containers.VBox","cloneComponent",0xe9dcb6cf,"haxe.ui.containers.VBox.cloneComponent","src/haxe/ui/containers/VBox.hx",1,0xfd6fa109)
HX_LOCAL_STACK_FRAME(_hx_pos_1ace1ec461b3ea71_2_self,"haxe.ui.containers.VBox","self",0x4e0ed7fb,"haxe.ui.containers.VBox.self","src/haxe/ui/containers/VBox.hx",2,0xfd6fa109)
namespace haxe{
namespace ui{
namespace containers{

void VBox_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_11f720eb43d1a658_10_new)
HXLINE(  11)		super::__construct();
HXLINE(  12)		this->set_layout( ::haxe::ui::layouts::VerticalLayout_obj::__alloc( HX_CTX ));
            	}

Dynamic VBox_obj::__CreateEmpty() { return new VBox_obj; }

void *VBox_obj::_hx_vtable = 0;

Dynamic VBox_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VBox_obj > _hx_result = new VBox_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VBox_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x41081cbb) {
		if (inClassId<=(int)0x091af94d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x091af94d;
		} else {
			return inClassId==(int)0x41081cbb;
		}
	} else {
		return inClassId==(int)0x4a06d0bc || inClassId==(int)0x7140e8dc;
	}
}

 ::haxe::ui::core::Component VBox_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_1ace1ec461b3ea71_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::containers::VBox c = ( ( ::haxe::ui::containers::VBox)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component VBox_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_1ace1ec461b3ea71_2_self)
HXDLIN(   2)		return  ::haxe::ui::containers::VBox_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< VBox_obj > VBox_obj::__new() {
	hx::ObjectPtr< VBox_obj > __this = new VBox_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< VBox_obj > VBox_obj::__alloc(hx::Ctx *_hx_ctx) {
	VBox_obj *__this = (VBox_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VBox_obj), true, "haxe.ui.containers.VBox"));
	*(void **)__this = VBox_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VBox_obj::VBox_obj()
{
}

hx::Val VBox_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *VBox_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *VBox_obj_sStaticStorageInfo = 0;
#endif

static ::String VBox_obj_sMemberFields[] = {
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void VBox_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VBox_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VBox_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VBox_obj::__mClass,"__mClass");
};

#endif

hx::Class VBox_obj::__mClass;

void VBox_obj::__register()
{
	hx::Object *dummy = new VBox_obj;
	VBox_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.containers.VBox","\x5f","\x6a","\x77","\x5b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = VBox_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VBox_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VBox_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VBox_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VBox_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
