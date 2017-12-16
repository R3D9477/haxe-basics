// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Progress
#include <haxe/ui/components/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VProgress
#include <haxe/ui/components/VProgress.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VProgressLayout
#include <haxe/ui/components/VProgressLayout.h>
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
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fa43b4ec5b75d85a_12_new,"haxe.ui.components.VProgress","new",0xc3036c4f,"haxe.ui.components.VProgress.new","haxe/ui/components/VProgress.hx",12,0xd642ece2)
HX_LOCAL_STACK_FRAME(_hx_pos_fa43b4ec5b75d85a_18_createDefaults,"haxe.ui.components.VProgress","createDefaults",0xb89bec1f,"haxe.ui.components.VProgress.createDefaults","haxe/ui/components/VProgress.hx",18,0xd642ece2)
HX_LOCAL_STACK_FRAME(_hx_pos_fa43b4ec5b75d85a_23_createChildren,"haxe.ui.components.VProgress","createChildren",0x796c34cc,"haxe.ui.components.VProgress.createChildren","haxe/ui/components/VProgress.hx",23,0xd642ece2)
HX_LOCAL_STACK_FRAME(_hx_pos_108cdc082992735f_1_cloneComponent,"haxe.ui.components.VProgress","cloneComponent",0xdd1e8611,"haxe.ui.components.VProgress.cloneComponent","src/haxe/ui/components/VProgress.hx",1,0x8f146277)
HX_LOCAL_STACK_FRAME(_hx_pos_108cdc082992735f_2_self,"haxe.ui.components.VProgress","self",0xe34960bd,"haxe.ui.components.VProgress.self","src/haxe/ui/components/VProgress.hx",2,0x8f146277)
namespace haxe{
namespace ui{
namespace components{

void VProgress_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_fa43b4ec5b75d85a_12_new)
HXDLIN(  12)		super::__construct();
            	}

Dynamic VProgress_obj::__CreateEmpty() { return new VProgress_obj; }

void *VProgress_obj::_hx_vtable = 0;

Dynamic VProgress_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VProgress_obj > _hx_result = new VProgress_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VProgress_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5f23eff4) {
		if (inClassId<=(int)0x4a06d0bc) {
			if (inClassId<=(int)0x0a86699d) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0a86699d;
			} else {
				return inClassId==(int)0x4a06d0bc;
			}
		} else {
			return inClassId==(int)0x5f23eff4;
		}
	} else {
		return inClassId==(int)0x7140e8dc || inClassId==(int)0x7f9bb26b;
	}
}

void VProgress_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_fa43b4ec5b75d85a_18_createDefaults)
HXLINE(  19)		this->super::createDefaults();
HXLINE(  20)		this->_defaultLayout =  ::haxe::ui::components::VProgressLayout_obj::__alloc( HX_CTX );
            	}


void VProgress_obj::createChildren(){
            	HX_STACKFRAME(&_hx_pos_fa43b4ec5b75d85a_23_createChildren)
HXLINE(  24)		this->super::createChildren();
HXLINE(  25)		if (hx::IsLessEq( this->get_componentWidth(),(int)0 )) {
HXLINE(  26)			this->set_componentWidth((int)20);
            		}
HXLINE(  28)		if (hx::IsLessEq( this->get_componentHeight(),(int)0 )) {
HXLINE(  29)			this->set_componentHeight((int)150);
            		}
            	}


 ::haxe::ui::core::Component VProgress_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_108cdc082992735f_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::components::VProgress c = ( ( ::haxe::ui::components::VProgress)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component VProgress_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_108cdc082992735f_2_self)
HXDLIN(   2)		return  ::haxe::ui::components::VProgress_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< VProgress_obj > VProgress_obj::__new() {
	hx::ObjectPtr< VProgress_obj > __this = new VProgress_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< VProgress_obj > VProgress_obj::__alloc(hx::Ctx *_hx_ctx) {
	VProgress_obj *__this = (VProgress_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VProgress_obj), true, "haxe.ui.components.VProgress"));
	*(void **)__this = VProgress_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VProgress_obj::VProgress_obj()
{
}

hx::Val VProgress_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"createChildren") ) { return hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *VProgress_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *VProgress_obj_sStaticStorageInfo = 0;
#endif

static ::String VProgress_obj_sMemberFields[] = {
	HX_HCSTRING("createDefaults","\xae","\x4f","\xd4","\x01"),
	HX_HCSTRING("createChildren","\x5b","\x98","\xa4","\xc2"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void VProgress_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VProgress_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VProgress_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VProgress_obj::__mClass,"__mClass");
};

#endif

hx::Class VProgress_obj::__mClass;

void VProgress_obj::__register()
{
	hx::Object *dummy = new VProgress_obj;
	VProgress_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.VProgress","\xdd","\x98","\x0d","\xf2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = VProgress_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VProgress_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VProgress_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VProgress_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VProgress_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VProgress_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
