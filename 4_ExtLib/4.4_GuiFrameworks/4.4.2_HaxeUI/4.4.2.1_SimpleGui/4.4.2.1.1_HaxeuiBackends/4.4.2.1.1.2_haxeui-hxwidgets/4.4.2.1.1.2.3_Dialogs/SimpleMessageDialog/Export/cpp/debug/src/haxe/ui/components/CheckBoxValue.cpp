// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBoxValue
#include <haxe/ui/components/CheckBoxValue.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
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
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_06d8b660a0799600_208_new,"haxe.ui.components.CheckBoxValue","new",0xe85b4eda,"haxe.ui.components.CheckBoxValue.new","haxe/ui/components/CheckBox.hx",208,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_06d8b660a0799600_223_applyStyle,"haxe.ui.components.CheckBoxValue","applyStyle",0x7c7dc5a9,"haxe.ui.components.CheckBoxValue.applyStyle","haxe/ui/components/CheckBox.hx",223,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_fb2e763a21c1b6c2_1_cloneComponent,"haxe.ui.components.CheckBoxValue","cloneComponent",0xcade6966,"haxe.ui.components.CheckBoxValue.cloneComponent","src/haxe/ui/components/CheckBoxValue.hx",1,0xe8e5cd4c)
HX_LOCAL_STACK_FRAME(_hx_pos_fb2e763a21c1b6c2_2_self,"haxe.ui.components.CheckBoxValue","self",0x6ad7b7d2,"haxe.ui.components.CheckBoxValue.self","src/haxe/ui/components/CheckBoxValue.hx",2,0xe8e5cd4c)
namespace haxe{
namespace ui{
namespace components{

void CheckBoxValue_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_06d8b660a0799600_208_new)
HXLINE( 209)		super::__construct();
HXLINE( 214)		 ::haxe::ui::components::Image icon = ( ( ::haxe::ui::components::Image)(this->findComponent(null(),hx::ClassOf< ::haxe::ui::components::Image >(),null(),null())) );
HXLINE( 215)		if (hx::IsNull( icon )) {
HXLINE( 216)			icon =  ::haxe::ui::components::Image_obj::__alloc( HX_CTX );
HXLINE( 217)			icon->set_id(HX_("checkbox-icon",03,1d,55,25));
HXLINE( 218)			icon->addClass(HX_("checkbox-icon",03,1d,55,25),null(),null());
HXLINE( 219)			this->addComponent(icon);
            		}
            	}

Dynamic CheckBoxValue_obj::__CreateEmpty() { return new CheckBoxValue_obj; }

void *CheckBoxValue_obj::_hx_vtable = 0;

Dynamic CheckBoxValue_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CheckBoxValue_obj > _hx_result = new CheckBoxValue_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CheckBoxValue_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a06d0bc) {
		if (inClassId<=(int)0x2851da96) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2851da96;
		} else {
			return inClassId==(int)0x4a06d0bc;
		}
	} else {
		return inClassId==(int)0x5f23eff4 || inClassId==(int)0x7140e8dc;
	}
}

void CheckBoxValue_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_06d8b660a0799600_223_applyStyle)
HXLINE( 224)		this->super::applyStyle(style);
HXLINE( 225)		 ::haxe::ui::components::Image icon = ( ( ::haxe::ui::components::Image)(this->findComponent(null(),hx::ClassOf< ::haxe::ui::components::Image >(),null(),null())) );
HXLINE( 226)		if (hx::IsNotNull( icon )) {
HXLINE( 227)			icon->set_resource(style->icon);
            		}
            	}


 ::haxe::ui::core::Component CheckBoxValue_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_fb2e763a21c1b6c2_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::components::CheckBoxValue c = ( ( ::haxe::ui::components::CheckBoxValue)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component CheckBoxValue_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_fb2e763a21c1b6c2_2_self)
HXDLIN(   2)		return  ::haxe::ui::components::CheckBoxValue_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< CheckBoxValue_obj > CheckBoxValue_obj::__new() {
	hx::ObjectPtr< CheckBoxValue_obj > __this = new CheckBoxValue_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< CheckBoxValue_obj > CheckBoxValue_obj::__alloc(hx::Ctx *_hx_ctx) {
	CheckBoxValue_obj *__this = (CheckBoxValue_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CheckBoxValue_obj), true, "haxe.ui.components.CheckBoxValue"));
	*(void **)__this = CheckBoxValue_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CheckBoxValue_obj::CheckBoxValue_obj()
{
}

hx::Val CheckBoxValue_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return hx::Val( applyStyle_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CheckBoxValue_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CheckBoxValue_obj_sStaticStorageInfo = 0;
#endif

static ::String CheckBoxValue_obj_sMemberFields[] = {
	HX_HCSTRING("applyStyle","\xe3","\x20","\x6f","\x2f"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void CheckBoxValue_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CheckBoxValue_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CheckBoxValue_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CheckBoxValue_obj::__mClass,"__mClass");
};

#endif

hx::Class CheckBoxValue_obj::__mClass;

void CheckBoxValue_obj::__register()
{
	hx::Object *dummy = new CheckBoxValue_obj;
	CheckBoxValue_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.CheckBoxValue","\xe8","\x99","\xe8","\xd1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CheckBoxValue_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CheckBoxValue_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CheckBoxValue_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CheckBoxValue_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CheckBoxValue_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CheckBoxValue_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
